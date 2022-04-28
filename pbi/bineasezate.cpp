#include <iostream>
#include <fstream>

using namespace std;

ifstream f("brain.in");
ofstream g("brain.out");

int n,arr[1000001],nr,o=0,s=0,j;

void sba(void) {
    f>>n;
    for(int i=1;i<=n;i++)
    {
       f>>nr;
       if(nr==i)
       {
        arr[++o]=i;
        g<<arr[o]<<" ";
       }
    }
    g<<endl;
}
void sbb(void) {
    for(j=1;j<=n;j++)
        s+=arr[j];
    g<<s<<endl;
}
void sbc(void){
    int i=1,minim=1,j=1;
    while(arr[i] <= minim && i<=j)
        minim+=arr[i++];
    g<<minim<<endl;
}
int main(void)
{
    sba();
    sbb();
    sbc();
}