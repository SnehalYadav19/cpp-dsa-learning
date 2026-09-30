#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n" << endl;
    cin>>n;

    int largest=0;
    do
    {

        cin>>n;
        if(n>largest)
        {
            largest = n;
        }
    } while (n!=0);
    
    cout<<"Largest Number = "<<largest;
    return 0;




}
     