#include <fstream>
#include <cmath>

using namespace std;

long long segmente[400002]={0};
long long lungime[40002]={0};
long long suma[40002]={0};
long cerinta,linii,coloane;
long long seg=0;
bool val;
long long nr_cerut=0;
long long nr=1;

ifstream cin("paralele.in");
ofstream cout("paralele.out");

int main(void)
{
    cin>>cerinta>>linii>>coloane;
    switch(cerinta)
    {
        case 1:{
            for(long long i=1;i<=linii;i++)
            {
                unsigned long long lung=0;
                seg=0;
                for(long long j=1;j<=coloane+1;j++)
                {
                    if(j<=coloane)
                        cin>>val;
                    if(j==coloane+1)
                        val=0;
                    if(val==1)
                        lung++;
                    else
                    {
                        seg+=(((lung-1)*lung)/2)*1LL;
                        lung=0;
                    }
                }
                if(seg>=1)
                    segmente[nr++]=seg;
            }
            suma[0]=0;
            for(int i=1;i<=nr;i++)
                suma[i]=suma[i-1]+segmente[i];
            for(int i=2;i<=nr;i++)
                    nr_cerut+=(segmente[i]*1LL*(suma[i-1]));
            cout<<nr_cerut;
            break;
        }
        case 2:
        {
            for(int i=1;i<=linii+1;i++)
            {
                long long lung=0;
                for(int j=1;j<=coloane;j++)
                {
                    if(i<=linii)
                        cin>>val;
                    if(i==linii+1)
                        val=0;
                    if(val==1)
                        lungime[j]++;
                    else
                    {
                        segmente[j]+=((lungime[j]-1)*lungime[j])/2;
                        lungime[j]=0;
                    }
                }
            }
            for(int i=1;i<=coloane;i++)
                    for(int j=i+1;j<=coloane;j++)
                        if(segmente[i]!=0 && segmente[j]!=0)
                            nr_cerut+=segmente[i]*segmente[j];
            cout<<nr_cerut;
            break;
        }
    }
}