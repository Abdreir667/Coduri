#include <fstream>
#include <queue>
#include <cstring>

using namespace std;

ifstream cin("coada1.in");
ofstream cout("coada1.out");

queue<int> coada;
int n,nr;
char operatie[10];
bool exista[1001]={0};

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>operatie;
        if(strcmp(operatie,"push")==0)
        {
            cin>>nr;
            if(exista[nr]==false)
            {
                coada.push(nr);
                exista[nr]=true;
            }
            else
            {
                bool gasit=false;
                while(!coada.empty() && gasit==false)
                {
                    if(coada.front()==nr)
                    {
                        gasit=true;
                        coada.push(nr);
                    }
                    else exista[coada.front()]=false;
                    coada.pop();
                }
            }
        }
        if(strcmp(operatie,"query")==0)
        {
            cin>>nr;
            int k=1;
            queue<int> g=coada;
            g=coada;
            bool gasit=false;
            while(!g.empty())
            {
                if(g.front()==nr)
                {
                    gasit=true;
                    break;
                }
                k++;
                g.pop();
            }
            if(gasit==false)
                cout<<"-1\n";
            else cout<<k<<"\n";
        }
    }
}