#include <iostream>
#include <cmath>

using namespace std;

int nr;

int miltiplu(int nr)
{
    for(int i=(int)(sqrt(nr));i<=100000;i++)
    {
        if(i*i%nr==0)
        {
            return i*i;
        }
    }
}

int main(void)
{
    cin>>nr;
    for(int i=(int)(sqrt(nr));i<=100000;i++)
    {
        if(i*i%nr==0)
        {
            nr=i*i;
            break;
        }
    }
    cout<<nr<<" ";
}