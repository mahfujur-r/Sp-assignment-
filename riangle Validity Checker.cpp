#include<stdio.h>
int main()
{
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z);
    if((x+y>z) && (x+z>y) && (y+z>x))
    {
        printf("Valid");
    }
    else {
        printf("InValid");
    }
    return 0;
}
