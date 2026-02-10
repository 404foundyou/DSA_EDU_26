#include <iostream>
#include <vector>
using namespace std;
void selection_sort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n ; i++){
        int min = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;       
    }
    
}
int main(){
    vector<int> arr = {3,45,64,37,33,23,67};
    selection_sort(arr);
    for(int i = 0 ; i < 7 ; i++){
        cout<<arr[i]<<" ";
    }
}