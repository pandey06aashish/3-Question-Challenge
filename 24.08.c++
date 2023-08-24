// Given an integer array nums, find the subarray with the largest sum, and return its sum...

// #include<iostream>
// using namespace std;
// int max_sum(int array[],int size){
//     int max_sum=array[0];
//     int curr_sum=array[0];
//     for(int i=1;i<size;i++){
//         curr_sum=max(array[i],array[i]+curr_sum);
//         max_sum=max(max_sum,curr_sum);
//     }
//     return max_sum;
// }
// int main(){
//     int array[]={12,-2,44,-5,88,-12,-13,15,65,-29,-50};
//     int size=sizeof(array)/sizeof(array[0]);
//     int total_sum=max_sum(array,size);
//      cout<<total_sum;
//      return 0;
// }

// Given an integer array nums,find the subarray with the largest sumand return its sum without using function...

#include<iostream>
using namespace std;
int main(){
    int array[]={12,-2,44,-5,88,-12,-13,15,65,-29,-50};
    int size=sizeof(array)/sizeof(array[0]);
    int max_sum=array[0];
    int curr_sum=array[0];
    for(int i=1;i<size;i++){
        curr_sum=max(array[i],array[i]+curr_sum);
        max_sum=max(max_sum,curr_sum);
    }
    cout<<max_sum;
    return 0;
}