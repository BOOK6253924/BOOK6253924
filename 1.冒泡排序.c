//冒泡排序 Bubble Sort    
/*对于一组要排序的元素列，依次比较相邻的两个数，
将比较小的数放在前面，比较大的数放在后面，如此继续，
直到比较到最后的两个数，将小数放在前面，大数放在后面，重复步骤，直至全部排序完成。*/
#include <stdio.h>
#define N 100
int main()
{
    int a,b,c,n,array[N];
    printf("请输入需要排序的整数个数：\n");
    scanf("%d",&n);
    printf("请输入需要排序的数字：\n");
    for(a=0;a<n;a++)
        scanf("%d",&array[a]);
    for(a=1;a<n;a++)
        for(b=0;b<n-a;b++)
        if(array[b]>array[b+1])//将比较小的数放在前面，比较大的数放在后面
        {
            c=array[b];
            array[b]=array[b+1];
            array[b+1]=c;
        }
        printf("按从小到大排序：\n");
        for(a=0;a<n;a++)
            printf("%d\t",array[a]);
        printf("\n");
        return 0;
    }
