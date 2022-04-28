#include <iostream>

using namespace std;

int main()
{
    int a,c1,c2,c3,aux2,max,min;
    cout<<"a=";cin>>a;
    c1=a/100;//prima
            c2=a%10;//a treia
            c3=(a-(c1*100+c2))/10;//a doua
            max=c1;
            if(c2>max)
                max=c2;
            if(c3>max)
                max=c3;
            cout<<"max="<<max<<"\n";
            min=c2;
            if(c1<min)
                min=c1;
            if(c3<min)
                min=c3;
            cout<<"min="<<min<<"\n";

            if(c1<c3 && c3<c2)
                cout<<"Numarul are cifrele consecutive crescatoare";
            else
                cout<<"Numarul nu are cifrele consecutive crescatoare";
    return 0;
}
