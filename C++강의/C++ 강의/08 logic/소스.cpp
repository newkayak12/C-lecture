#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /*int x;

    printf("x�� ���� �Է��ϼ���:");

    scanf_s("%d", &x);*/
   
    //java scanner���� ����

        //printf("%d\n", x > 0 && x < 10);

    //print �����̰� 'ln'�� ���ͷ� \n���� ó��
    // ��� ���� ���ڴϱ� �̰� ���ڷ� �ٲ��ִ� %d�� ����ϴ� 
    // ���� ���̿� %d ���� ������ �� ������� ���ڷ� �ٲ��ִ� ����

    /*if ((x >= 0) && (x <= 10)) {
        printf("x:%d�� 0�� 10 ���̿� �ֽ��ϴ�.", x);
    }
    else {
        printf("x:%d�� 0�� 10 ���̿� �����ϴ�.", x);*/
    /*}*/
    //if ���� �ڹٶ� �Ȱ���



        srand(time
        
        
        
        
        
        
        
        
        
        (NULL)); // ������ �õ尪

        int y;
        int matchValue = 0;

        int leftValue = 0;
        int rightValue = 0;

        y = rand() % 100 + 1; // �����߻� 1 ~ 100 ������ �� 

        while (1) {
            printf("left�� ���� �Է��ϼ���:(Quit: 0)");
            scanf_s("%d", &leftValue);
            printf("\n");

            if (leftValue == 0) break;

            printf("right�� ���� �Է��ϼ���:");
            scanf_s("%d", &rightValue);
            printf("\n");

            if ((y >= leftValue) && (y <= rightValue)) {
                printf("y���� %d �� %d ���̿� �ֽ��ϴ�.\n", leftValue, rightValue);
                printf("y���� �Է��ϼ���: ");
                scanf_s("%d", &matchValue);
                printf("\n");

                if (y == matchValue) {
                    printf("y:%d ���� ���߼̽��ϴ�.\n", matchValue);
                    break;
                }
                else {
                    printf("Ʋ���̽��ϴ�.\n");
                }

            }
            else {
                printf("y���� %d �� %d ���̿� �����ϴ�.\n", leftValue, rightValue);
            }
        }


        return 0;
       
    }
    