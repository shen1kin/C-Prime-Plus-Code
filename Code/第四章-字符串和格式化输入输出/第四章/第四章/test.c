#define _CRT_SECURE_NO_WARNINGS 1


/*width.c--字段宽度*/
#include <stdio.h>

#define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
    return 0;
}


///*pizza.c--在比萨饼程序中使用已定义的常量*/
//#include <stdio.h>
//#define PI 3.14159
//int main(void)
//{
//    float area, circum, radius;
//
//    printf("what is the radius of your pizza?\n");
//    scanf("%f", &radius);
//
//    area = PI * radius * radius;
//    circum = 2.0 * PI * radius;
//
//    printf("Your basic pizza parameters are as follows:\n");
//    printf("circumference = %1.2f, area = %1.2f\n", circum, area);
//
//    return 0;
//}


///* praisel.c -- 使用不同类型的字符串 */
//#include <stdio.h>
//#include <string.h>
//
//#define PRAISE "You are an extraordinary being."
//#define MAX_LEN 100
//
//#define A 123);
//int main(void)
//{
//        printf("%d", A
//
//    //char arr[] = "123";
//    //int length_sizeof = sizeof(arr) / sizeof(char);
//    //int length_strlen = strlen(arr);
//    //printf("length_sizeof: %d\n", length_sizeof);
//    //printf("length_strlen: %d\n", length_strlen);
//
//
//
//    //char name[40];
//    //char buffer[MAX_LEN];
//
//    //printf("What's your name? ");
//    //scanf("%s", name);
//    //printf("Hello, %s. %s\n", name, PRAISE);
//
//    //// 清除输入缓冲区中的剩余字符
//    //while (getchar() != '\n');
//
//    //printf("Enter some text: ");
//    //fgets(buffer, MAX_LEN, stdin);
//    //printf("You entered: %s", buffer);
//
//
//    //int arr[2] = { 1,2 };
//    //int* p = arr;
//    //int* p2 = p + 2;
//    //*p2 = 11;
//
//    //printf("%d", arr[2]);
//
//    return 0;
//}
