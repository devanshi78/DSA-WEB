#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5,6};

    v1.erase(v1.begin()); //it will erase value starting.

    // v1.erase(v1.begin()+2); //it will erase value starting.

    for(int i = 0; i < v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    return 0;

}