#include <stdio.h>

int main()
{
    int i,j,no_of_person,count=0,flag;
    scanf("%d",&no_of_person);
    float time[no_of_person][2][2];
    for(i=0;i<no_of_person;i++)
     {scanf("%f",&time[i][0][0]);
         scanf("%f",&time[i][0][1]);
         if(!(time[i][0][0]==0))
            {if(!(time[i][0][1]==0))
               time[i][0][0]=time[i][0][0]+(time[i][0][1]/100);
            }
        else
           time[i][0][0]=time[i][0][1]/100;
         scanf("%f",&time[i][1][0]);
         scanf("%f",&time[i][1][1]);
         if(!(time[i][1][0]==0))
            {if(!(time[i][1][1]==0))
               time[i][1][0]=time[i][1][0]+(time[i][1][1]/100);
            }
        else
           time[i][1][0]=time[i][1][1]/100;
     }
     for(i=1;i<no_of_person;i++)
     {
        
         for(j=i-1;j>=0;j--)
         {
          if(!(time[i][0][0]>time[j][1][0]  || time[i][1][0]<time[j][0][0]))
            {
                 count++;
                 break;
            }
          }
          
     }
     printf("%d",count);
    return 0;
}

