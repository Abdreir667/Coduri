#include <stdio.h>
#include <algorithm>
#include <set>
#include <ios>

using namespace std;

class InParser {
private:
    FILE* fin;
    char* buff;
    int sp;
    char read_ch() {
        ++sp;
        if (sp == 4096) {
            sp = 0;
            fread(buff, 1, 4096, fin);
        }
        return buff[sp];
    }
public:
    InParser(const char* nume) {
        fin = fopen(nume, "r");
        buff = new char[4096]();
        sp = 4095;
    }
    InParser& operator >> (int& n) {
        char c;
        while (!isdigit(c = read_ch()) && c != '-');
        int sgn = 1;
        if (c == '-') {
            n = 0;
            sgn = -1;
        }
        else {
            n = c - '0';
        }
        while (isdigit(c = read_ch())) {
            n = 10 * n + c - '0';
        }
        n *= sgn;
        return *this;
    }
    InParser& operator >> (long long& n) {
        char c;
        n = 0;
        while (!isdigit(c = read_ch()) && c != '-');
        long long sgn = 1;
        if (c == '-') {
            n = 0;
            sgn = -1;
        }
        else {
            n = c - '0';
        }
        while (isdigit(c = read_ch())) {
            n = 10 * n + c - '0';
        }
        n *= sgn;
        return *this;
    }
};

class OutParser
{
private:
    FILE *fout;
    char *buff;
    int sp;
    void write_ch(char ch)
    {
        if(sp==50000)
        {
            fwrite(buff,1,50000,fout);
            sp=0;
            buff[sp++]=ch;
        }
        else
        {
            buff[sp++]=ch;
        }
    }
public:
    OutParser(const char* name)
    {
        fout=fopen(name,"w");
        buff=new char[50000]();
        sp=0;
    }
    ~OutParser()
    {
        fwrite(buff,1,sp,fout);
        fclose(fout);
    }
    OutParser& operator <<(int vu32)
    {
        if(vu32<=9)
        {
            write_ch(vu32+'0');
        }
        else
        {
            (*this) <<(vu32/10);
            write_ch(vu32%10+'0');
        }
        return *this;
    }
    OutParser& operator <<(long long vu64)
    {
        if(vu64<=9)
        {
            write_ch(vu64+'0');
        }
        else
        {
            (*this) <<(vu64/10);
            write_ch(vu64%10+'0');
        }
        return *this;
    }
    OutParser& operator <<(char ch)
    {
        write_ch(ch);
        return *this;
    }
    OutParser& operator <<(const char *ch)
    {
        while(*ch)
        {
            write_ch(*ch);
            ++ch;
        }
        return *this;
    }
};

InParser fin("sort4.in");
OutParser fout("sort4.out");

struct numere
{
    short cifre_distincte;
    short suma_cifrelor;
    int produsul_cifrelor;
    int valoare;
};

numere p[1000001];
set<short> cifre;
int n;

short cifre_distincte(int n)
{
    cifre.clear();
    while (n)
    {
        cifre.insert(n % 10);
        n /= 10;
    }
    return cifre.size();
}

struct useful
{
    short suma_cifrelor(int n)
    {
        short s = 0;
        while (n)
        {
            s += n % 10;
            n /= 10;
        }
        return s;
    }
    int produsul_cifrelor(int n)
    {
        int p = 1;
        while (n)
        {
            p *= n % 10;
            n /= 10;
        }
        return p;
    }
} numar;

int ord(numere x, numere y)
{
    if (x.cifre_distincte != y.cifre_distincte)
        return x.cifre_distincte > y.cifre_distincte;
    else if (x.suma_cifrelor != y.suma_cifrelor)
        return x.suma_cifrelor < y.suma_cifrelor;
    else if (x.produsul_cifrelor != y.produsul_cifrelor)
        return x.produsul_cifrelor < y.produsul_cifrelor;
    else if (x.valoare != y.valoare)
        return x.valoare < y.valoare;
    else return 0;
}

int main(void)
{
    fin>>n;
    for (int i = 1; i <= n; i++)
    {
        fin>>p[i].valoare;
        p[i].cifre_distincte = cifre_distincte(p[i].valoare);
        p[i].suma_cifrelor = numar.suma_cifrelor(p[i].valoare);
        p[i].produsul_cifrelor = numar.produsul_cifrelor(p[i].valoare);
    }
    sort(p + 1, p + n + 1, ord);
    for (int i = 1; i <= n; i++)
        fout<<p[i].valoare<<" ";
}