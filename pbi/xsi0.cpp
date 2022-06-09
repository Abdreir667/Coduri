#include <iostream>
#include <vector>
//Simple Display
void Display(std::vector<char> const &grid){
    //Creez un grid basic
    std::cout << "   " << 1 << "  " << 2 << "  " << 3 << "\n";
    for(int a = 0; a < 9; a++){
        if(a == 0)
            std::cout << "A ";
        if(a == 3)
            std::cout << "\nB ";
        if(a == 6)
            std::cout << "\nC ";
        //displaying grid.
        std::cout <<  " " << grid[a] << " ";


    }
    std::cout << "\n\n";
}
//Returneaza true daca grid-ul e deja folosit.
bool Used(int const& position, std::vector<char> const& grid){
    if(grid[position] == '-')
        return false;
    else
        return true;
}

void Turn(std::vector<char> &grid, char player){
    int row = 0;
    char column = 0;
    int position = 0;
    bool check = true;
    std::cout <<"\n" << player << ": Jucati !. \n";

    while(check == true){

        std::cout << "Row(1,2,3): ";
        std::cin >> row;
        std::cout << player << ": Column(A,B,C): ";
        std::cin >> column;
        position = 3*(column-'A')+(row-1);
        if(!Used(position,grid)){
            check = false;
        }
        else{
            std::cout << "Pozitie deja folosita. Incearca din nou. \n";
        }
    }
    grid[position] = player;
    std::cout << "\n\n";
}

bool Win(std::vector<char> const& grid, char player){
    for(int a = 0; a < 3; a++){
        if(grid[a] == player && grid[a+3] == player && grid[a+6] == player){
            return true;
        }
        if(grid[3*a] == player && grid[3*a+1] == player && grid[3*a+2] == player){
            return true;
        }
    }
    if(grid[0] == player && grid[4] == player && grid[8] == player){
        return true;
    }
    if(grid[2] == player && grid[4] == player && grid[6] == player){
        return true;
    }
    return false;

}

int main(){
    std::vector<char>grid(9,'-');

    while(true){
        Display(grid);
        Turn(grid, 'X');
        if(Win(grid, 'X')){
            Display(grid);
            std::cout << "\n X este castigator. Are o bere! \n";
            break;
        }
        Display(grid);
        Turn(grid,'O');
        if(Win(grid, 'O')){
            Display(grid);
            std::cout << "\n 0 este castigator. Are o bere! \n";
            break;
        }
    }
}