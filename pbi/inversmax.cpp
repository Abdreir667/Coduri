#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int lmax=0,len=0;
char cuvant[300];
vector<pair<short,short>> capete;
bool este_cuvant=false;

void swap_char(short a,short b,char cuvant[])
{
    for(int i=1,j=0;i<=(b-a)/2+1;i++,j++)
        swap<char>(cuvant[a+j],cuvant[b-j]);
}

int main(void)
{
    cin.getline(cuvant,256);
    cuvant[strlen(cuvant)+1]=' ';
    for(int i=0;i<=strlen(cuvant)+1;i++)
    {
        este_cuvant=false;
        len=0;
        int temp=i;
        while(cuvant[i]!=' ')
        {
            if((((int(cuvant[i])>=65 && int(cuvant[i])<=90) || (int(cuvant[i])>=97 && int(cuvant[i])<=122)) && (int)cuvant[i]!=32)==true)
                este_cuvant=true;
            i++;
            len++;
        }
        if(i==strlen(cuvant)+1)
            len=len-1;
        if(len>lmax && este_cuvant==true)
        {
            capete.clear();
            if(este_cuvant==true && i!=strlen(cuvant)+1)
                capete.push_back(make_pair(temp,i-1)),lmax=len;
            if(i==strlen(cuvant)+1 && este_cuvant==true)
                capete.push_back(make_pair(temp,i-2)),lmax=len-1;
        }
        else if(len==lmax && este_cuvant==true)
        {
            if(este_cuvant==true && i!=strlen(cuvant)+1)
                capete.push_back(make_pair(temp,i-1));
            if(i==strlen(cuvant)+1 && este_cuvant==true)
                capete.push_back(make_pair(temp,i-2));
        }
        
    }
    for(auto x:capete)
        swap_char(x.first,x.second,cuvant);
    cout<<cuvant;
}
