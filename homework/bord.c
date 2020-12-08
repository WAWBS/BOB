//转换车牌建立GB2312到UTF-8的编码表，判断哪个位置是字符是中文，哪个是英文，英文不需要转换 
#include<stdio.h>
#include<string.h>
int main() 
{  char utf[100]={'E4BAAC''E6B4A5''E6B2AA''E6B89D''E89299''E696B0''E8978F''E5AE81''E6A182''E6B8AF''E6BEB3''E9BB91''E59089''E8BEBD''E6998B''E58680''E99D92''E9B281''E8B1AB''E88B8F''E79A96''E6B599''E997BD''E8B5A3''E6B998''E98482''E7B2A4''E790BC''E79498''E99995''E8B4B5''E4BA91''E5B79D''E68C82''E5ADA6''E8ADA6''E4BDBF''E9A286''E5BA94''E680A5'};
  char ch[100]={"京津沪渝蒙新藏宁桂港澳黑吉辽晋冀青鲁豫苏皖浙闽赣湘鄂粤琼甘陕贵云川挂学警使领应急"};				  
  char p[7];
  char *t=&p[i];
 printf("请输入车牌：");
  for(int n=0;n<7;n++){
  	scanf("%c",&p[i]);
  	i++;
}
  printf("%s",*t);
}
