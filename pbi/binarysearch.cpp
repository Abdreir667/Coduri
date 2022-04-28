#include <iostream>

using namespace std;

int binarysearch(int arr[],int st,int dr,int nr)
{
    if(st>dr)
    {
        cout<<"Nu exista";
        return 0;
    }
    int m=(st+dr)/2;
    if(arr[m]==nr)
    {
        cout<<"Gasit pe pozitia "<<m<<endl;
        return 0;
    }
    if(arr[m]>nr)
        binarysearch(arr,st,m-1,nr);
    if(arr[m]<nr)
        binarysearch(arr,m+1,dr,nr);
}

int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9},nr;
    cin>>nr;
    binarysearch(arr,1,sizeof(arr)/sizeof(arr[0])-1,nr);

}