#include <iostream>

using namespace std;

int arr[100001],p=0;
char c;
long long n;

void binary(long long n)
{
    while(n)
    {
        arr[++p]=n%2;
        n/=2;
    }
}

void octal(long long n)
{
    while(n)
    {
        arr[++p]=n%8;
        n/=8;
    }
}

void hexadecimal(long long n)
{
    while(n)
    {
        arr[++p]=n%16;
        n/=16;
    }
}

void show(int arr[])
{
    for(int i=p;i>=1;i--)
        if(arr[i]<=9)
               cout<<arr[i];
        else
              cout<<(char)(arr[i]-10+'A');
}


int main(void)
{
    cin>>c>>n;
    switch(c)
    {
        case 'b' :
            binary(n);
            show(arr);
        break;
        case 'o' :
            octal(n);
            show(arr);
        break;
        case 'h' :
            hexadecimal(n);
            show(arr);
        break;
    }
}