#include<stdio.h>  
main(){  
    int m,n,i,j,a[10][10],temp1[10]={0},temp2[10],temp3[10],temp4[10],b=0;  
    scanf("%d %d",&m,&n);  
    for(j=0;j<n;j++)  
    temp3[j]=32767;  
    for(i=0;i<m;i++)  
    	for(j=0;j<n;j++)  
    	scanf("%d",&a[i][j]);  
    for(i=0;i<m;i++)  
    	for(j=0;j<n;j++)
		{  
 	       if(a[i][j]>temp1[i])
		{ 
        	temp1[i]=a[i][j];  
        	temp2[i]=j;  
        }  
    	} 
    for(j=0;j<n;j++)  
    	for(i=0;i<m;i++)
		{  
        	if(a[i][j]<temp3[j])
			{  
          	  temp3[j]=a[i][j];  
          	  temp4[j]=i;  
        	} 
	    } 
    for(i=0;i<m;i++)  
    	for(j=0;j<n;j++)
		{  
        	if(temp1[i]==temp3[j])
			{  
        		printf("Point:a[%d][%d]==%d\n",temp4[j],temp2[i],temp1[i]);  
        		b=1;  
    		}  
    	}  
    if(b!=1)  
    printf("No Point\n");   
}  
