#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    if(sqrt(n)==int(sqrt(n)))
        cout<<"Este patrat perfect";
    else cout<<"Nu este patrat perfect";
}