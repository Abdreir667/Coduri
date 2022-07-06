#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream f("formula1.in");
    ofstream g("formula1.out");
    unsigned long long n, k, c, a, car, i, pa;
    f>>c>>k>>n;
    if(c==1)
        g<<(k+(k-1))*(k+(k-1));
    else
    {
        a=0;
        for(i=2; i<=n; i++)
        {
            a=a+2*i*(i-1);/// k randuri cu k-1 patrate albe si k-1 randuri cu k patrate albe

            ///cout<<a<<endl;
        }
        ///cout<<a<<endl;
        /*car=0;
        pa=0;
        while(pa<a)
        {
            car++;
            pa=2*car*(car-1);
            cout<<car<<" "<<pa<<endl;
        }*/
        car=n-1;
        pa=0;
        for(i=n; i<=9223372036854775807; i++)
        {

            car++;
            pa=2*i*(i-1);
            if(pa>=a)
                break;
            ///cout<<car<<" "<<pa<<endl;

        }
        car=car-1;
        g<<(car+(car-1))*(car+(car-1));
    }
    return 0;
}