#include <stdio.h>
void space_delete(char* str);

int main() {
    char str[100];

    printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
    gets(str);
    space_delete(str);

    return 0;
}

void space_delete(char* str) {
    int i;
    for (i = 0; str[i] != NULL; i++) {
        if (str[i] == ' ')
            continue;
        printf("%c", str[i]);
    }
    printf("\n");
}