vector<int> countingSort(vector<int> arr) {
    
    vector<int> st(100,0);
    vector<int> ans;
    
    for(int i=0;i<arr.size();i++)
    {
        st[arr[i]]+=1;
    }
    for(int i=0;i<=100;i++)
    {
        while(st[i]--)
        {
            ans.push_back(i);
        }
        if(ans.size()==arr.size())
        {
            break;
        }
    }
    return ans;

}