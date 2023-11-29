
#include <stdio.h>
#include<math.h>
int nearestPrime(int n){
    int i=n;
    while(i>2){
        int j=1,c=0;
        while(j<=i){
            if(i%j==0){
                c++;
            }
            j++;
        }
        if(c==2){
            return i;
        }
        i--;
    }
    return 2;
}
void divisionHash(int k,int ts){
    int x=nearestPrime(ts);
    printf("%d\n",k%x);
}
int noOfDig(long int n){
    int c=0;
    while(n>0){
        c++;
        n=n/10;
    }
    return c;
}
void midsquareHash(long int k,int ts){
    long int n= noOfDig(k);
    int d=((2*n)-2)/2;
    long int y=pow(10,d);
    long int x=(k*k)/y;
    long int l=x%ts;
    printf("%ld\n",l);
    
}
void foldingHash(long int k,int ts){
    long int d=noOfDig(ts)-1;
    long int s=0;
    int g=pow(10,d);
    while(k!=0){
        int r=k%g;
        s=s+r;
        k=k/g;
    }
    int l=s%ts;
    printf("%d\n",l);
}
int main()
{
    long int arr[]={2200320100052,2200320100099,2200320100133,2200320100158,2200320100200};
    for(int i=0;i<5;i++){
    long int k = arr[i];
    //divisionHash(k,1000);
    //midsquareHash(k,100);
    foldingHash(k,200);
}
    return 0;
}

