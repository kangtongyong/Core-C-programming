#include <stdio.h>
#include "contact.h"

void testContact(void);

int main(void)
{
	testContact();
	return 0;
}

void testContact(void)
{
	Contact c1 = { "ȫ�浿","01027780298",MAN, 2025 };
	Contact c2 = { "ȫ�浿","01027780298",MAN, 2025 };
	Contact c3 = { "��浿","01027780298",MAN, 2025 };

	printContact(c1);
	printContact(c2);
	printContact(c3);

	return;
}
