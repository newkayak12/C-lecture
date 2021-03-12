#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /*int x;

    printf("x의 값을 입력하세요:");

    scanf_s("%d", &x);*/
   
    //java scanner같은 느낌

        //printf("%d\n", x > 0 && x < 10);

    //print 느낌이고 'ln'은 리터럴 \n으로 처리
    // 계산 값이 숫자니까 이걸 문자로 바꿔주는 %d로 출력하는 
    // 글자 사이에 %d 같이 넣으면 그 순서대로 문자로 바꿔주는 거임

    /*if ((x >= 0) && (x <= 10)) {
        printf("x:%d는 0과 10 사이에 있습니다.", x);
    }
    else {
        printf("x:%d는 0과 10 사이에 없습니다.", x);*/
    /*}*/
    //if 문은 자바랑 똑같네



        srand(time
        
        
        
        
        
        
        
        
        
        (NULL)); // 난수의 시드값

        int y;
        int matchValue = 0;

        int leftValue = 0;
        int rightValue = 0;

        y = rand() % 100 + 1; // 난수발생 1 ~ 100 사이의 수 

        while (1) {
            printf("left의 값을 입력하세요:(Quit: 0)");
            scanf_s("%d", &leftValue);
            printf("\n");

            if (leftValue == 0) break;

            printf("right의 값을 입력하세요:");
            scanf_s("%d", &rightValue);
            printf("\n");

            if ((y >= leftValue) && (y <= rightValue)) {
                printf("y값이 %d 와 %d 사이에 있습니다.\n", leftValue, rightValue);
                printf("y값을 입력하세요: ");
                scanf_s("%d", &matchValue);
                printf("\n");

                if (y == matchValue) {
                    printf("y:%d 값을 맞추셨습니다.\n", matchValue);
                    break;
                }
                else {
                    printf("틀리셨습니다.\n");
                }

            }
            else {
                printf("y값이 %d 와 %d 사이에 없습니다.\n", leftValue, rightValue);
            }
        }


        return 0;
       
    }
    