#include <iostream>

using namespace std;

int aux[1000001],num[1000001],n,w,x,y,z;

void Afis(int k)
{
    for(int j = 1 ; j <= k ; j ++)
        cout << num[aux[j]] << " ";
    cout << endl;
}

void back(int k){
    for(int i = aux[k-1] + 1 ; i <= n ; ++ i)
    {
        aux[k] = i;
        if(k == 3)
            Afis(k);
        else
            back(k + 1);
    }
}

int main(){
    //cin >> n >> p;
    cin>>n>>w>>x>>y>>x;
    aux[0] = 0;
    aux[1]=1;
    num[1]=w;
    for(int i=2;i<=n;i++)
    {
        num[2]=(x*num[i-1]+y)%z;
        aux[i]=i;
    }
    back(1);
    return 0;
}