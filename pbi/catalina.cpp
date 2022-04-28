#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    short t[101][101],m,n,k,i,j,nr,	l1[101],c1[101], l2[101],c2[101] ,e[41],aux,vf[41],n1=0,n2=0,nr0,p,r1,r2,o=0;
	ifstream f("elicop.in");
	ofstream g("elicop.out");
	f>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			f>>t[i][j];
	f>>k;
	for(i=1;i<=k;i++)
		{
			f>>l1[i];
			f>>c1[i];
			f>>l2[i];
			f>>c2[i];
			f>>vf[i];
		}
			
	for(i=1;i<=k;i++)
		if(l1[i]>l2[i])
		{
			aux=l1[i];
			l1[i]=l2[i];
			l2[i]=aux;
			aux=c1[i];
			c1[i]=c2[i];
			c2[i]=aux;
		}

	for(i=1;i<=k;i++)
	{
		short x,y;
		if(c1[i]>c2[i])
		{
			if(vf[i]==-1)
				for(int j=l1[i]; j>=l2[i]; j--)
                {
                    for(int k=c1[i]; k>=c2[i]; k--)
                    {
                        if(t[j][k] == false)
                        nr0++;
                        else n1++;
                    }
                    c1[i]--;
                }
			else
                for(int j=l2[i]; j<=l1[i]; j++)
                {
                    for(int k=c2[i]; k<=c1[i]; k++)
                    {
                        if(t[j][k] == false)
                        nr0++;
                        else n1++;
                    }
                    c2[i]++;
                }
		}
		if(c2[i]>c1[i])
		{
			if(vf[i]==1)
                for(int j=l2[i]; j<=l1[i]; j++)
                {
                    for(int k=c2[i]; k>=c1[i]; k--)
                    {
                        if(t[j][k] == false)
                        nr0++;
                        else n1++;
                    }
                    c2[i]--;
                }
			else
				for(int j=l1[i]; j>=l2[i]; j--)
                {
                    for(int k=c1[i]; k<=c2[i]; k++)
                    {
                        if(t[j][k] == false)
                        nr0++;
                        else n1++;
                    }
                    c1[i]++;
                }
				
	    }
		if(nr0==0 && n1>0)
            r1++;
        else if(nr0>n1)
        {
            r2++;
            e[++o]=i;
        }
	}
	cout<<r1<<endl;
	for(i=1;i<=p;i++)
		cout<<e[p]<<" ";
	cout<<r2;
	}
