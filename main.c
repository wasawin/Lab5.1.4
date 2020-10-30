#include <stdio.h>
int main(void)
{

 float grade,score;
  printf("Input score: ");
  scanf("%f",&score);
  printf("score %.2f \n",score);
  grade=score/10;
  if ((score >=0)&&(score <=100)){
      switch((int)score/10)
      {
        case 10 : case 9 : case 8 :
        printf("Grade A");
        break;
        case 7 :
        if(grade>=7.5){
          printf("Grade B+");
        }else{
          printf("Grade B");
          }
        break;

        case 6 :
        if(grade>=6.5){
          printf("Grade C+");
        }else{
          printf("Grade C");
          }
        break;

        case 5 :
        if(grade>=5.5){
          printf("Grade D+");
        }else{
          printf("Grade D");
          }
        break;

        default:
        printf("Grade F");
      
      
      }
  } else
  printf("Score over scope");
  return 0;
}
