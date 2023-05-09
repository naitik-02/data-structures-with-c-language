//write a program to binary search of a number in array in c programming ;
#include<stdio.h>

int binarysearch(int arr[],int element, int size){
    int low , mid , high ;
    low = 0 ;
    high= size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        
        }
         if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;

}
int main(){
    int arr[]={2,4,6,9,10,12,14};
    int element =6;
    int size=68;
    int search= binarysearch(arr, element , size);
    printf("the element %d is in the index %d", element, search);

    return 0;
}