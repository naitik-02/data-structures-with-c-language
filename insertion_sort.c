#include<stdio.h>
 

 void printarr(int *arr , int n ){
    for (int i = 0 ; i< n ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

 }
 void insertsort(int * arr , int n ){
    int key , j ;
    for(int i = 1 ; i <= n-1 ; i++){
        key = arr[i];
        j = i-1;

        while( j>=0 &&arr[j]>key){
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;
    }
    
 }
int main(){
    int arr[] = {2,5,6,7,8,4,3,2};
    int n  = 8  ;
    printarr(arr , n );
    insertsort(arr , n );
    printarr(arr , n );

    return 0;
}