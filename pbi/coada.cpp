#include <iostream>
#include <queue>
#include <cstring>
#include <vector>

using namespace std;

int n,nr;
char operatie[10];
queue<int> coada;
vector<int> elemente_de_afisat;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>operatie;
        if(strcmp(operatie,"push")==0)
        {
            cin>>nr;
            coada.push(nr);
        }
        if(strcmp(operatie,"pop")==0)
            coada.pop();
        if(strcmp(operatie,"front")==0)
            elemente_de_afisat.push_back(coada.front());
    }
    for(auto x:elemente_de_afisat)
        cout<<x<<"\n";
}