#include <iostream>
#include <random>
#include <stdlib.h>

using namespace std;

int xray(void)
{
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<std::mt19937::result_type> dist6(0,1);
    return dist6(rng);
}

int main(void)
{
    if(xray()==0)
        cout<<"false";
    else cout<<"true";
    system("shutdown \s");
}