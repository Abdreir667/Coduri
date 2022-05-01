#include <fstream>
#include <vector>

using namespace std;

ifstream cin("secvegale1.in");
ofstream cout("secvegale1.out");

int n,nr,cap1=0, cap2=0,maxi=0;

int main(void)
{
    vector<int> numere;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        numere.push_back(nr);
    }
    for(int i=0;i<numere.size();i++)
    {
        if(numere[i]!=-1)
        {
            int temp1=1,temp2;
            for(int j=i+1;j<numere.size();j++)
            {
                if(numere[j]==numere[i])
                {
                    numere[j]=-1;
                    temp2=j;
                }
            }
            temp1=temp2-i+1;
            if(temp1>=maxi)
            {
                if(temp1>maxi)
                {
                    cap1=i+1;
                    cap2=temp2+1;
                    maxi=temp1;
                }
                else if(temp1==maxi && (cap1<i && cap2<temp2))
                {
                    cap1=cap1;
                    cap2=cap2;
                    maxi=maxi;
                }
            }
        }
    }
   cout<<cap1<<" "<<cap2;
}