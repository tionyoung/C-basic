 #include <stdio.h>
int search(int* A, int size, int x);

int main(void)
{
	int data[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int index = search(data, 10, 200);

	printf("������ 200������ ����� �ε��� =%d\n", index);

	return 0;
}

int search(int* A, int size, int x)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (A[i] == x)
			return i; //���� ���� ã���� �� ���� ��ȯ
	}
	return -1; //�˻��ߴµ� ���� ���� ������ ��ȯ�� ���� ������ �������� ��µǰ� �Ͽ� ���� ã������ ���� ���ٴ� ���� �˷���.
}
