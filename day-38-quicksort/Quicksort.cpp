#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int>& arr, int start, int end)
{
    int pivot = arr[end];
    int i = start -1;
    for(int j = start; j < end; j++)
    {
        if(arr[j] <= pivot)
        {
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[++i],arr[end]);

    return i;
};

void Quick_sort(vector<int>& arr, int start, int end)
{
    if(start >= end) return;

    int PivotIndex = Partition(arr,start,end);

    Quick_sort(arr,start,PivotIndex -1);
    Quick_sort(arr,PivotIndex + 1,end);
};

int main()
{
    vector<int> arr = {10,7,8,9,1,5,11,55,90,76,88,13,1,4};

    cout<<"original array : ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Quick_sort(arr , 0 , arr.size() - 1); // 0 is starting value.

    cout << "Sorted array: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;

    return 0;

}