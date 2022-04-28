#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,r,s,s1,p,r1,s2,x=10,x1=10,x2=10;

        while(x1<=99)
            {
            x=x2;
            r=x%10;
            s=s*10+r;
            x=x/10;
            x1=x1+1;
            x2++;
            cout<<s<<endl;
            }







    return 0;
}
