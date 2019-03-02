#include<stdio.h>
#include<math.h>

#define MAX(a,b) ((a) > (b) ? a : b)

const int SIZE=1000;

int main(){

   int i,j,count,sum1,maxI;
   int arr[SIZE];
   scanf("%d",&maxI);
   for(i=0;i<SIZE;i++){
	   arr[i]=0;
   }
   arr[SIZE-1]=1;
   count=1;
   sum1=0;
   for(i=1;i<=maxI;i++){
	   for(j=0;j<count;j++)
		   arr[SIZE-1-j]=arr[SIZE-1-j]*2;
	   for(j=0;j<count;j++){
          arr[SIZE-1-j-1]+=arr[SIZE-1-j]/10;
          if(arr[SIZE-1-j]>0) count= MAX(count,j+2);
          arr[SIZE-1-j]=arr[SIZE-1-j]%10;
	   }
   }
   for(i=0;i<=count;i++){
	  // printf("%d",arr[SIZE-1-count+i]);
	   sum1+=arr[SIZE-1-count+i];
   }

    printf("%d",sum1);


	return 0;
}
