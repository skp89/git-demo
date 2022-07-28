#include stdio.h
int main()
{
    int num1, sum, diff, multi;
    float num2,div;
    printf(enter the first number    );
    scanf(%d, &num1);

    printf(enter the second number   );
    scanf(%f, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    multi = num1  num2;
    div =num1 num2;

    printf(the sum of both number is  %dn, sum);
    printf(the difference of both number is  %dn, diff);
    printf(the product of both number is  %dn, multi);
    printf(the division of both number is  %fn, div);
    return 0;
}

