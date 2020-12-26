/*
7
1
4
-2
1
5
6
3
1->1,4->5,-2->1,1->1,5->6,6->0,3->4,
*/
#include<stdio.h>
int main()
{
  int n,i,j=0,k, a[30],b[30],temp;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
   b[j++]=a[i];
  }
 for(i=0;i<j;i++)
 {
   for(k=i+1;k<j;k++)
   {
      if(b[i]>b[k])
       {
       temp=b[i];
       b[i]=b[k];
       b[k]=temp;
       }
   }
 }

for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
  { if (a[i]==b[j])
     {
    printf("%d->%d,",a[i],b[j+1]);
      break;
    }
  }
 }
 printf("\n");
}
