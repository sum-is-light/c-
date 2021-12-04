#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  srand(time(0));
  int ai=rand()%50+1,play;
  scanf("%d",&play);
  while(play!=ai){
    if(play>ai){
      printf("你输入的数字太大了！\n");
    }else{
      printf("你输入的数过大！！！\n");
    }
    scanf("%d",&play);
  }
  return 0;
}
