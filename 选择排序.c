//选择排序   2021.3   

/*首先，选出最小的数，放在第一个位置；
然后，选出第二小的数，放在第二个位置；
以此类推，直到所有的数从小到大排序。
在实现上，我们通常是先确定第i小的数所在的位置，然后，将其与第i个数进行交换。*/

#include<stdio.h>//头文件
int main()//主函数
{
  int i,j,min,temp,array[11];//定义整型变量和数组
  printf("请输入数据：\n");//提示语句
  for(i=1;i<=10;i++)//依次键盘录入10个数据
  {
    scanf("%d",&array[i]);
  }
  printf("\n");//换行
  printf("对下列数字排序：\n");//提示语句
  for(i=1;i<=10;i++)//将键盘录入的10个数原样输出
  {
    printf("%5d",array[i]);
  }
  printf("\n");//换行
  for(i=1;i<=9;i++)
  {
    min=i;//把第一个数作为最小的
    for(j=i+1;j<=10;j++)
    {
      if(array[min]>array[j])//判断大小，小的为min
      {
        min=j;
      }
    }
      temp=array[i]; //大小交换
      array[i]=array[min];
      array[min]=temp;
  }
  printf("按从小到大排序：\n");//提示语句
  for(i=1;i<=10;i++)//输出排序后的10个数
  {
    printf("%5d",array[i]);
  }
  printf("\n");//换行
  return 0;//主函数返回值为0
}
