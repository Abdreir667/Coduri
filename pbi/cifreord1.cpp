#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream cin("cifreord1.in");
ofstream cout("cifreord1.out");

int n,nr,nre=0;
vector<int> aparitii(10,0);
vector<int> numere;

void descompunere(int n)
{
    while(n)
    {
        aparitii[n%10]++;
        n/=10;
    }
}

int main(void)
{
    while(cin>>nr)
        descompunere(nr);
    cout<<aparitii.size();
    for(int i=9;i>=0;i--)
        if(aparitii[i]!=0)
            for(int j=1;j<=aparitii[i];j++)
                numere.push_back(i);
    for(int i=0;i<numere.size();i++)
    {
        cout<<numere[i]<<" ";
        if((i+1)%20==0)
            cout<<endl;
    }
}