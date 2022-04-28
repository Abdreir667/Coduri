#include <iostream>
#include <algorithm>
int A[200001], B[200001];
using namespace std;
void quicksort(int   arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[st],arr[m]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(arr,st,i-1);
        quicksort(arr,i+1,dr);
    }
}

int main()
{
    char operatie;
    long long N, M, i, j;
    cin>>N>>M>>operatie;
    for(i=1; i<=N; i++)
        cin>>A[i];
    for(i=1; i<=M; i++)
        cin>>B[i];
    quicksort(A,1,N);
    quicksort(B,1,M);
    if(operatie=='*')
    {
        i=1;
        j=1;
        while(i<=N && j<=M)
            if(A[i]==B[j])
            {
                cout<<A[i]<<" ";
                i++;
                j++;
            }
            else if(A[i]<B[j])
                i++;
            else
                j++;
    }
    else if(operatie=='+')
    {
        i=1;
        j=1;
        while (i<=N && j<=M)
            if(A[i]==B[j])
            {
                cout<<A[i]<<" ";
                i++;
                j++;
            }
            else if(A[i]<B[j])
                cout<<A[i++]<<" ";
            else
               cout<<B[j++]<<" ";
        if(i<=N)
            for(; i<=N; i++)
                cout<<A[i]<<" ";
        if(j<=M)
            for(; j<=M; j++)
                cout<<B[j]<<" ";
    }
    else if(operatie=='-')
    {
        i=1;
        j=1;
        while(i<=N && j<=M)
            if(A[i]==B[j])
            {
                i++;
                j++;
            }
            else if(A[i]<B[j])
                cout<<A[i++]<<" ";
            else
                j++;
        if(i<=N)
            for(; i<=N; i++)
               cout<<A[i]<<" ";
    }
    else
    {
        i=1;
        j=1;
        while(i<=N && j<=M)
            if(A[i]==B[j])
            {
                i++;
                j++;
            }
            else
                if(A[i]<B[j])
                    cout<<A[i++]<<" ";
                else
                    cout<<B[j++]<<" ";
        if(i<=N)
            for(; i<=N; i++)
                cout<<A[i]<<" ";
        if(j<=M)
            for(; j<=M; j++)
                cout<<B[j]<<" ";
    }

    return 0;
}