/*#include <stdio.h>

int main(void)
{
	int data = 0x0A0B0C0D;
	char* pc;
	pc = (char*)&data;

	for (int i = 0; i < 4; i++) {
		printf("*(pc+%d) = %02X  \n", i, *(pc + i)); //char형으로 바꾸면 int에 있던게 쪼개져서 들어간다.
	}
	return 0;
}
*/