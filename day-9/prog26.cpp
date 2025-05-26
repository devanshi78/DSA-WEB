#include<iostream>
using namespace std;

int main(){

    int num,count = 0;

    cout<<"enter number : ";
    cin>>num;

    while(num != 0)
    {
        num = num / 10;
        count++;
    }

    cout<<"total digits: "<<(count == 0 ? 1 : count)<<endl;

    return 0;

}