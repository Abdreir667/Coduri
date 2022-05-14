#include <fstream>

using namespace std;

ifstream cin("memory009.in");
ofstream cout("memory009.out");
int n,m,val_m,val_n;

int main(void)
{
    cin>>n>>m;
    int temp1=1,temp2=1;
    cin>>val_n;
    cout<<val_n<<endl;
    //cin.seekg(0,ios::beg);
    cin.seekg(5,ios::beg);
    cin>>val_m;
    cout<<val_m<<endl;
    while(temp1<=n && temp2<=m)
    {
        if(val_n!=val_m)
        {
            if(val_n<val_m)
            {
                cin.seekg(2+temp1,ios::beg);
                cin>>val_n;
                cout<<val_n<<endl;
                temp1++;
            }
            else
            {
                cin.seekg(n+2+temp2,ios::beg);
                cin>>val_m;
                cout<<val_m<<endl;
                temp2++;
            }
        }
        else if(val_n==val_m)
        {
            cout<<val_n<<" ";
            temp1++;
            temp2++;
        }
    }
}