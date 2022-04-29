#include <iostream>
#include <vector>

using namespace std;

int nrmaxim(int n)
{
    vector<int> cifre_numar;
    int numar_cifre=0,maxi=0;
    while(n)
    {
        cifre_numar.push_back(n%10);
        n/=10;
    }
    int temp=cifre_numar.back();
    cout<<temp<<endl;
    for(int i=0;i<cifre_numar.size()-1;i++)
        cifre_numar[i]=cifre_numar[i+1];
    for(auto x:cifre_numar)
        cout<<x;


}

int main(void)
{
    int n;
    cin>>n;
    nrmaxim(n);
}

