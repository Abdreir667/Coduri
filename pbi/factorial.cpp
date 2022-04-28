#include <iostream>

using namespace std;

int fact(int n){
    cin>>n;
    int p=1;
    for(int i=2;i<=n;i++)
        p*=i;
    return p;
}