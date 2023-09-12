#include <stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};

void set_price(struct car *c, float new_price)
{
    c->price = new_price;
}

int main(void)
{
    struct car mercedence = {.speed=180, .name="4matic"};
    struct car honda = {"Honda civic", 1234.56, 170};
    set_price(&mercedence, 6666.6666);
    set_price(&honda, 44444.44);
    printf("The car name is %s\nThe car price is %f\nThe car speed is %d\n", honda.name, honda.price, honda.speed);
    printf("The car name is %s\nThe car price is %f\nThe car speed is %d\n\n", mercedence.name, mercedence.price, mercedence.speed);
}