#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5,6,7};

    if(v1.empty()){
        cout<<"Empty.";
    } else {
        cout<<"Not Empty.";
    }

    return 0;

}