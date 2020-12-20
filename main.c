#include <stdio.h>
int sumToNR(int n);
int sumToNa(int i,int n);
int main(void) {
int sum;
sum = sumToNR(5);
printf("%d\n",sum);
sum = sumToNa(1,7);
printf("%d\n",sum);
return 0;
}
int sumToNR(int n){
int sum;
if (n>1){
  sum = n + sumToNR(n-1);
}
else
return 1;
return sum;
}
int sumToNa(int i,int n){
  int sumr = 0;
  for(int i=1;i<=n;i++)
  sumr = sumr+i;
  return sumr;
}