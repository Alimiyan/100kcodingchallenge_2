#include <stdio.h>

int main(void) {
  int choice;
  printf("1 for apple\n2 for banana \n3 for cherry \n4 for orange\n");
  scanf("%d",&choice);
  switch(choice){
    case 1:{
      printf("you have selected apple\n");
      break;
    }
    case 2:{
      printf("you have selected banana\n");
      break;
    }
    case 3:{
      printf("you have selected cherry\n");
      break;
    }
    case 4:{
      printf("you have selected orange\n");
      break;
    }
    default:{
      printf("wrong choice");
      break;
    }
  }
  return 0;
}