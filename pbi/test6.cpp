#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("bitcmp.in");
    int nr,n,cmd=0;
    f>>nr;
    for(int i=1;i<=nr;i++)
    {
        f>>n;
        while (cmd!=n)
        {
            if(cmd>n)
                cmd=cmd-n;
            else n=n-cmd;
        }
        
    }
    cout<<cmd<<endl;
    
}