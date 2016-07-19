#include <stdio.h>       

void swap(int *a, int *b); 

int main(void) 
{                 
  int x=3,y=5;           
  printf("x=%d   y=%d  \n",x,y);   
  swap(&x,&y);       						/* x와 y의 값이 아니라 x와 y의 번지를 넘겨줌에 주의 */
  printf("main: x=%d   y=%d  \n",x,y);
  return 0;
}

void swap(int *a, int *b)    				/* 매개변수로 포인터 변수를 사용했음에 주의 */
{
  int imsi;              
  imsi=*a;     								/* imsi에 변수 a에 저장된 번지의 내용 저장합니다. */
  *a=*b;      								/* a에 저장된 번지의 내용물로 b의 번지에 저장된 내용을 대입 */
  *b=imsi;    								/* imsi에 저장해둔 값을 b에 저장된 번지의 내용물로 대입 */
  printf("swap: imsi=%d\n",imsi);			/* 넘겨받은 번지가 출력됩니다 */
}         
