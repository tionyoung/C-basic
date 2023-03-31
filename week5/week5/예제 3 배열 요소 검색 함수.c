 #include <stdio.h>
int search(int* A, int size, int x);

int main(void)
{
	int data[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int index = search(data, 10, 200);

	printf("월급이 200만원인 사람의 인덱스 =%d\n", index);

	return 0;
}

int search(int* A, int size, int x)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (A[i] == x)
			return i; //같은 값을 찾으면 그 값을 반환
	}
	return -1; //검사했는데 같은 값이 없으면 반환할 값이 없으니 음수값이 출력되게 하여 내가 찾으려는 값이 없다는 것을 알려줌.
}
