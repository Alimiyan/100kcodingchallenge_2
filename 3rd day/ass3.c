#include <stdio.h>

int main(void) {
  int day;
  printf("1 for monday \n2 for tuesday \n3 for wednesday \n4 for thursday \n5 for friday \n6 for saturday \n7 for sunday\n");
  scanf("%d",&day);
  switch(day){
    case 1:{
      printf("monday\n");
      break;
    }
     case 2:{
      printf("tuesday\n");
      break;
    }
     case 3:{
      printf("wednesday\n");
      break;
    }
     case 4:{
      printf("thursday\n");
      break;
    }
     case 5:{
      printf("friday\n");
      break;
    }
     case 6:{
      printf("saturday\n");
      break;
    }
     case 7:{
      printf("sunday\n");
      break;
    }
    default:{
      printf("invalid input");
    }
  }
  return 0;
}