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
    struct car mercedence = {.price=40999.99, .speed=180, .name="4matic"};
    struct car honda = {"Honda civic", 1234.56, 170};
    set_price(&honda, 2727.65);
    printf("The car name is %s\nThe car price is %f\nThe car speed is %d\n", honda.name, honda.price, honda.speed);
}