#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <complex.h>


/* escape.c -- 使用转义序列 */
int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary:"); /*1*/
    printf("$______\b\b\b\b\b\b"); /*2*/
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary,
        salary * 12.0); /*3*/
    printf("\rGee!\n"); /*4*/
    return 0;
}

//int main()
//{
//	//float a = 12.0;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(16.0));
//
//	//float toobig = 3.4E38 * 100.0f;
//	//printf("%e\n", toobig);
//		
//        //char c;
//        //printf("输入一个字母\n");
//        //scanf("%c", &c);
//
//        //// printf("%c", c);
//
//        //switch (c)
//        //{
//        //    default:
//        //        printf("不认识\n");
//
//        //    case 'b':
//        //        printf("字母%c: Bravo\n", c);
//        //        exit();
//        //        //break;
//        //    case 'c':
//        //        printf("字母%c: Charlie\n", c);
//        //        break;
//        //    case 'a':
//        //        printf("字母%c: Alpha\n", c);
//        //        //break;
//        //}
//
//
//
//	return 0;
//}