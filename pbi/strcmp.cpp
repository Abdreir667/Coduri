#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

char test1[50001],test2[50001];

ifstream in("serbare1.out");
ifstream in1("serbare2.out");

int main(void)
{
    cin>>skipws>>test1;
    cin>>skipws>>test2;
    cout<<strcmp(test1,test2)<<endl;
}