#include <stdio.h>
int main()
{
    printf("[----- [Jeong Hanul] [2020039076] -----]\n\n");
    char charType; //charType이라는 char형 변수 선언
    int integerType; //integerType이라는 int형 변수 선언
    float floatType; //floatType이라는 float형 변수 선언
    double doubleType; //doubleType이라는 double형 변수 선언

    printf("Size of char: %ld byte\n",sizeof(charType)); //변수 charType의 메모리 크기를 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //변수 integerType의 메모리 크기를 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //변수 floatType의 메모리 크기를 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //변수 doubleType의 메모리 크기를 출력

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char)); //char형 변수의 메모리 크기를 출력
    printf("Size of int: %ld bytes\n",sizeof(int)); //int형 변수의 메모리 크기를 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); //float형 변수의 메모리 크기를 출력
    printf("Size of double: %ld bytes\n",sizeof(double)); //double형 변수의 메모리 크기를 출력

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*)); //char형 포인터 변수의 메모리 크기를 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //int형 포인터 변수의 메모리 크기를 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //float형 포인터 변수의 메모리 크기를 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double형 포인터 변수의 메모리 크기를 출력

    return 0;
}