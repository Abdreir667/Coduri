// CPP program to illustrate the
// unordered_set::count() function

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

	unordered_set<int> sampleSet;
    int n,i,k;
    cin>>n;
    for(i=1;i<=n;i++)
        {
            cin>>k; 
            sampleSet.insert(k);
        }
	cout << "sampleSet contains: ";
	for (auto itr = sampleSet.begin(); itr != sampleSet.end(); itr++) {
		cout << *itr << " ";
	}
}