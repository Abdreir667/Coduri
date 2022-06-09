#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <vector>
#include <map>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <bitset>
#include <algorithm>
#include <string>
#include <climits>
#include <complex.h>
#include <stdio.h>
#include <stack>
#include <list>
#include <locale>
#include <strstream>
#include <random>
#include <array>
#include <new>
#include <cstdlib>
#include <iterator>
#include <cstddef>
#include <memory_resource>
#include <numeric>
#include <streambuf>
#include <locale.h>
#include <semaphore>
#include <wchar.h>
#include <errno.h>
#include <inttypes.h>
#include <stddef.h>
#include <statomic.h>
#include <tgmath.h>
std::ifstream f("sum.in");
std::ofstream g("sum.out");
int a,b;
int sum(int a, int b)
{
    g<<a+b;
    return 0;
}
int main()
{
    sync_with_stdio(false);
    f>>a>>b;
    sum(a,b);
f.close();
g.close();
}