#include <stdio.h>

using namespace std;

char s[10001]={'1','0','0','1'};

int SecBiti(char s[])
{
    int nr0=0,nr1=0,nr_secvente=0;
    for(int i=0;i<sizeof(s);i++)
    {
        if(s[i]=='0')
            nr0++;
        else nr1;;
    }
    if(nr0==nr1)
        nr_secvente++;
    for(int i=0;i<sizeof(s);i++)
    {
        nr0=0,nr1=0;
        int j=i+1;
        if(s[i]=='0')
            nr0++;
        else nr1=0;
        while(j<sizeof(s) && j-i+1<=sizeof(s)-1)
        {
            if(s[j]=='0')
                nr0++;
            else nr1++;
            j++;
        }
    }

}

int main(void)
{

}