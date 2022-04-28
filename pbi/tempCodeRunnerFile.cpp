bool different_check(int n)
{
    vector<int> temporal;
    int lungime=0;
    int aux=n;
    while(n)
    {
        int nr=n%10;
        temporal.push_back(nr);
        lungime++;
        n/=10;
    }
    unordered_set<int> s;
    for(int i=0;i<lungime;i++)
        s.insert(temporal[i]);
    if(s.size()==2)
        return true;
    else return false;
}