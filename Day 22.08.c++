// Write a program to reverse an string......

// #include <iostream>

// void reverseArray(char arr[], int size) {
//     int start=0;
//     int end=size-1;
//     while (start <= end) {
//         char temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         ++start;
//         --end;
//     }
// }
// int main() {
//     char arr[] = "Hello, World!";
//     int n = sizeof(arr) - 1; 
//     std::cout << "Original array: " << arr <<std::endl;
//     reverseArray(arr,n);
//     std::cout << "Reversed array: " << arr << std::endl;
//     return 0;
// }

// Write a program to reverse an array...
#include<iostream>
using namespace std;
void reverse_array(int array[],int size){
    for(int i=0;i<size/2;i++){
        int temp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=temp;
    }
}
int main(){
    int array[]={11,22,33,44,55,66,77,88,99,100};
    int size=sizeof(array)/sizeof(array[0]);
    cout <<"Original Array:";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout <<endl;
  cout <<"After reverse Array:";
  reverse_array(array,size);
   for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout <<endl;
    return 0;
}