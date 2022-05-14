#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

ifstream cin("roboti2.in");
ofstream cout("roboti2.out");

int n,v,nr,lung_inceput=0,lungime=1,lmax=0,lult,mini=0;
bool cond=false;
vector<int> numere;

int main(void)
{
    cin>>v>>n;
    switch(v)
    {
        case 1:
        {
            numere.push_back(0);
            for(int i=1;i<=n;i++)
            {
                cin>>nr;
                numere.push_back(nr);
                if(numere[i-1]<nr && cond==true)
                {
                    lungime++;
                    lult=lungime;
                }
                else if(numere[i-1]>nr && cond==true)
                {
                    if(lungime>lmax)
                        lmax=lungime;
                    lungime=1;
                }
                else if(numere[i-1]<nr && cond==false)
                {
                    lung_inceput++;
                    lungime++;
                }
                else if(numere[i-1]>nr && cond==false)
                {
                    cond=true;
                    lungime=1;
                }
            }
            if(numere.back()<numere[1])
            {
                lult+=lung_inceput;
                if(lult>lmax)
                    lmax=lult;
            }
            cout<<lmax;
        }
        break;
        case 2:
        {
            vector<int> afisare(n);
            for(int i=1;i<=n;i++)
            {
                cin>>nr;
                numere.push_back(nr);
            }
            int cap1=0,cap2=n;
            sort(numere.begin(),numere.end());
            afisare[cap1]=afisare[cap2]=numere[0];
            int k=1;
            while(k<n)
            {
                if(afisare[cap1]<=afisare[cap2])
                {
                    afisare[cap1+1]=numere[k];
                    cap1++;
                }
                else
                {
                    afisare[cap2-1]=numere[k];
                    cap2--;
                }
                k++;
            }
            numere.clear();
            for(auto x:afisare)
                cout<<x<<" ";
        }
    }
}