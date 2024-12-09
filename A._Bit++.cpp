#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, val=0;
    cin>>n;
    while(n)
    {
        string str;
        cin>>str;
        if(str == "++X")
        {
            ++val;
        }
        else if(str == "X++")
        {
            val++;
        }
        else if(str == "X--")
        {
            val--;
        }
        else if(str == "--X")
        {
            --val;
        }
       n=n-1; 
    }
    cout<<val<<endl;
    return 0;
}