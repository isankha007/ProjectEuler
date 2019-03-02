#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	int arr[20][20];
	long long maxMul=1;
	cout<<"hello world"<<endl;
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
		   cin>>arr[i][j];
		}
	}
	cout<<"++++++==============================++++++++++++++++++++++++==================++++++++++++"<<endl;
	for(int i=0;i<20;i++){
			for(int j=0;j<20;j++){
				long long tempPord=1;
			   if(i>3){//left
				   if ((arr[i][j]*arr[i-1][j]*arr[i-2][j]*arr[i-3][j])>maxMul){
					   maxMul=arr[i][j]*arr[i-1][j]*arr[i-2][j]*arr[i-3][j];
				   }
			   }
			   if(20-i>3){//right
			     if ((arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j])>maxMul){
						   maxMul=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
					   }
			   	 }
			   if(j>3){//up
				   if ((arr[i][j]*arr[i][j-1]*arr[i][j-1]*arr[i][j-3])>maxMul){
					   maxMul=arr[i][j]*arr[i][j-1]*arr[i][j-1]*arr[i][j-3];
				   }
			   }
			   if(20-j>3){//down
				   if ((arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3])>maxMul){
					   maxMul=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
				   }
			   }
			   if(j>3 && i>3){//left diagonal
				   if ((arr[i][j]*arr[i-1][j-1]*arr[i-2][j-2]*arr[i-3][j-3])>maxMul){
					   maxMul=arr[i][j]*arr[i-1][j-1]*arr[i-2][j-2]*arr[i-3][j-3];
				   }
			   }
			   if(i>3 && 20-j>3){//left diagonal
				   if ((arr[i][j]*arr[i-1][j+1]*arr[i-2][j+2]*arr[i-3][j+3])>maxMul){
					   maxMul=arr[i][j]*arr[i-1][j+1]*arr[i-2][j+2]*arr[i-3][j+3];
				   }
			   }


			}
//			cout<<endl;
	}
	cout<<"Max Mul "<<maxMul<<endl;
	return 0;
}
