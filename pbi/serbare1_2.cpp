#include <algorithm>
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("serbare1.in");
ofstream fout("serbare1.out");

struct student
{
    char last[51], first[51];
    int height;
};

int f[151];
student a[100];

static bool cmpstudent(student a, student b)
{
    if(a.height > b.height)
        return true;
    else if(a.height == b.height && strcmp(a.last, b.last) < 0)
        return 1;

    return false;
}

int main(void)
{
    int i, j, n, count = 0;

    fin >> n;

    for(i = 0; i < n; i++) {
        fin >> a[i].last >> a[i].first >> a[i].height;
        if(f[a[i].height] == 0)
            count++;
        f[a[i].height]++;
    }

    fout << count;

    sort(a, a + n, cmpstudent);

    for(i = 150; i >= 1; i--) {
        if(f[i]) {
            fout << endl << f[i] << " ";
            for(j = 0; j < n; j++)
                if(i == a[j].height)
                    fout <<  a[j].last << " " << a[j].first << " ";
        }
    }

    return 0;
}
