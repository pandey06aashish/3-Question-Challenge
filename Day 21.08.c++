// Write a program to print an Minimum and Maximum Element of the array....

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={5,6,4,10,22,33,54,2,77,23,87,94};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int minElement=arr[0];
//     int maxElement=arr[0];
//     for(int i=0;i<=size;i++){
//         if(arr[i]<minElement){
//             minElement=arr[i];
//         }
//         if(arr[i]>maxElement){
//            maxElement=arr[i];
//         }
//     }
//     cout<<"Maximum Element:"<<maxElement<<endl;
//     cout<<"Minimum Element:"<<minElement<<endl;
//  return 0;
// }

// Write a program to print an Minimum and Maximum Element of the array using climits library....

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={11,22,33,12,43,65,76,98,66,100,120};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int minElement=INT16_MAX;
//     int maxElement=INT16_MIN;
//     for(int i=0;i<=size;i++){
//         if(arr[i]<minElement){
//             minElement=arr[i];}
//          if(arr[i]>maxElement){
//             maxElement=arr[i];
//          }   
//     }
//     cout<<"Maximum Element:"<<maxElement<<endl;
//     cout<<"Minimum Element:"<<minElement<<endl;
//  return 0;    
// }

// Write a program to print an Minimum and Maximum Element of the array using Function....
#include<iostream>
using namespace std;
void find_min_max_element(int arr[],int size){
    int minElement=arr[0];
    int maxElement=arr[0];
    for(int i=0;i<=size;i++){
        if(arr[i]<minElement){
            minElement=arr[i];}
         if(arr[i]>maxElement){
            maxElement=arr[i];
         }   
    }
    cout<<"Maximum Element:"<<maxElement<<endl;
    cout<<"Minimum Element:"<<minElement<<endl;
}
int main(){
    int arr[]={22,33,44,22,55,66,77,10,223,432,543};
    int size=sizeof(arr)/sizeof(arr[0]);
    find_min_max_element(arr,size);
    return 0;
    }