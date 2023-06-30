#include <stdio.h>    
int main()    
{    
int a[10],n,i,smallest; 
printf("Enter the size of array:"); 
scanf("%d",&n); 
printf("Enter the array elements:");    
for (i=0;i<n;++i) 
{      
scanf("%d",&a[i]);    
} 
smallest=a[0];         
for (i=1;i<n;++i) 
{ 
if(smallest>a[i]) 
smallest=a[i]; 
}
printf("Smallest element is %d",smallest);         
return 0;    
}    
