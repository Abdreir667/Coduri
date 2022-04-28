#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,nr;

struct pereche{
    int poz,element;
}v[100];

void quicksort(pereche arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(v[i].element > v[j].element)
            {
                std::swap(v[i], v[j]);
                d = 1 - d;
            }
            else if(v[i].element == v[j].element && v[i].poz > v[j].poz)
            {
                std::swap(v[i], v[j]);
                d =1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(arr,st,i-1);
        quicksort(arr,i+1,dr);
    }
}


int main(void)
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i].element;
        v[i].poz=i+1;
    }
    quicksort(v,0,n-1);
    for(int i=0;i<n;i++)
        cout<<v[i].element<<" "<<v[i].poz<<" ";

}