#include <stdio.h>
void main()
{
    int choice;
    printf("enter choice:");
    scanf("%d",&choice);

    if (choice == 1)
    {
        // swaping two numbers using xor

        int a, b;
        printf("how to swap two numbers using bitwise xor(^):\n");
        printf("enter two numbers:");
        scanf("%d %d", &a, &b);

        printf("before swap:\na=%d\nb=%d\n", a, b);
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        printf("after swap:\na=%d\nb=%d", a, b);
    }
    else if(choice == 2){
        // left and right shift operation
    
        int a;
        printf("multiplication and division by 2 using << >>\n");
        printf("enter a number for multiplication by 2 :");
        scanf("%d", &a);
        printf("normal multiplication %d using left swift %d", a * 2, a << 1);
        printf("\nenter a number for division by 2 :");
        scanf("%d", &a);
        printf("normal division %d using right swift %d", a / 2, a >> 1);
    }
    else if (choice == 3){

        //check a number is odd or even using bitwise and
        int a;
        printf("enter a number to check it is even or odd:");
        scanf("%d",&a);
        if(a & 1 != 0){
            printf("number is odd");
        }else{
            printf("number is even");
        }
    }
}