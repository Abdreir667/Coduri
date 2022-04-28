#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("deminare.in");
    ofstream g("deminare.out");
    int v,l,c,m,x1,y1,k=0,p=1,i,nrmt=0,min=100000;
    int max=0;
    float rad;
    bool mat[500][500];
    short arr[100];
    f>>v>>l>>c;
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=c;j++)
        {
         mat[i][j]=0;
        }
    }
    f>>m;
    for(int i=1;i<=m;i++)
    {
        f>>x1>>y1;
        mat[x1][y1]=1;
    }
    if(v==1)
    {
        int nrm,lf;
        for(i=1;i<=l;i++)
        {
            nrm=0;
            for(int j=1;j<=c;j++)
                if(mat[i][j]==1)
                {
                    nrm++;
                    nrmt++;
                }
            if(nrm>max)
            {
                max=nrm;
                arr[1]=nrm;
                lf=i;
                k=1;
            }
            else if(nrm==max)
            {
                k++;
                arr[k]=i;
            }
        }
        if(k>1)
        {
        for(int i=1;i<=k;i++)
        g<<arr[i]<<" ";
        }
        else if(k==1)
        g<<lf<<endl;
    }
    if(v==2)
    {
        int nrm,lf,dim1,dim2;
         for(i=1;i<=l;i++)
        {
            nrm=0;
            for(int j=1;j<=c;j++)
                if(mat[i][j]==1)
                {
                    nrm++;
                    nrmt++;
                }
        }
        if(nrm>max)
            {
                max=nrm;
                arr[1]=nrm;
                lf=i;
                k=1;
            }
        bool conditie=false;
        for(int j=2;j<=m/2;j++)
            if(m%j==0)
            {
                conditie=true;
                break;
            }
        if(conditie!=false)
        {
            for(int j=2;j<=m-1;j++)
                for(int k=2;k<=m-1;k++)
                {
                    if(j*k==m)
                        {
                            int q;
                            q=j-max;
                            if(q>0 && q<min)
                            {
                                min=q;
                                dim1=j;
                                dim2=k;
                            }
                        }
                }
            int o,t,nrmc,max1=0;
            t=0;
            o=0;
            while(dim2+t<l)
            {
                o=0;
                while(dim1+o<=c)
                {
                    nrmc=0;
                    for(int aa=t;aa<=dim2+t;aa++)
                        for(int ab=o;ab<=dim1+o;ab++)
                        {
                            if(mat[aa][ab]==1)
                            nrmc++;
                        }
                    if(nrmc>max)
                        max1=nrmc;
                    o++;
                }
                t++;
            } 
            g<<nrmt-max1;   
        }
        else 
        g<<-1;
    }
    f.close();
    g.close();
}