#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream cin("crb.in");
ofstream cout("crb.out");

int n,nr,nre=0;

int main(void)
{
    cin>>nr;
    vector<int> arr(nr+1);
    vector<int> copie(nr+1);
    for(int i=1;i<=nr;i++)
    {
        cin>>arr[i];
        copie[i]=arr[i];
    }
    sort(arr.begin()+1, arr.end(),greater<int>());
    vector<int>::iterator i;
    vector<int>::iterator j;
    for(int i=1;i<=nr;i++)
        if(arr[i]==copie[i])
            nre++;
    cout<<nre<<endl;
}