#include<stdio.h>
int main()
{
   char form[21][31];//显示
   int num[20];//接收数字
   char sign[20];//接收符号
   int n,i,t;
   int up=0,down=0;//表示x轴上方和下方各有多少行
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        scanf("%c",&sign[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]>0&&up<num[i])
        {
            up=num[i];

        }
        else if(num[i]<=0&&down>num[i])
        {
            down=num[i];
        }
    }
    int row=up-down+1;

    for(t=0;t<n;t++)
    {
        if(num[t]>0)
        {
            for(i=0;i<row;i++)
            {
                if(i<up-num[t])
                {
                    form[i][t]=' ';
                }
                else if(i<up&&i>=up-num[t])
                {
                    if(sign[t]==' '||sign[t]=='\n')
                    {
                        form[i][t]='+';
                    }
                    else{
                        form[i][t]=sign[t];
                    }
                }
                else if(i==up)
                {
                    form[i][t]='-';
                }
                else
                {
                    form[i][t]=' ';
                }
            }
        }
        else
        {
            for(i=0;i<row;i++)
            {
                if(i<up)
                {
                    form[i][t]=' ';
                }
                else if(i==up)
                {
                    form[i][t]='-';
                }
                else if(i>up&&i<=up-num[t])
                {
                    if(sign[t]==' '||sign[t]=='\n')
                    {
                        form[i][t]='+';
                    } else{
                        form[i][t]=sign[t];
                    }
                }
                else
                    {
                     form[i][t]=' ';
                }
            }
        }
    }
    for(i=0;i<row;i++)
    {
        if(i==up)
        {
            for(t=0;t<n;t++)
            {
                if(t==n-1)
                {
                    printf("%c",form[i][t]);
                }
                else
                {
                    printf("%c-",form[i][t]);
                }
            }
        }
        else
        {
            for(t=0;t<n;t++)
            {
                printf("%c ",form[i][t]);
            }
        }
        printf("\n");
    }
    return 0;
}
