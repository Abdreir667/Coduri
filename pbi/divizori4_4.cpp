#include <fstream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int n, nr, poz, c, divizori_context, nrdiv = 0, temp = 0;

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

InParser cin("divizor4.in");
OutParser cout("divizor4.out");

vector<int> numere;
vector<int> divizori;
vector<int> numere_divizori;
vector<int>::iterator it;

int nrd(int n)
{
    int nrd=1,d=2;
    while(n>1)
    {
        if(n%d==0)
        {
            int p=0;
            while(n%d==0)
            {
                p++;
                n/=d;
            }
            nrd*=(p+1);
        }
        d++;
        if(d*d>n)
            d=n; 
    }
    return nrd;
}

int main(void)
{
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        cin >> nr;
        numere.push_back(nr);
        divizori.push_back(nrd(nr));
    }
    numere.push_back(-100);
    cin >> poz;
    divizori_context = divizori[poz - 1];
    numere_divizori.push_back(numere[poz - 1]);
    divizori[poz - 1] = -1;
    switch (c)
    {
        case 1:
            cout << divizori_context;
            break;
        case 2:
        {
            for (int i = 1; i <= n; i++)
            {
                it = find(divizori.begin(), divizori.end(), divizori_context);
                if (numere[it - divizori.begin()] != numere.back())
                {
                    numere_divizori.push_back(numere[it - divizori.begin()]);
                    numere[it - numere.begin()] = -1;
                }
                else
                    break;
            }
            sort(numere_divizori.begin(), numere_divizori.end(), greater<int>());
            for (auto x : numere_divizori)
                cout << x << " ";
        }
    }
}