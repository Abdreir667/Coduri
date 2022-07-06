#include <stdio.h>

using namespace std;

long long segmente[400001]={0};
int lungime[400001]={0};
int cerinta,linii,coloane;
bool val;
long long nr_cerut=0;

FILE *in= fopen("paralele.in","r");
FILE *out= fopen("paralele.out","w");

int main(void)
{
    fscanf(in, "%d %d %d",&cerinta,&linii,&coloane);
    switch(cerinta)
    {
        case 1:{
            for(int i=1;i<=linii;i++)
            {
                long long lung=0;
                for(int j=1;j<=coloane+1;j++)
                {
                    if(j<=coloane)
                        fscanf(in,"%d",&val);
                    if(j==coloane+1)
                        val=0;
                    if(val==1)
                        lung++;
                    else
                    {
                        segmente[i]+=((lung-1)*lung)/2;
                        lung=0;
                    }
                }
            }
            for(int i=1;i<=linii;i++)
                for(int j=i+1;j<=linii;j++)
                {
                    if(segmente[i]!=0 && segmente[j]!=0)
                        nr_cerut+=segmente[i]*segmente[j];
                    fprintf(out,"%d\n",nr_cerut);
                }
            
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
                        fscanf(in, "%d",&val);
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
            fprintf(out,"%d",nr_cerut);
            break;
        }
    }
}