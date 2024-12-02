#include<iostream>
using namespace std;

int main()
{
    char name[100];
    int i;
    cout<<"enter name";
    cin.get(name,100);//for taking input 


    for(i=0;name[i]!=0;i++)
    {
        if (name[i]>=65 && name[i]<=90)
        {
            name[i]=name[i]+32;//lower to upper case
        }
        else if(name[i]>=97 && name[i]<=122)
        {
            name[i]=name[i]-32;//upper to lower case
        }
       
    }
        cout<<name;
    
    return 0;
}