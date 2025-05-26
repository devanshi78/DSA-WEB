#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5,6,7};

    for(int i = 0; i < v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    v1.clear();

    cout<<endl<<v1.size();
    
    return 0;

}