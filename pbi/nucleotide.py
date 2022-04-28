from copyreg import remove_extension
from random import random

acid=input("Dati in care se vor afla nucleotidele: ")
n=input("Dati numarul de nuucleotide care trebuie traduse: ")
a=1
nucleotide =[a]
while a <= int(n):
    nucleotide.insert(a,input())
    a+=1;
nucleotide.remove(1)
a=0
cond=False
if acid.upper()=="ADN":
    while a<int(n):
            x=nucleotide[a]
            if x.upper()=="A":
                print("T")
            elif x.upper()=="T":
                print("A")
            elif x.upper()=="G":
                print("C")
            elif x.upper()=="C":
                print("G")
            a+=1
elif acid.upper()=="ARN":
    while a<int(n):
        x=nucleotide[a]
        if x.upper()=="A":
            print("U")
        if x.upper()=="U":
            print("A")
        if x.upper()=="G":
            print("C")
        if x.upper()=="C":
            print("G")
        a+=1
