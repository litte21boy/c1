#include <stdio.h>

int main()
{
    int qian = 0;
    printf("jingruqianbaoguanlixitong\n");
    while (1)
    {
        printf("1--cunqian\n");
        printf("2--quqian\n");
        printf("3--yue\n");
        printf("4--tuichu\n");

        int code = 0;
        printf("qingshuruxinagxingdegongnengbianhao:\n");
        scanf("%d", &code);
        if (code == 1)
        {
            printf("qingshurunidecunkuanjine:\n");
            int cun;
            scanf("%d", &cun);
            char x;
            qian += cun;
            printf("cunruchenggong,dianjihuichejixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("qingchuruqukuanjinge:\n");
            int qu;
            scanf("%d", &qu);
            if (qu > qian)
            {
               printf("xuebuzu,qukuanshibai,dianjihuichejixu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                qian-=qu;
                printf("quchuchenggong,dianjihuichejixu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }

            qian -= qu;
        }
        if (code == 3)
        {
            printf("dangqianyueewei:\n");
            printf("%d\n", qian);
        }
        if (code == 4)
        {
        }
    }

    return 0;
}