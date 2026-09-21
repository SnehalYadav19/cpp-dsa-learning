#include<iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int i =1;
    

    while ( i<=n)
    {
       int space = n - 1;
       while (space) {
  cout << " ";
  space = space + 1;

       }
int col = 1;
while (j<=n) {
    cout << " ";
    j = j + 1;

}
cout<<endl;
i = i + 1;

    }
}