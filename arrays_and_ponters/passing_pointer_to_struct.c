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
    struct car lexus = {"lexux sport", .speed=200};
    set_price(&mercedence, 8000000.00);
    set_price(&honda, 3000000.00);
    set_price(&lexus, 150000000.00);
    printf("\nThe car name is %s\nThe car price is %.2f\nThe car speed is %d\n\n", honda.name, honda.price, honda.speed);
    printf("The car name is %s\nThe car price is %.2f\nThe car speed is %d\n\n", lexus.name, lexus.price, lexus.speed);
    printf("The car name is %s\nThe car price is %.2f\nThe car speed is %d\n\n", mercedence.name, mercedence.price, mercedence.speed);
}