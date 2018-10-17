#include <stdio.h>

int main(int argc,char *argv[])
{
    if(argc<2){
     printf("Provide input");
     return 0;
    }
    else
    {
        int i,num,result=1;
        num=atoi(argv[1]);
        for(i=2;i<=num;i++)
          result=result*i;
        
         printf("%d",result);
    }

    return 0;
}
