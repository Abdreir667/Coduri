#include <iostream>
#include <fstream>

using namespace std;

void quicksort(int arr[],int st,int dr){
    if(st<dr) {
        int m=(st+dr)/2;
        swap(arr[st],arr[m]);
        int i=st,j=dr,d=0;
        while(i<j) {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(arr,st,i-1);
        quicksort(arr,i+1,dr);
    }
}

int main()
{
    ifstream fin("2lap.in");
    ofstream fout("2lap.out");
    int p,m,nr,o=0,arr[30001];
    fin>>p>>m;
    while(fin>>nr)
        arr[++o]=nr;
    quicksort(arr,1,o);
    fout<<arr[p]<<" "<<arr[m]<<endl;
    for(int i=p;i<=m;i++)
    {
        
    }
}