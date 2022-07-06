#include <fstream>
#include <cmath>
#define ll long long
using namespace std;

ifstream cin("spiralmatrix.in");
ofstream cout("spiralmatrix.out");

int lin1,col1,lin2,col2;
int mat[101][101];
bool gasit1=false,gasit2=false;
int m,n;

void generare(){ 
    
    ll val = 1;
    int lr = n,lc = m;
    int l = 1, k = 1;
    
    while(k <= lr && l <= lc){
        
        for(int i = l; i <= lc; i++)
            mat[k][i] = val, val++;
        k++;
        
        for(int i = k; i <= lr; i++)
            mat[i][lc] = val, val++;
        lc--;
        
        for(int i = lc; i >= l; i--)
            mat[lr][i] = val, val++;
        lr--;   
        
        for(int i = lr; i >= k; i--)
            mat[i][l]=val,val++;
        l++;
    }
    
} 

int main(void)
{
    cin>>n;
    m=n;
    int spirala_de_cautat=(int)(n/sqrt(2));
    generare();
    for(int i=1;i<=n;i++,cout<<"\n")
        for(int j=1;j<=n;j++)
            cout<<mat[i][j]<<" ";
    
}