#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("numere.int");
    ofstream g("date.out");
    int nr,arr1[1000],arr2[1000],nrd,temp1=1,temp2=1;
    while(f>>nr)
    {
        nrd=0;
        for(int i=2;i<=nr/2;i++)
            if(nr%i==0)
               nrd++;
        if(nrd==0)
        {
            arr1[temp1]=nr;
            temp1++;
        }
        else
        {
            if(nr==1)
            {
            arr2[temp2]=nr;
            temp2++;
            }
            else
            arr2[temp2]=nr;
            temp2++;
        }

    }
    cout<<"Numerele prime sunt:";
        for(int i=1;i<=temp1-1;i++)
            cout<<arr1[i]<<" ";
        cout<<endl<<"Numerele care nu sunt prime sunt:";
        for(int i=1;i<=temp2-1;i++)
            cout<<arr2[i]<<endl;
    return 0;
}
