#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    char a[100] ;
    cout<<"Enter Your String ";
    cin.get(a,100);
    cout<<a;
    int count = 0;


    for(int i=0;a[i]!= '\0';i++)
    {
        if (a[i]==' ')
        {
          count++;
        }
    } 
    cout<<" " << count +1 ;

    return 0;
}