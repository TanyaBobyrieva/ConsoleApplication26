#include <stdio.h>
#include <locale.h>
int main() {
    // ���������� ������ ��� ��������� ���� �����
    int numbers[2];
    setlocale(LC_ALL, "ukr"); // ������������ ���������� ��� ��������� ����
    // ����� ����������� ��� �������� ���� �����
    for (int i = 0; i < 2; ++i) {
        printf("������ %s �����: ", i == 0 ? "�����" : "�����");
        scanf_s("%d", &numbers[i]);
    }
    // ��������� ����������
    if (numbers[0] > numbers[1]) {  // ��������� �����
        printf("����� �����: %d\n", numbers[0]);
    }
    else {
        printf("������ �����: %d, %d\n", numbers[0], numbers[1]);
    }
    return 0;
}

