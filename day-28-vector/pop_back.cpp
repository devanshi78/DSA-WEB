#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> name{"(diya)","(devanshi)","(drashti)"};

    name.pop_back(); //it remove last value.

    for(int i = 0; i < name.size(); i++)
    {
        cout<<name[i]<<" ";
    }

    return 0;

}
