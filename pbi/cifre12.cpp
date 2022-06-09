#include <fstream>
#include <vector>

using namespace std;

ifstream cin("cifre12.in");
ofstream cout("cifre12.out");

short numar_segmente[10]={6,2,5,5,4,5,6,3,7,6};
short numar_realizat[10]={2,7,2,3,3,4,2,5,1,2};
short numar_mai_mic[10]={1,5,1,2,2,3,1,2,0,0};
short cerinta;
unsigned long long int suma=0,nr,q=0;
vector<short> numar;

int main(void)
{
    cin>>cerinta>>nr;
    switch(cerinta)
    {
        case 1:
        {
            while(nr)
            {
                suma+=numar_segmente[nr%10];
                nr/=10;
            }
            cout<<suma<<endl;
            break;
        }
        case 2:
        {
            while(nr)
            {
                numar.push_back(nr%10);
                nr/=10;
                q++;
            }
            for(int i=1;)
            for(auto i=numar.rbegin();i!=numar.rend();i++)
            {
                for(int j=int(i)-1;j>=1;j--)

            }
            cout<<s<<endl;
        }
    }
}