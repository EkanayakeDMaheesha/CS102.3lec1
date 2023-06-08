#include <stdio.h>
int main()
{
    int no,counter=1,sum=0;
    float avg;
    while(counter<=10)
    {
      printf("enter %d number",counter);
     scanf("%d",&no);
     sum=sum+no;
     counter++;
    }
avg=(float)sum/10.0;
printf("the average is%.2f\n",avg);

}
