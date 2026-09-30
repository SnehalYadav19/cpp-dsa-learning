#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n" << endl;
    cin>>n;
     
    int i=1,sum=0;
    do{
        cout<<i<<endl<< " ";
        sum=sum + i;
        i++;
    }
    while (i<=n);
    
        cout<<"The Sum of all the values entere"<<sum ;

        return 0;
    
    


}