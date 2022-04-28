#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream cin("sint.in");
ofstream cout("sint.out");

int n,nr,temp=0,poz_dupa=0,nr0=0;

int main(void)
{
    cin>>n;
    vector<int> arr;
    vector<int>::iterator poz1;
    for(int i=1;i<=n;i++)
    {
       cin>>nr;
       if(nr<0)
       {
           arr.insert(arr.begin()+temp,nr);
           temp++;
           poz_dupa++;
       }
       if(nr==0)
       {
           arr.insert(arr.begin()+temp+nr0,0);
            poz_dupa++;
            nr0++;
       }
       if(nr>0)
       {
           arr.insert(arr.begin()+poz_dupa+nr0,nr);
           poz_dupa++;
       }
    }
    sort(arr.begin(),arr.begin()+temp,greater<int>());
    sort(arr.begin()+temp+1,arr.end(),greater<int>());
    for(auto i=arr.begin();i<arr.end();i++)
        cout<<*i<<" ";
}