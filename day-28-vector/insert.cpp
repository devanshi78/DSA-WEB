#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> name{"(diya)","(devanshi)","(drashti)"};

    name.insert(name.begin(),"(pooja)"); //it will insert value in strating.

    name.insert(name.begin() + 2,"(pooja)"); //it will insert value after to starting value.

    for(int i = 0; i < name.size(); i++)
    {
        cout<<name[i]<<" ";
    }

    return 0;

}