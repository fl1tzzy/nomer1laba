#include <stdio.h>
#include <windows.h>
#include <math.h> // ���������� ���. �������

// ���������� ���������� ��������������
void rectangle(int a, int b) {

    if (a <= 0 || b <= 0) {
        printf("����� ������ �� ����� ���� ��������������.\n");
        return; // ����������� ������ �������
    }
    //����� ���
    //if (a == b) {
      //  printf("����� �� ����� ���� �����������.\n");
     //   return; // ����������� ������ �������
   // }

    printf("�������� �������������� �����: %d\n", 2 * (a + b));
    printf("������� �������������� �����: %d\n", a * b);
    printf("����� ��������� �����: %f\n", sqrt(a * a + b * b));
}

// ������������ ������� rectangle
void testing() {

    printf("���� 1: \n");
    rectangle(10, 5);

    printf("\n���� 2: \n");
    rectangle(1, 1);

    printf("\n���� 3: \n");
    rectangle(14, 88);

    printf("\n���� 4: \n");
    rectangle(-20, 7);

    printf("\n���� 5: \n");
    rectangle(143, 514);


}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ����� ������� ������������
    testing();

}