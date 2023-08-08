#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

stack<int> inse;
stack<int> dele;

void ins(stack<int>& inse,stack<int>& dele,int ele)
{
    if(inse.empty())
    {
        inse.push(ele);
        return;
    }
    while(!inse.empty())
    {
        dele.push(inse.top());
        inse.pop();
    }
    inse.push(ele);
    while(!dele.empty())
    {
        inse.push(dele.top());
        dele.pop();
    }
    
}


void del(stack<int>& inse)
{
  inse.pop();
}

void front(stack<int>& inse)
{   
  
    cout<<inse.top()<<endl;
  
}





int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t=0;
    cin>>t;
    while(t--)
    {
        int op;
        cin>>op;
        int ele;
        if(op==1)
        {
        
        cin>>ele;
        }
        
        switch(op){
            
            case 1:ins(inse,dele,ele);
            break;
            case 2: del(inse);
            break;
            case 3: front(inse);
            break;
        }
    }
    
    return 0;
}
