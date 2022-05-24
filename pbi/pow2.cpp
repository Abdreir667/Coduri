#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("pow2.in");
ofstream cout("pow2.out");

vector<unsigned int> numere(100001);
vector<unsigned int> puteri_2(32,1);
int n,nre=0;

int binarysearch(int val,int st,int dr)
{
    int m,poz=-1;
    while(st<=dr)
    {
        m=(st+dr)/2;
        if(numere[m]==val)
        {
            poz=m;
            break;
        }
        if(numere[m]<val)
            st=m+1;
        else dr=m-1;
    }
    return poz;
}

void generare(void)
{
    for(int i=1;i<=31;i++)
        puteri_2[i]=puteri_2[i-1]*2;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>numere[i];
    sort(numere.begin(),numere.end());
    for(int i=0;i<n-1;i++)
        for(int j=31;j>=1;j--)
        {
            if(puteri_2[j]<=numere[i])
                break;
            unsigned int valoare=puteri_2[j]-numere[i];
            if(i<n-1)
            {
                int poz=binarysearch(valoare,i+1,n-1);
                if(poz=-1)
                {
                    nre++;
                    int k=poz-1;
                    while(k>i)
                    {
                        if(numere[k]==numere[poz])
                            nre++;
                        if(numere[k]<numere[poz])   
                            break;
                        k--;
                    }
                    k=poz+1;
                    while(k<n)
                    {
                        if(numere[k]==numere[poz])
                            nre++;
                        if(numere[j]>numere[poz])
                            break;
                        k++;
                    }
                }
            }
        }
    cout<<nre<<endl;
}