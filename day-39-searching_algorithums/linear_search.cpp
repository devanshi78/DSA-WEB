#include<iostream>
#include<vector>

using namespace std;

int linearsearch(vector<int>& arr,int target)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr.at(i) == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    return 0;
}