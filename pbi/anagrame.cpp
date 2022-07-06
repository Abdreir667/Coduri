#include <iostream>

using namespace std;

short apar1[200]={0},apar2[200]={0};
char cuvant1[22],cuvant2[22];

bool anagrama(char cuvant1[],char cuvant2[])
{
        for(int i=0;i<=21;i++)
            apar1[int(cuvant1[i])]++;
        for(int i=0;i<=21;i++)
            apar2[int(cuvant2[i])]++;
        for(int i=97;i<=122;i++)
            if(apar1[i]!=apar2[i])
                return 0;
        return 1;
}

int main(void)
{
    cin>>cuvant1>>cuvant2;
    cout<<anagrama(cuvant1,cuvant2);
}