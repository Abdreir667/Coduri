#include <iostream>
#include <stdio.h>

using namespace std;

long long nr,suma=0;

int main(void)
{
    for(int i=1;i<=500;i++)
    {
        cin>>nr;
        if(nr>0)
            suma+=nr;
        else suma+=(-nr);   
    }
    printf("%d\n",suma);
}