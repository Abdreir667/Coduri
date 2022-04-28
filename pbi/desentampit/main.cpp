#include <iostream>

using namespace std;

int main()
{
    int n,x,i,z,nr=1,nr2;
    cout<<"Dati un n impar: ";
    cin>>n;
    while(n!=0)
    {
        if(n==1 || n==2)
            cout<<' '<<"X"<<endl;
        if(n>2)
        {
         n=n-2;
        i=(n+1)/2;
        x=(n+1)/2;
        for(int k=1; k<=x+1; k++)
            cout<<" ";
        cout<<"X"<<endl;
        nr=1;
        for(i ; i>=1  ; i-- )
        {

            for(int j=1; j<=i; j++)
                cout<<" ";

            cout<<"X";

            for(int z=1; z<=nr; z++)
                cout<<" ";

            cout<<"X";

            cout<<' '<<endl;
            nr=nr+2;

        }
        nr2=nr-4;
        for(int i2=2; i2<=x; i2++)
        {
            for(int j2=1; j2<=i2; j2++)
                cout<<" ";

            cout<<"X";

            for(int z2=1; z2<=nr2; z2++)
                cout<<" ";

            cout<<"X";

            cout<<' '<<endl;
            nr2=nr2-2;
        }

        for(int k2=1; k2<=x+1; k2++)
            cout<<" ";
        cout<<"X"<<endl;
        }


        cout<<"Dati un n impar: ";
        cin>>n;
    }


    return 0;
}
