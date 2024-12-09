#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int sum = 0;
        long long rem = n%9;
        long long full= n/9;

        if(full)
        {
            for(long long j=0; j<full; j++)
            {
                for(long long i=1; i<=9; i++)
                {
                    sum +=i;
                    
                }
            }

        }
        if(rem)
        {
            for(long long i=1; i<=rem; i++)
            {
                sum +=i;
            }
        }
        cout << sum << endl;

    }
    return 0;
}