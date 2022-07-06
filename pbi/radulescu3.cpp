#include <fstream>

using namespace std;

ifstream cin("balba.in");
ofstream cout("balba.out");

int  cerinta,nr;
int n;
short numere[100003];
int last_cif=-1;

int main(void)
{
    cin>>cerinta>>n;
    for(int i=1;i<=n;i++)
        cin>>numere[i];
    switch(cerinta)
    {
        case 1:
        {
            int numere_diferite=0;
            int numere_formare=0;
            for(int i=1;i<=n;i++)
            {
                int lung=1;
                while(i<n && numere[i]==numere[i+1])
                {
                    i++;
                    lung++;
                }
                numere_diferite++;
                if(lung>1)
                    numere_formare++;
            }
            cout<<numere_diferite<<"\n"<<numere_formare<<"\n";
            break;
        }
        case 2:
        {
            short cifra_mijloc,cifra_balbaita;
            bool par=true;
            short cifre_impare=0;
            int apar[11]={0};
            int cifre_afisate=0;
            for(int i=1;i<=n;i++)
                apar[numere[i]]++;
            for(int i=0;i<=9;i++)
                if(apar[i]%2==1)
                {
                    par=false;
                    cifre_impare++;
                }
            if(par==true)
            {
                
                int maxi=-1;
                bool apar_2=true;
                for(int i=0;i<=9;i++)
                    if(apar[i]>2)
                    {
                        apar_2=false;
                        break;
                    }
                if(apar_2==true)
                {
                    for(int i=9;i>=0;i--)
                        if(apar[i]!=0)
                            cout<<i;
                    for(int i=0;i<=9;i++)
                        if(apar[i]!=0)
                            cout<<i;
                }
                else if(apar_2==false)
                {
                   
                    for(int i=0;i<=9;i++)
                        if(apar[i]!=0)
                        maxi=max(maxi,i);
                    for(int i=9;i>=0;i--)
                        if(apar[i]!=0)
                            for(int j=1;j<=apar[i]/2;j++)
                                cout<<i;
                    cout<<maxi;
                    apar[maxi]--;
                    for(int i=0;i<=9;i++)
                        if(apar[i]!=0)
                            for(int j=1;j<=apar[i]/2;j++)
                                cout<<i;
                }
            }
            else if(cifre_impare==1)
            {
                bool apare_1=false;
                short cif;
                for(int i=0;i<=9;i++)
                    if(apar[i]==1)
                    {
                        apare_1=true;
                        cif=i;
                        break;
                    }
                    else if(apar[i]%2==1)
                    {
                        cif=i;
                        break;
                    }
                if(apare_1==true)
                {
                    cout<<"sceps"<<" ";
                    bool afisate=0;
                    for(int i=9;i>=0;i--)
                        if(apar[i]!=0 && i!=cif)
                            for(int j=1;j<=apar[i]/2;j++)
                                if(i!=0 || afisate==true)
                                    cout<<i,afisate=true;
                    cout<<cif;
                    if(afisate==true)
                        for(int i=0;i<=9;i++)
                            if(apar[i]!=0 && i!=cif)
                                for(int j=1;j<=apar[i]/2;j++)
                                    cout<<i;
                }
                if(apare_1==false)
                {
                    for(int i=9;i>=0;i--)
                        if(apar[i]!=0 && i!=cif)
                            for(int j=1;j<=apar[i]/2;j++)
                                cout<<i;
                        else if(apar[i]!=0 && i==cif)
                            for(int j=1;j<=apar[i]/2+1;j++)
                                cout<<cif;
                    for(int i=0;i<=9;i++)
                        if(apar[i]!=0)
                            for(int j=1;j<=apar[i]/2;j++)
                                cout<<i;
                }
            }
            else if(cifre_impare>=2)
            {
                
                bool apar_numai_1=true;
                short cif1,cif2;
                short maxi=-1;
                int cif;
                int k=0;
                for(int i=0;i<=9;i++)
                    if(apar[i]%2==1 && apar[i]!=1)
                        apar_numai_1=false;
                if(apar_numai_1==false)
                {
                    for(int i=9;i>=0;i--)
                        if(apar[i]!=0 && apar[i]%2==1 && apar[i]>=3)
                        {
                            cif1=i;
                            break;
                        }
                    for(int i=9;i>=0;i--)
                        if(apar[i]%2==1 && i!=cif1)
                        {
                            cif2=i;
                            break;
                        }
                    if(cif1!=0)
                    {
                        for(int i=9;i>=0;i--)
                            if(apar[i]!=0)
                                if(i!=cif1)
                                for(int j=1;j<=apar[i]/2;j++)
                                    cout<<i;
                                else 
                                    for(int j=1;j<=apar[i]/2+1;j++)
                                        cout<<i;
                        cout<<cif2;
                        for(int i=0;i<=9;i++)
                                if(apar[i]!=0)
                                    for(int j=1;j<=apar[i]/2;j++)
                                        cout<<i;
                    }
                    else for(int i=1;i<=apar[cif2];i++)
                        cout<<cif2;
                }
                else if(apar_numai_1==true)
                {
                    for(int i=0;i<=9;i++)
                        if(apar[i]!=0 && apar[i]==1)
                            cif=i;
                    for(int i=9;i>=0;i--)
                        if(apar[i]!=0 && i!=cif)
                            for(int j=1;j<=apar[i]/2;j++)
                                cout<<i;
                    cout<<cif;
                    for(int i=0;i<=9;i++)
                        if(apar[i]!=0 && i!=cif)
                            for(int j=1;j<=apar[i]/2;j++)
                                cout<<i;
                }
            }
            break;
        }
    }
}