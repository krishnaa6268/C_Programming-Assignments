//8. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>

int main()
{
    int a;
    char c;
    float f;
    double d;

    printf("Size of int type a= %d\nSize of char type c= %d\nSize of float type f= %d\nSize of double type d= %d ",sizeof(a),sizeof(c), sizeof(f), sizeof(d));

    return 0;
}
