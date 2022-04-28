#include <iostream>
#include <fstream>
///se citesc de la tastatura capetele intervalului inchis a si b.Sa se memoreze intr-un tablou toate numerele perfecte din interval
/// apoi sa se afiseza continutul tabloului pe ecran in ordine crescatoare si int-un fisier in oridine descrescatoare.
using namespace std;

int main()
{
    ofstream f("date.out");
    int a,b,arr[100],s,k=0;///dimensiune efectiva a tabloului arr
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {
        s=0;
        for(int d=1;d<=i/2;d++)
            if(i%d==0)
                s=s+d;
        if(i==s)
            arr[++k]=i;
    }
    for(int i=1;i<=k;i++)
        cout<<arr[i]<<" ";
    for(int i=k;i>=1;i--)
        f<<arr[i]<<" ";
    f.close();
}
