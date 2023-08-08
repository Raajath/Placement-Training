void insertionSort1(int n, vector<int> arr) {
    
  int ch=arr[n-1];
  // bool t=true;
    for(int i=n-1;i>=0;i--)
    {
        if(ch<=arr[i])
        {
            arr[i]=arr[i-1];
            if(ch>arr[i])
            {
                arr[i]=ch;
            }
        }
        else{
            //arr[i+1]=ch;
            break;
        }    
    
        for(auto it:arr)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    

}
