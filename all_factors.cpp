#include<bits/stdc++.h>
using namespace std;
int factors[999];
int factor (int n)
{
    int l=sqrt(n);
    int i,j=0;
    for(i=1;i<=l;i++)
    {
        if(n%i==0)
        {
            factors[j]=i;
            j++;
            factors[j]=n/i;
            j++;

        }
    }
    return j;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int len=factor(n);
        cout<<"Number of factors:"<<len<<endl;
        sort(factors, factors + len);
        for(int i=0;i<len;i++)
            cout<<factors[i]<<endl;

    }
    return 0;
}

