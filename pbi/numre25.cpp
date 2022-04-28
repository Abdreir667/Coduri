#include <fstream>

using namespace std;

ifstream cin("numere25.in");
ofstream cout("numere25.out");

int n,nr,k=1,nrk=0;
bool gasit=false;

int main(void)
{
    cin>>n;
    while(cin>>nr)
    {
        nrk++;
       for(int i=k;i<=nr-1;i++)   
       {
            cout<<i<<" ";
            gasit=true;
       }
        if(n-k==0)
            k=nr;
        else 
            k=nr+1;
    }
    if(gasit==false) 
        cout<<"Nu exista";
    else for(int i=k;i<=n;i++)
    {
        cout<<i<<" ";
        gasit=true;
    }
}