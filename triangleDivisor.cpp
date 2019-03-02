#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long long n=1,term,divCount=0;
	int neededDivCount=500;


	while(divCount<neededDivCount){
		int found=0;
		term=(n*(n+1))/2;
		for(int i=1;i<(int)sqrt(term);i++){
			if(term%i==0){
//				if(term/i==term)
				  divCount+=2;
//				  cout<<"  "<<divCount<<" >>>> "<<(int)sqrt(term)<<endl;
			}
			if(divCount>=neededDivCount){
				found=1;
				break;
			}
		}

		if(found==1){
			if(neededDivCount%2!=0)divCount--;
			cout<<" Term = "<<term<<" count "<<divCount <<endl;
			break;
		}
		divCount=0;
		n++;
	}

	return 0;
}
