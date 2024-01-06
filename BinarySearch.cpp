#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end-start)/2);

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
        mid = (start + (end-start)/2);
    }
    return -1;
}


int main() {
   int arr[6] = {2,4,6,7,9,11};
    
    int search = binarySearch(arr,6,7);
    cout << "Index is " << search << endl;

    return 0;
}
