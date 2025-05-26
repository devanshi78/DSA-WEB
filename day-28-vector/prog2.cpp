#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1(5,2); //it will print 2 2 2 2 2.

    for(int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }

    return 0;

}