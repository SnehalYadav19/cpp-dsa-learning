#include<iostream>
using namespace std;

int main () {
    int n=10;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int i = n;
    int sum = 0;
    while(i!=0){
      sum = sum + i;
      cout<<sum<<endl;
      i--;
    }
}