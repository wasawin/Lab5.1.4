#include <stdio.h>
int main(void)
{

 int score;
 float grade;
  printf("Input score: ");
  scanf("%d",&score);
  grade=score;
  printf("score %.2f \n",grade);
  grade=score/10.0;
  if ((score >=0)&&(score <=100)){
      switch(score/10)
      {
        
        case 8 :
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
