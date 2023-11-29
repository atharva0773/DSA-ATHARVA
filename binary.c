#include<stdio.h>
int binarysearch(int arr[],int ele,int n)
{
    int l=0,h=n-1,mid;
    while(l<=h){
    mid=(l+h)/2;
    if(arr[mid]==ele) {
     return mid;
    }
    else {
    
     if(ele<arr[mid]){
      h=mid-1;
     }
      else{
    l=mid+1;
      }
    
     }
}
 return -1;
}
int main(){
int arr[]={1,2,3,4,5,6,7,8};
int ele;
printf("enter the element");
scanf("%d",&ele);
 printf("%d",binarysearch(arr,ele,8));
}




