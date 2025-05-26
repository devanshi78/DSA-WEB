//use of begin()

#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> v1{1,2,3,4,5};

    v1.insert(v1.begin()+3,40);

    for(int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }

    return 0;

}