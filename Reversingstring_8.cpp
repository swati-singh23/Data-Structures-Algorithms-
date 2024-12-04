#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[] = "Python";
    char t;
    int i,j;

    for(j=0;a[j]!='\0';j++)
    { 
    }
    j=j-1;
    for(i=0;i<j;i++ ,j--)
    {
        int t;
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    cout<<a;


    return 0;
}