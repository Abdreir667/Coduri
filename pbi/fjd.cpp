#include <iostream>

using namespace std;

long long v[100001],i,n,nr=1,c=0;

int main()
{
  cin>>n;
  for(i=1;i<=n;i++)
     cin>>v[i];
    v[n+1]=-1;
  for(i=1;i<n;i++)
  {
    if(v[i]!=v[i+1])
    {
        c+=nr*(nr+1)/2;
        nr=1;
    }
    else
    nr++;
  }
  c+=nr*(nr+1)/2;
  cout<<c;
}