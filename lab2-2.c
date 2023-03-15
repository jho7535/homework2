#include <stdio.h>
int main()
{
    printf("[----- [Jeong Hanul] [2020039076] -----]\n\n");
    int i; //i라는 int형 변수 선언
    int *ptr; //ptr이라는 int형 포인터 변수 선언
    int **dptr; //dptr이라는 int형 이중 포인터 변수 선언
    i = 1234; //변수 i에 1234를 저장

    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i); //변수 i의 값 출력
    printf("address of i == %p\n", &i); //변수 i의 값이 저장된 주소 출력
    printf("value of ptr == %p\n", ptr); //포인터 변수 ptr의 값 출력. 초기화되지 않았으므로 NULL값 출력
    printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 값이 저장된 주소 출력

    ptr = &i; /* ptr is now holding the address of i */ //포인터 변수 ptr에 변수 i의 주소를 저장
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); //변수 i의 값 출력
    printf("address of i == %p\n", &i); //변수 i의 값이 저장된 주소 출력
    printf("value of ptr == %p\n", ptr); //포인터 변수 ptr의 값 출력. 변수 i의 주소를 저장 했으므로 i의 주소 출력
    printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 값이 저장된 주소 출력
    printf("value of *ptr == %d\n", *ptr); //포인터 변수 ptr이 가리키는 주소에 저장된 값 출력. 변수 i의 주소를 저장 했으므로 i의 값 출력

    dptr = &ptr; /* dptr is now holding the address of ptr */ //이중 포인터 변수 dptr에 포인터 변수 ptr의 주소를 저장
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); //변수 i의 값 출력
    printf("address of i == %p\n", &i); //변수 i의 값이 저장된 주소 출력
    printf("value of ptr == %p\n", ptr); //포인터 변수 ptr의 값 출력. 변수 i의 주소를 저장 했으므로 i의 주소 출력
    printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 값이 저장된 주소 출력
    printf("value of *ptr == %d\n", *ptr); //포인터 변수 ptr이 가리키는 주소에 저장된 값 출력. 변수 i의 주소를 저장 했으므로 i의 값 출력
    printf("value of dptr == %p\n", dptr); //이중 포인터 변수 dptr의 값 출력. 포인터 변수 ptr의 주소를 저장 했으므로 ptr의 주소 출력
    printf("address of dptr == %p\n", &dptr); //이중 포인터 변수 dptr의 값이 저장된 주소 출력
    printf("value of *dptr == %p\n", *dptr); //이중 포인터 변수 dptr이 가리키는 주소에 저장된 값 출력. 포인터 변수 ptr의 주소를 저장 했으므로 ptr의 값 출력
    printf("value of **dptr == %d\n", **dptr);
    //이중 포인터 변수 dptr이 가리키는 주소에 저장된 주소에 저장된 값을 출력.
    //포인터 변수 ptr의 주소를 저장 했으므로 포인터 변수 ptr이 가리키는 주소에 저장된 값 출력.
    //변수 i의 주소를 저장 했으므로 i의 값 출력

    *ptr = 7777; /* changing the value of *ptr */ //포인터 변수 ptr이 가리키는 주소에 7777을 저장
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); //
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);

    **dptr = 8888; /* changing the value of **dptr */
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); //변수 i의 값 출력
    printf("value of *ptr == %d\n", *ptr); //포인터 변수 ptr이 가리키는 주소에 저장된 값 출력. 변수 i의 주소를 저장 했으므로 i의 값 출력
    printf("value of **dptr == %d\n", **dptr);
    //이중 포인터 변수 dptr이 가리키는 주소에 저장된 주소에 저장된 값을 출력.
    //포인터 변수 ptr의 주소를 저장 했으므로 포인터 변수 ptr이 가리키는 주소에 저장된 값 출력.
    //변수 i의 주소를 저장 했으므로 i의 값 출력

    return 0;
}