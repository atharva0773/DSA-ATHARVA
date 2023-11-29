#include<stdio.h>
void linearsearch(int arr[],int ele,int n){
    int flag=0;
    for(int i=0;i<n;i++){
    if (arr[i]==ele)
    {
       printf("elememt is found at index =%d",i);
       flag=1;
       break; 
    }
    }
    if(flag==0)
    printf("element is not found at index");
    

}

    int main(){
    int ele;
    int arr[]={1,2,3,4,5,6,7};
    printf("enter the element");
    scanf("%d",&ele);
    linearsearch(arr,ele,7);

}
