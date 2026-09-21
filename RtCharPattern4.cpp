#include<iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int i =1;
char start ='A';

    while ( i<=n)
    {
        int j = 1;
         while (j<=i)
         {
             char ch = n + i + j -2;
            cout<<ch<<" ";
            j = j+1;
         }
         cout<<endl;
          i = i+ 1;

    }
}