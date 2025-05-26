//step 1 : Start
//step 2 : Initalize variables
//step 3 : Check for the condition
//step 4 : If the condition true , then go to step 5 otherwise go to step 7
//step 5 : Fact = fact * i
//step 6 : Go to step 3
//step 7 : Print of value of fact
//step 8 : End

#include<iostream>
using namespace std;

int main(){

    int fact = 1,i = 1,n;

    cout<<"enter n : ";
    cin>>n;

    i=n;

    while(i >= 1)
    {
        fact = fact * i;
        i--;
    }

    cout<<"factorial of "<<n<<" is : "<<fact;

    return 0;
}