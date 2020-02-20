/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

  题目：公式e=1+1/1!+1/2!+1/3!+......,求 e 的近似值，精度为10的-6次方。
  
-------------------------------------------------------*/
#include <stdio.h>
void wwjt();

//函数功能：计算e,精度为f;
double fun(double f)
{

        double e = 1;
        double jc = 1; //求阶乘，并存入jc中
        /**********Program**********/
        /*请在此处些代码，不要超过End行；代码功能是将计算结果放在e中*/
        double i = 1;
        double n = 1;
        while (i > f)
        {

                jc = jc * n;
                n++;
                i = 1 / jc;
                e += i;
        }

        /**********  End  **********/
        return e;
}

void main()
{

        printf("e=%f\n", fun(10e-6));

        wwjt();
}

void wwjt()
{
        FILE *IN, *OUT;
        int i;
        float n;
        IN = fopen("in.dat", "r");
        if (IN == NULL)
        {
                printf("Please Verify The Current Dir..It May Be Changed");
        }
        OUT = fopen("out.dat", "w");
        if (OUT == NULL)
        {
                printf("Please Verify The Current Dir.. It May Be Changed");
        }
        for (i = 0; i < 5; i++)
        {
                fscanf(IN, "%f", &n);
                fprintf(OUT, "%f\n", fun(n));
        }

        fclose(IN);
        fclose(OUT);
}
