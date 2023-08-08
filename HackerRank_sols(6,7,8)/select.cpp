#include<iostream.h>

int main()
{
    int arr={44,2,5,22,3};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        int mi=arr[i];
        int pos=-1;
        for(int j=i+1;j<n;j++)
        {   if(mi>arr[j])
        {
            int mi=min(mi,arr[j]); 
            pos=j;
        }
        }
        if(pos!=-1)
        swap(arr[j],arr[i]);

    }
}