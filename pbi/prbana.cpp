#include <iostream>

using namespace std;

long long n, baza, pow10, dim=0, i;

int main()
{
    int hex[100000];
    char c;
    cin>>c;
    cin>>n;
    pow10=1;
    baza=0;
    if(c=='b')
    {
        while(n)
        {
            baza+=(n%2)*pow10;
            cout<<baza<<" ";
            pow10*=10;
            n/=2;
            cout<<n<<endl;
        }
        cout<<baza;
    }
    else
        if(c=='o')
        {
            while(n!=0)
            {
                pow10*=10;
                baza+=(n%8)*pow10;
                n/=8;
            }
            cout<<baza/10;
        }
        else
            {
                while(n!=0)
                {

                   hex[++dim]=n%16;
                   n=n/16;
                }
                for(i=dim; i>=1; i--)
                    if(hex[i]<10)
                        cout<<hex[i];
                    else
                        cout<<(char)(hex[i]-10+'A');

            }
    return 0;
}