#include <stdio.h>
 
int jijo(int a)
{
return a * a;
}
int sum(int N){
  int s = 0;
  for(int i = 0;i <= N;i++){
    s + jijo(i);
  }
  return s;
  }

 
  /* 自然数 */
  int main(void){
    printf("１からＮまでの二乗和を求める。\n");
    int n = 0;
    printf("N=");
    scanf("%d", &n);
    printf("1^2+2^2+……+N^2=%d",sum(n));
     return 0;
  }
 
  
