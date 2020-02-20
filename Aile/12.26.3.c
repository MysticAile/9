
#include <stdio.h>
void  wwjt(); 

double sum(int n)
{
  /**********Program**********/
  int i ;
  double s=0,sum=0,t=-1;
  for(i=1;i<=n;i++)
  {
    t=-t;
    s=t/i;
    sum += s;
  }
  return sum;
  
  
  
  
  
  /**********  End  **********/
}

main()
{
  int n;
  scanf("%d",&n);
  printf("sum=%f\n",sum(n));
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int n;
  int i[10];
  double o;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read FILE Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write FILE Error");
  }
  for(n=0;n<5;n++)
    fscanf(IN,"%d",&i[n]);
  for(n=0;n<5;n++)
  {
    o = sum(i[n]);
    fprintf(OUT,"%f\n",o);
  }
  fclose(IN);
  fclose(OUT);
}
