#include <fstream>

using namespace std;

ifstream cin("perfect1.in");
ofstream cout("perfect1.out");

int arr[101],n,nrp2=0,nr,p=0;

bool binarysearch(int arr[],int st,int dr,int nr)
{
    if(st>dr)
        return false;
    int m=(st+dr)/2;
    if(arr[m]==nr)
        return true;
    if(arr[m]>nr)
        binarysearch(arr,st,m-1,nr);
    if(arr[m]<nr)
        binarysearch(arr,m+1,dr,nr);
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(nr%2==0)
        {
            int aux=nr;
            while(aux%2==0)
            {
                nrp2++;
                aux/=2;
            }
        }
        else if(nr%2==1)
            arr[++p]=nr;
    }
    if(nrp2>=6)
    {
        if(binarysearch(arr,1,p,127)==true)
            cout<<8128;
        else cout<<"NU";
    }
    else if(nrp2<6 && nrp2>=4)
    {
        if(binarysearch(arr,1,p,31)==true)
            cout<<496;
        else cout<<"NU";
    }
    else if(nrp2<)

}