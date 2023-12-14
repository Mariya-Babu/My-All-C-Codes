#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter the no of processes , instances ");
    scanf("%d %d",&m ,&n);
   int  need[m][n],max[m][n],all[m][n], avi[n],finish[m];
   printf("enter allocation of proceses");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&all[i][j]);  
        }
        finish[i]=0;
    }

printf("enter max of proceses");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&max[i][j]);  
        }
    }


	printf("Enter Avaliable Resources.");
    for(i=0;i<n;i++)
    {
    scanf("%d",&avi[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			need[i][j]=max[i][j]-all[i][j];
		}
	}
	printf("need of proceses");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         printf("%d ",need[i][j]);  
        }
        printf("\n");
    }
    int c=0,p[m];
    int flag=1;
    while(flag)
    { flag=0;
         for(i=0;i<m;i++)
    {
        int rs=1;
        for(j=0;j<n;j++)
        {
            if(need[i][j]>avi[j])
            {
             rs=0;
            break ;  
            }
        }
        
        
            if(rs==1 &&finish[i]==0)
            {
                for(j=0;j<n;j++)
                {
                  avi[j]=avi[j]+all[i][j];  
                }
                flag=1;
        
                finish[i]=1;
                p[c++]=i;
            }
    }
        
    }
   
    printf("the available resourcce after completion\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",avi[i]);
    }
    printf("the order of allocation of resources\n ");
    for(i=0;i<m;i++)
    {
        printf("p[%d]",p[i]);
    }
     int safeState = 1;
    for (i = 0; i < m; i++) {
        if (finish[i] == 0) {
            safeState = 0;
            break;
        }
    }

    if (safeState) {
        printf("\nThe system is in a safe state.\n");
    } else {
        printf("\nThe system is not in a safe state.\n");
    }
    
	
}


//all=0 1 0 2 0 0 3 0 2 2 1 1 0 0 2
//max=7 5 3 3 2 2 9 0 2 2 2 2 4 3 3
//
//avialbe =3 3 2
//test case
//1 3 4 0 2
