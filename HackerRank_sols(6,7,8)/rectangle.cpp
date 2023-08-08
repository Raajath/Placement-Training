long largestRectangle(vector<int> h) {

long ans=0;
for(int i=0;i<h.size()-1;i++)
{   int mi=INT_MAX;
    for(int j=i;j<h.size();j++)
    {
          mi=min(mi,h[j]);
        long x=mi*(j-i+1);
        ans=max(ans,x);
    }  
}
return ans;
}