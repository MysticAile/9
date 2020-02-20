/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：用do-while语句求1～100的累计和。

------------------------------------------------*/
#include<stdio.h>
void wwjt();
 
long int  fun(int n)
{
 
  /**********Program**********/
  int a=1,sum=0;
  do{
  	sum += a;
  	a++;
  }while(a<=n);
  return sum;




  /**********  End  **********/
  
}

void main ()
{
    int i=100;
    printf("1~100的累加和为：%ld\n",fun(i));
    wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int i;
  int iIN;
  long int iOUT;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  for(i=0;i<5;i++)
  {        
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%ld\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}