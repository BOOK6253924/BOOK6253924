//任意输入a、b、c三个实数，将a、b、c三个数看作是三条线段,判断该条线段能否构成三角形
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("请输入三个大于0的实数:(以空格分开)\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (b+c)>c)
    ////判断三条线能否构成三角形的必要条件：任意两边之和都大于第三边
        printf("能够成三角形\n");
    else
        printf("不能构成三角形\n");
    return 0;
}
