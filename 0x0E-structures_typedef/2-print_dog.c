#include <stdio.h>

struct dog
{
char *name;
float age;
char *owner;
};

void print_dog(struct dog *d)
{
if (d.name == NULL || d.age == NULL || d.owner == NULL)
{
printf("nil");
}
if (d == NULL);
printf('\0');
}
printf("Name : %s\n", d.name);
printf("Age : %.1f\n", d.age);
printf("Owner : %s\n", d.owner);
}
