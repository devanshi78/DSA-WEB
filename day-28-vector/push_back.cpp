#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> colours{"red","blue","black","white"};

    colours.push_back("orange");
    colours.push_back("gray");
    colours.push_back("skyblue");

    for(int i = 0; i < colours.size(); i++)
    {
        cout<<colours[i]<<" ";
    }

    return 0;

}