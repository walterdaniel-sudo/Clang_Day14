#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>

// ---- ���ڿ� �Է� �޴� ��� ----
// scanf()�Լ��� ���� ���ڿ��� �Է¹��� ���� �迭�̸� �տ� &�� �迭�� �ڿ� �ε����� �ۼ����� �ʴ´�.
// ���ڿ��� ������ �׻� ���ڿ��� ���� �˷��ִ� NULL���ڰ� ����.
// ���ڿ��� �迭�� ������ ���� �ݵ�� NULL������ ũ����� �������� �Ѵ�.
// NULL���ڸ� ǥ���� ���� ���� 0, ���� '\0', NULL�� ǥ���� �� �ִ�.
// ���ڿ��� ���� �迭�� �ʱ�ȭ �� ���� ""(ū ����ǥ)�ȿ� ���ڿ��� �ۼ����ָ� �ȴ�.
//				ex) char str[6] = "Hello";
// ���ڿ��� ���� �迭�� NULL���ڷ� �ʱ�ȭ �� ����
// char str[10] = ""; �������� ������ �� �ִ�.

// ---- ���ڿ� ���� �Լ� ----
// ���ڿ� ���� �Լ��� ����� ���� string.h ��������� ��������� �Ѵ�.
// strlen(���ڿ�): �Ѱ��� ���ڿ��� ���̸� ��ȯ���ִ� �Լ�
//				(��ȯ���ִ� ���̴� NULL���ڸ� ������ �����̴�.)
// strcmp(���ڿ�1, ���ڿ�2): �Ѱ��� �� ���� ���ڿ��� ���ϰ� ������ ����, �ٸ��� ���� ��ȯ���ִ� �Լ�
//							(���ڿ��� �ٸ� ���, ���ڿ�1�� �������������� ������ -1, ������ 1�� ��ȯ)
// strcpy(���ڿ��� ������ ����, ������ ���ڿ�): ���ڿ��� ������ ������ ������ ���ڿ��� �������ִ� �Լ�
// strcat(���ڿ��� ���� ����, ���� ���ڿ�): ���ڿ��� ���� ���� �ڿ� �Ѱܹ��� ���ڿ��� ���ٿ��ִ� �Լ�

int main()
{
	/*char str[5];

	printf("�Է�: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%c", &str[i]);
	}

	printf("���: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%c", str[i]);
	}*/

	/*char str[6];

	printf("�Է�: ");
	scanf("%s ", str);

	str[2] = NULL;

	printf("���: %s\n", str);*/

	/*char str[6] = "Hello";

	printf("���: %s\n", str);*/

	/*char str[10] = "";

	printf("�Է�: ");
	scanf("%s", str);

	str[5] = 'a';

	printf("���: %s\n", str);*/

	// �� Ǯ��
	/*char str[5];

	printf("�Է�: ");
	scanf("%s %s %s %s %s", str[0], str[1], str[2], str[3], str[4]);

	printf("�̸�: %c\n", str[0]);
	printf("����: %c\n", str[1]);
	printf("�ּ�: %c", str[2]);
	printf("Ű: %c", str[3]);
	printf("������: %c", str[4]);*/

	// ������ Ǯ��
	/*char name[20], addr[100];
	int age;
	double height, weight;

	printf("�̸� �Է�: ");
	scanf("%s", name);

	printf("���� �Է�: ");
	scanf("%d", &age);

	printf("�ּ� �Է�: ");
	scanf("%s", addr);

	printf("Ű �Է�: ");
	scanf("%lf", &height);

	printf("������ �Է�: ");
	scanf("%lf", &weight);

	printf("���\n");
	printf("--------------------\n");
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("�ּ�: %s\n", addr);
	printf("Ű: %.1fcm\t������: %.2fkg\n", height, weight);*/

	char str[10];

	printf("�Է�: ");
	scanf("%s", str);

	printf("����: %d\n", strlen(str));

	/*char str1[10], str2[10];

	printf("���ڿ�1 �Է�: ");
	scanf("%s", str1);

	printf("���ڿ�2 �Է�: ");
	scanf("%s", str2);

	if (str1 == str2)
	{
		printf("�� ���ڿ��� �����ϴ�.\n");
	}
	else
	{
		printf("�� ���ڿ��� �ٸ��ϴ�.\n");
	}

	printf("���: %d\n", strcmp(str1, str2));*/

	/*char str1[10], str2[10];

	printf("�Է�: ");
	scanf("%s", str1);

	// str2 = str1;
	strcpy(str2, str1);

	printf("���: %s\n", str2);*/

	return 0;
}