#include <fstream>

using namespace std;

ifstream cin("intersectie.in"); 
ofstream cout("intersectie.out");

int arr1[100001],arr2[100001],rez[100001],k,p=0,o=0,aux;

int main(void)
{
    while(cin>>arr1[++p])
        if(arr1[p]==0)
            break;
    while(cin>>arr2[++o])
        if(arr2[o]==0)
            break;
    p--,o--;
    int var1=1,var2=1;
    aux=0;
    while(var1<=p && var2<=o)
    {
        if(arr1[var1]!=arr2[var2])
        {
            if(arr1[var1]<arr2[var2])
                var1++;
            else var2++;
        }
        else 
        {
            rez[++aux]=arr1[var1];
            var1++;
        }
    }
    cout<<aux<<endl;
    p=0;
    int nr;
    while(cin>>nr)
    {
        if(nr!=0)   
            arr1[++p]=nr;
        else if(nr==0)
        {
            k=aux;
            aux=0;
            int var1=1,var2=1;
            while(var1<=p && var2<=k)
            {
                if(arr1[var1]!=rez[var2])
                {
                    if(arr1[var1]<rez[var2])
                        var1++;
                    else var2++;
                }
                else 
                {
                    rez[++aux]=arr1[var1];
                    var1++;
                }
            }
            p=0;
        }
    }
    if(aux>0)
        for(int i=1;i<=aux;i++)
            cout<<rez[i]<<" ";
    else if(aux==0)
        cout<<"nu exista";
}