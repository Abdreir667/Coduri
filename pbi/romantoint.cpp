#include <fstream>
#include <stack>

using namespace std;

ifstream cin("cifre_romane.in");
ofstream cout("cifre_romane.out");

short n,temp;
stack<char> coada;

int main(void)
{
    cin>>n;
    for(int i=1;n;i++,n/=10)
    {
        temp=n%10;
        if(i==1)
        {
            if(temp<=3)
                for(int j=1;j<=temp;j++)
                    coada.push('I');
            else if(temp==4)
            coada.push('V'),coada.push('I');
            else if(temp>=5 && temp<9)
            { 
                for(int j=0;j<temp-5;j++)
                    coada.push('I');
                coada.push('V');
            }
            else if(temp==9)
                coada.push('X'),coada.push('I');
        }
        else if(i==2)
        {
            if(i)
            for(int i=1;i<=temp;i++)
            {
                coada.push('X');
            }
        }
    }
    while(!coada.empty())
    {
        cout<<coada.top();
        coada.pop();
    }
}