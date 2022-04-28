#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("date.in");
    ofstream g("date.out");
    int x,y,c;
    f>>x>>y;
    if(x>0 && y>0)
        c=2;
    if(x<0 && y<0)
        c=1;
    if(x<0 && y<0)
        c=4;
    if(x>0 && y<0)
        c=3;
    
    g<<"Cadranul in care se afla punctul este: "<<c<<endl;
    f.close();
    g.close();
}