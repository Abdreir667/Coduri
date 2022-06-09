#include <iostream>

using namespace std;

int v[101],n;

void interschimbare(int v[],int st,int dr)
{
    for(int i=st;i<dr;i++)
        for(int j=i+1;j<=dr;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
}

void bule(int v[],int st,int dr)
{
    bool ordonat;
    do
    {
        ordonat=true;
       for(int i=st;i<dr;i++)
            if(v[i]>v[i+1])
            {
                swap(v[i],v[i+1]);
                ordonat=false;
            }
    } while (ordonat==false);
}

void min_max(int v[],int st,int dr)
{
    int poz,auxl;
    for(int i=1;i<n;i++)
    {
        int min=v[i];
        poz=i;
        for(int j=i+1;j<=n;j++)
        {
            if(v[j]<min)
            {
                min=v[j];
                poz=j;
            }
        }
        if(v[i]!=min)
            swap(v[i],v[poz]);
    }
}

void numarare(int v[],int st,int dr)
{
    int vector_ap[101]={0},rez[101];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]<v[j])
                vector_ap[j]++;
            else vector_ap[i]++;
    for(int i=1;i<=n;i++)
        rez[vector_ap[i]+1]=v[i];
    for(int i=1;i<=n;i++)
        cout<<rez[i]<<" ";
}

void insertie(int v[],int st,int dr)
{
    for(int i=2;i<=n;i++)
        if(v[i]<v[i+1])
        {
            int aux=v[i];
            int poz=i-1;
            while(v[poz]>aux && poz>0)
            {
                v[poz+1]=v[poz];
                poz--;
            }
            v[poz+1]=aux;
        }
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    insertie(v,1,n);
    for(int i=1;i<=n;i++)
       cout<<v[i]<<" ";
}