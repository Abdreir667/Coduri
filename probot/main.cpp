#include <iostream>

using namespace std;

int main()
{

    nt q=10;
int a;
int Y1;
int X1;
int b;
int Y2;
int X2;
int Diferenta_Ox=0;
int RotireX=0;
int Diferenta_Oy=0;
int RotireY=0;

  cout<<"a="<<endl;
  cin>>a;
  if (a == 8) {
    Y1 = 3;
    X1 = 3;
  }
  if (a == 7) {
    Y1 = 3;
    X1 = 2;
  }
  if (a == 6) {
    Y1 = 3;
    X1 = 1;
  }
  if (a == 5) {
    Y1 = 2;
    X1 = 3;
  }
  if (a == 4) {
    Y1 = 2;
    X1 = 2;
  }
  if (a == 3) {
    Y1 = 2;
    X1 = 1;
  }
  if (a == 2) {
    Y1 = 1;
    X1 = 3;
  }
  if (a == 1) {
    Y1 = 1;
    X1 = 2;
  }
  if (a == 0) {
    Y1 = 1;
    X1 = 1;
  }
  cout<<"x1="<<' '<<X1<<endl;
  cout<<"y1="<<' '<<Y1<<endl;
while(q>0)
{
  cout<<"b="<<endl;
  cin>>b;
  if (b == 8) {
    Y2 = 3;
    X2 = 3;
  }
  if (b == 7) {
    Y2 = 3;
    X2 = 2;
  }
  if (b == 6) {
    Y2 = 3;
    X2 = 1;
  }
  if (b == 5) {
    Y2 = 2;
    X2 = 3;
  }
  if (b == 4) {
    Y2 = 2;
    X2 = 2;
  }
  if (b == 3) {
    Y2 = 2;
    X2 = 1;
  }
  if (b == 2) {
    Y2 = 1;
    X2 = 3;
  }
  if (b == 1) {
    Y2 = 1;
    X2 = 2;
  }
  if (b == 0) {
    Y2 = 1;
    X2 = 1;
  }
  cout<<"x2="<<' '<<X2<<endl;
  cout<<"y2="<<' '<<Y2<<endl;

  if (X1 == X2) {
    cout<<"Pozitia X este aceeasi."<<endl;
  }
  if (X2 > X1) {
    Diferenta_Ox = X2 - X1;
    RotireX = 1;
  }
  if (X1>X1) {
    Diferenta_Ox = X1 - X2;
    RotireX = -1;
  }

  cout<<"RotireX"<<' '<<RotireX<<endl;
  cout<<"Diferenta Ox"<<' '<<Diferenta_Ox<<endl;

  if (Y1 == Y2) {
    cout<<"Pozitia Y este aceeasi."<<endl;
  }
    if (Y2 > Y1) {
    Diferenta_Oy = Y2 - Y1;
  }
  if (Y1>Y2){
    Diferenta_Oy = Y1 - Y2;
    RotireY = 2;
  }
  cout<<"RotireY"<<' '<<RotireY<<endl;
  cout<<"Diferenta Oy"<<' '<<Diferenta_Oy<<endl;

  if (RotireY == 0) {
    if (Diferenta_Oy == 0) {
      cout<<"Pozitia Y este aceeasi."<<endl;
    }
     if (Diferenta_Oy == 1) {
      cout<<"Se muta bratul pe Oy cu o unitate."<<endl;
      for (int count3 = 0; count3 < 2; count3++) {
        cout<<"Se roteste 90 de grade."<<endl;
      }
    }
    if (Diferenta_Oy == 2){
      for (int count5 = 0; count5 < 2; count5++) {
        cout<<"Se muta bratul pe Oy cu o unitate."<<endl;
        for (int count4 = 0; count4 < 2; count4++) {
          cout<<"Se roteste 90 de grade."<<endl;
        }
      }
    }
  } else {
    if (Diferenta_Oy == 0) {
      cout<<"Pozitia Y este aceeasi."<<endl;
    }
     if (Diferenta_Oy == 1) {
      for (int count6 = 0; count6 < 2; count6++) {
        cout<<"Se roteste 90 de grade."<<endl;
      }
      cout<<"Se muta bratul pe Oy cu o unitate."<<endl;
    }
    if(Diferenta_Oy == 2) {
      for (int count8 = 0; count8 < 2; count8++) {
        for (int count7 = 0; count7 < 2; count7++) {
          cout<<"Se roteste 90 de grade."<<endl;
        }
        cout<<"Se muta bratul pe Oy cu o unitate."<<endl;
      }
    }
  }
  if (RotireX == 0) {
    cout<<"Pozitia X este aceeeasi."<<endl;
  }
   if (RotireX == 1) {
    if (Diferenta_Ox == 0) {
      cout<<"Pozitia X este aceeeasi."<<endl;
    }
     if (Diferenta_Ox == 1) {
      cout<<"Se roteste 90 de grade."<<endl;
      cout<<"Se muta bratul pe Ox cu o unitate."<<endl;
      cout<<"Se roteste 90 de grade."<<endl;
    }
    if(Diferenta_Ox == 2) {
      for (int count9 = 0; count9 < 2; count9++) {
        cout<<"Se roteste 90 de grade."<<endl;
        cout<<"Se muta bratul pe Ox cu o unitate."<<endl;
        cout<<"Se roteste 90 de grade."<<endl;
      }
    }
  } else {
    if (Diferenta_Ox == 0) {
      cout<<"Pozitia X este aceeeasi."<<endl;
    }
     if (Diferenta_Ox == 1) {
      cout<<"Se roteste -90 grade."<<endl;
      cout<<"Se muta bratul pe Ox cu o unitate."<<endl;
      cout<<"Se roteste -90 grade."<<endl;
    }
    if(Diferenta_Ox == 2) {
      for (int count10 = 0; count10 < 2; count10++) {
        cout<<"Se roteste -90 grade."<<endl;
        cout<<"Se muta bratul pe Ox cu o unitate."<<endl;
        cout<<"Se roteste -90 grade."<<endl;
      }
    }
  }
  X1 = X2;
  Y1 = Y2;
  Diferenta_Ox = 0;
  Diferenta_Oy = 0;
  RotireX = 0;
  RotireY = 0;

}


    return 0;
}
