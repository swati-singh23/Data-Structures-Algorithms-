#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=5823;
    while(n>0)
    {
        int r=n%10;
        cout<<r<<endl;
        n=n/10;
        cout<<n<<endl;
    }
 

    return 0;
}