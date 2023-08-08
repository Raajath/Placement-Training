bool cmp(string l,string r)
{
    if(l.size()==r.size()) return l<r;
    return l.size()<r.size();
}

vector<string> bigSorting(vector<string> unsorted) {

sort(unsorted.begin(),unsorted.end(),cmp);
return unsorted;

}