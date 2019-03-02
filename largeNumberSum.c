#include<stdio.h>

int main(){
	FILE *fp;
	fp=fopen("readdigits.txt","r");
	int x[100][50];
	int y[50];

	for(int a=0;a<100;a++)
	{
		for(int b=0;b<50;b++)
		{
			fscanf(fp,"%1d",&x[a][b]);

		}
	}
	/**/
	 for(int b=0;b<50;b++)
	                {
	       int tot=0;
	       for(int a=0;a<100;a++)
	                     {
	    tot=tot+x[a][b];
	       }
	       y[b]=tot;
	          }


	          for(int a=49;a>0;a--)
	                 {
	               y[a-1]=y[a-1]+y[a]/10;
	               y[a]=y[a]%10;
	          }



	          for(int a=0;a<50;a++)
	                 {

	               printf("%i",y[a]);
	          }
	         /* */
	////////////my implementation ////////////////////
	/*
	int carry=0;
	int tot=0;
	for(int a=49;a>-4;a--)
		{
		    tot=0;
			for(int b=0;b<100;b++)
			{
				tot=tot+x[b][a];

			}
			//printf("%d %d\n",tot,carry);
			tot+=carry;
			y[a]=tot%10;
//			printf("..%d==C %d..",tot%10,carry);
//			if(a==1)break;
			carry=tot/10;



		}
	printf("%d",(tot+carry)/10);
	 for(int a=0;a<50;a++)
		                 {

		               printf("%i",y[a]);
		          }*/
	 //////////////////
      return 0;
}
