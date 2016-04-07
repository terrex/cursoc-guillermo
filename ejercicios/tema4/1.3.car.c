#include <stdio.h>

struct person {
	char name[256];
	char surname[256];
	unsigned char age;
	unsigned int phone;
};

enum person_attr {
	NAME,
	SURNAME,
	AGE,
	PHONE
};

struct car {
	char manufacturer[100];
	char model[100];
	char color[30];
	char plate[10];
	struct person *owner;
};

void print_person(const struct person *p);
void print_attr(const struct person *p, enum person_attr attr);
void print_car(const struct car *c);

void print_person(const struct person *p)
{
	printf("PERSONA(%s %s, %d años, teléfono %d)\n",
		p->name, p->surname, p->age, p->phone);
}

void print_car(const struct car *c)
{
	printf("COCHE %s: %s (%s), color %s, propiedad de:\n    ",
		c->plate, c->model, c->manufacturer, c->color);
	print_person(c->owner);
}

void print_attr(const struct person *p, enum person_attr attr)
{
	switch (attr) {
	case NAME:
		printf("%s", p->name);
		break;
	case SURNAME:
		printf("%s", p->surname);
		break;
	case AGE:
		printf("%d", p->age);
		break;
	case PHONE:
		printf("%d", p->phone);
		break;
	default:
		printf("Error: %s:%d", __FILE__, __LINE__);
	}
}


int main(void)
{
	struct person persona = {"Juan", "Tanamera", 23, 956123123};

	struct car coche = {"Peugeot", "206CC", "Azul", "3321DXR", &persona};

	print_car(&coche);

	return 0;
}
