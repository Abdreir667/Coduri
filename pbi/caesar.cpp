#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    char propozitie[100],temp1,temp2,copiealph[25];
    char propozitiefin[100];
    int shift;
    char alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cout<<"Dati o propozitie: ";cin>>propozitie;
    cout<<"Dati un shift: ";cin>>shift;
    string str= propozitie;
    if(str.size()>0)
    {
        for(int i=1;i<=25;i++)
            copiealph[i]=alphabet[i];
        for(int j=1;j<=shift;j++)
        {
            temp2=alphabet[0];
            for(int i=0;i<=25;i++)
                {
                    temp1=alphabet[i+1];
                    alphabet[i+1]=alphabet[i];
                    alphabet[i]=temp1;
                }
            alphabet[25]=temp2;
        }
        for(int i=0;i<=str.size()-1;i++)
            for(int j=0;j<=25;j++)
                if(propozitie[i]==copiealph[j])
                    propozitiefin[i]=alphabet[j];
        for(int i=0;i<=str.size()-1;i++)
            cout<<propozitiefin[i];
    }
    else cout<<"empty";
    }