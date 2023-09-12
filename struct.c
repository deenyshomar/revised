#include <stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};
int main(void)
{
    struct car mercedence = {"4matic", 40999.99, 180};
    struct car honda = {"Honda civic", 1234.56, 170};

    printf("The car name is %s\nThe car price is %f\nThe car speed is %d\n\n", mercedence.name, mercedence.price, mercedence.speed);
    printf("The car name is %s\nThe car price is %f\nThe car speed is %d\n", honda.name, honda.price, honda.speed);
}
