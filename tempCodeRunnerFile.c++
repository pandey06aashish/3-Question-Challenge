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