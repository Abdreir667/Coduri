#include <iostream>

using namespace std;

int main()
{
    int a,c1,c2,c3,max,min,aux1,aux2;
    cout<<"a=";cin>>a;
    if(a<9)
 {
    max=a;
    cout<<"Cifrele ordonate crescator="<<max;
 }
    else
    {
    if(a<99)
     {
        c1=a/10;
        c2=a%10;
        if(c1>c2)
            max=c1;
        else
            max=c2;
        if(c1<c2)
            min=c1;
        else
            min=c2;
    cout<<"Cifrele ordonate crescator="<<min<<" "<<max;
     }
    else
      {
        if(a<999)
       {
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
            if((max==c1 && min==c2)||(max==c2 && min==c1))
                aux2=c3;
            if((max==c1 && min==c3)||(max==c3 && min==c1))
                aux2=c2;
            if((max==c2 && min==c3)||(max==c3 && min==c2))
                aux2=c1;
            cout<<"Cifrele in ordine crescatoare="<<min<<" "<<aux2<<" "<<max<<"\n";
            if(c1<c3 && c3<c2)
                cout<<"Cifrele sunt asezate in ordine crescatoare";
            else
                cout<<"Cifrele nu sunt asezate in ordine crescatoare";
      }
     }
    }
    return 0;
}
