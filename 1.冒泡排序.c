//ð������ Bubble Sort    ½���
/*����һ��Ҫ�����Ԫ���У����αȽ����ڵ���������
���Ƚ�С��������ǰ�棬�Ƚϴ�������ں��棬��˼�����
ֱ���Ƚϵ���������������С������ǰ�棬�������ں��棬�ظ����裬ֱ��ȫ��������ɡ�*/
#include <stdio.h>
#define N 100
int main()
{
    int a,b,c,n,array[N];
    printf("��������Ҫ���������������\n");
    scanf("%d",&n);
    printf("��������Ҫ��������֣�\n");
    for(a=0;a<n;a++)
        scanf("%d",&array[a]);
    for(a=1;a<n;a++)
        for(b=0;b<n-a;b++)
        if(array[b]>array[b+1])//���Ƚ�С��������ǰ�棬�Ƚϴ�������ں���
        {
            c=array[b];
            array[b]=array[b+1];
            array[b+1]=c;
        }
        printf("����С��������\n");
        for(a=0;a<n;a++)
            printf("%d\t",array[a]);
        printf("\n");
        return 0;
    }
