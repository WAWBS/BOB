#include <stdio.h>
#include <string.h>

char name[111][111], id[111][111], temp[111];
int n, i, score[111];

int calc(char s[]) {
     int l = strlen(s);
     int res = 0, i;

     if (s[0] == 'n') return -1;

     for (i = 0; i < l; i++)
          res = res * 10 + s[i] - '0';

     return res; }

int main(void) {
     scanf("%d", &n);
     for (i = 1; i <= n; i++) {
          scanf("%s%s%s", name[i], id[i], temp);
          score[i] = calc(temp); }

     int maxn = 0, hight = 1, minn = 0x3f3f3f3f, lowt = 1;

     for (i = 1; i <= n; i++) {
          if (score[i] == -1) continue;

          if (score[i] > maxn || (score[i] == maxn && strcmp(name[i], name[hight]) < 0)) {
               hight = i;
               maxn = score[i]; }

          if (score[i] < minn || (score[i] == minn && strcmp(name[i], name[lowt]) > 0)) {
               lowt = i;
               minn = score[i]; } }

     printf("%s %s\n", name[hight], id[hight]);
     printf("%s %s\n", name[lowt], id[lowt]);

     return 0; }
