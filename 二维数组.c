
#include<stdio.h>
 
int main()
 
{
 
 char a[10][10],b[100][10];//a表示学科名称，b表示每个人的名字
 
 int c[100][10],d[10]={0},n,m,i,j;//c表示每个人每科成绩，d表示每科总分，n表示人数，m表示学科数
 
 float e[10];//e表示每人平均分
 
 scanf("%d%d",&n,&m);//输入人数，学科数
 
 for(i=0;i<m;i++)
 
  scanf("%s",a[i]);//输入学科名称
 
 for(i=0;i<n;i++)
 
 {
 
  scanf("%s",b[i]);//输入学生名字
 
  for(j=0;j<m;j++)
 
  {
 
   scanf("%d",&c[i][j]);//输入成绩
 
   d[j]=d[j]+c[i][j];//计算每科总分
 
  }
 
 }
 
 printf("每科平均分:\n");
 
 for(i=0;i<m;i++)
 
 {
 
  e[i]=d[i]*1.0/m;//计算每科平均分
 
  printf("%s:%.2f\n",a[i],e[i]);//输出每科平均分，保留到小数点后两位
 
 }
 
 return 0;
 
}
