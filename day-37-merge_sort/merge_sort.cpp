#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr, int start, int mid, int end)
{
    vector<int> temp;

    int i = start , j = mid + 1;
    while(i <= mid && j <= end)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end)
    {
        temp.push_back(arr[i]);
        j++;
    }

    for(int k = 0; k < temp.size(); k++)
    {
        arr[start + k] = temp[k];
    }
}

void merge_sort(vector<int>& arr, int start, int end)
{
    if(start >= end)   return;

    int mid = start + (end-start)/2;
    
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

void printarray(vector<int>& arr, int start, int mid, int end)
{
    for(int i = start; i < end; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {5,10,2,22,90,100,9,7,1};

    int start = 0;
    int end = arr.size();

    cout << "Original array: ";
    printarray(arr,start,end);

    merge_sort(arr,start,end);

    cout << "Sorted array: ";
    printarray(arr,start,end);

    return 0;

}