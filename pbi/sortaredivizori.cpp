#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

ifstream cin("sortare_divizori.in");
ofstream cout("sortare_divizori.out");

int n,nr;

void quicksort(vector<int> &arr,vector<int> &arr2,int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        swap(arr2[m],arr2[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
                swap(arr2[i],arr2[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(arr,arr2,st,i-1);
        quicksort(arr,arr2,i+1,dr);
    }
}

int numar_divizori(int n)
{
    int nrd=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                nrd++;
            else nrd+=2;
        }
    }
    return nrd;
}

int main(void)
{
    cin>>n;
    vector<int> numere;
    vector<int> divizori;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        numere.push_back(nr);
        divizori.push_back(numar_divizori(nr));
    }
    quicksort(divizori,numere,0,divizori.size()-1);
    for(int i=0;i<numere.size();i++)
    {
        
        if(divizori[i]==divizori[i+1])
        {
            int temp=divizori[i],contor=i;
            while(temp==divizori[contor])
            {
                //cout<<numere[contor]<<" ";
                contor++;
            }
            //cout<<i<<" "<<contor<<endl;
            if(contor-i-1==1)
            {
                if(numere[contor-1]<numere[i])
                    swap(numere[contor-1],numere[i]);
            }
            else sort(numere.begin()+i,numere.begin()+contor);
            i=contor-1;
        }
    }
    for(auto x:numere)
        cout<<x<<" ";
}
