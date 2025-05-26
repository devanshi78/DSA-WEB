//step 1 : Start
//step 2 : Initialize vriable
//step 3 : Check for condition
//step 4 : If the condition is true,then go to the step 5 otherwise go to step 7
//step 5 : Sum = sum + i
//step 6 : Go to step 3
//step 7 : Print value of sum
//step 8 : End

#include<iostream>
using namespace std;

int main(){

    int i,sum=0,n;

    cout<<"enter n : ";
    cin>>n;

    i = 1;

    while(i<=n)
    {
        sum += i;
        i++;
    }

    cout<<"sum of "<<n<<" is : "<<sum;

    return 0;
}