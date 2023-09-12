#include <stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};
int main(void)
{
    struct car mercedence;
    mercedence.name = "benz";
    mercedence.price = 40999.99;
    mercedence.speed = 180;

    struct car honda;
    honda.name = "Honda Civic";
    honda.price = 2345.22;
    honda.speed = 170;

    printf("The car name is %s\nThe car price is %f\nThe car speed is %d\n", mercedence.name, mercedence.price, mercedence.speed);
    printf("The car name is %s\nThe car price is %f\nThe car speed is %d\n", honda.name, honda.price, honda.speed);
}
