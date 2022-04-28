#include <iostream>
#include <fstream>

using namespace std; 

ifstream f("constr.in");
ofstream g("constr.out");

int main(void){
    int n,arr[1001],nrn=1;
    f>>arr[1];  //citim prima valoare
    while(f>>n) //citim valorile urmatoare
    {
        int aux=nrn;//auxiliara pentru numarul de numere:)
        while(aux!=0 && n<arr[nrn])
        {
            arr[aux+1]=arr[aux]; 
            aux--;
        }
        nrn++;
        arr[aux+1]=n;
    }
    for(int i=1;i<=nrn;i++)
        cout<<arr[i]<<" ";
}
/*Exemplu:4 5 1 3
4 va fi retinuta in arr[1]
Incepe structura while:
    1:
    -se citeste n(5)
    -daca n este mai mare decat prima isi va partra pozitia 
    -nrn=2(dupa ce termina)
    2:
    -se citeste n(1)
    -se va muta pe primul loc astfel: 
        -aux=2 deci arr[3]=arr[2],4 5 5 
        -aux=1 deci arr[2]=arr[1],4 4 5
        -aux=0 deci arr[1]=arr[0],dar nu conteaza deoarece se va schimba valoarea mai tarziu
        -se sfarseste while-ul imbricat
        -arr[1]=n,deci 1 4 5 
    3:
    -se citeste n(3)
    -se va muta pe al doilea loc:
        -aux=3 deci arr[4]=arr[3],1 4 5 5 
        -aux=2 deci arr[3]=arr[2],1 4 4 5
        -aux=1
        -se sfarseste while-ul imbricat,deoarece arr[1]<n(1<3)
        -arr[2]-n,deci 1 3 4 5  