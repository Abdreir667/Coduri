#include <iostream>

using namespace std;

int mat[501][501],linii,coloane,timp=0;
int nr;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
            cin>>mat[i][j];
    for(int i=1;i<=linii;i++)
    {
        for(int j=1;j<=coloane;j++)
        {
            timp++;
            bool prim,perfect=false;
            prim=is_prime(mat[i][j]);
            if(prim==false && mat[i][j]>1)
            {
                int copie=mat[i][j],s=0;
                while(copie!=0)
                {
                    s+=copie%10;
                    copie/=10;
                }
                if(is_prime(s)==true && s>1)
                    perfect=true;
            }
            if(prim==true)
            {
                    if(i==1 && j==1)
                        mat[i][j]=0;
                    else
                    {
                        timp++;
                        mat[i][j]=0;
                        if(i>1)
                            i--;
                        if(j>1)
                            j--;
                    }
            }
            else if(perfect==true && prim==false)
            {
                if(i==linii && j==coloane)
                    mat[i][j]=0;
                else
                {
                    timp++;
                    mat[i][j]=0;
                    if(i<linii)
                        i++;
                    if(j<coloane)
                        j++;
                }
            }
            //else mat[i][j]=0;
        }
    }
    cout<<timp<<endl;

}