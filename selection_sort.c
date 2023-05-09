#include<stdio.h>
 
 void printarr( int * arr , int n  ){
    for ( int i = 0 ; i < n ; i ++){
        printf("%d " , arr[i]);
    }
    printf("\n ");
 }
 void selectionsort(int * arr , int n ){
    int indexofmin , temp ;
    for( int i = 0 ; i < n ; i++){
        indexofmin = i ;
        for ( int j =i +1 ; j < n ; j++){
            if (arr[j] < arr[indexofmin] ){
                indexofmin = j;

            }
        }
        temp = arr[i];
        arr[i]= arr[indexofmin];
        arr[indexofmin]= temp;
    }
 }
int main(){
    int arr[]= {2,1,4,3,6,4,6};
     int n = 7 ;
     printarr( arr , n );
     selectionsort(arr , n );
     printarr( arr , n );
    return 0;
}