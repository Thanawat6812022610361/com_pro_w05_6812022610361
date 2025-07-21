#include <stdio.h>

int main(){
    char name = 'T'; //ป้อนตัวแปรตัวอักษร
    int age = 18; //ป้อนจำนวนเต็ม
    float weight = 73.55; //ป้อนน้ำหนักเป็น float เพราะเป็นทศนิยม

    printf("Student %c is %d years old\n",name ,age); //ปริ้นตามที่เรากำหนดไว้ด้านบน
    printf("His weight is %.1f kg.",weight);
    return 0;
}