#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
    //student��� ����ü�� ũ��� �� 13+4+2 = 19bytes
};

int main()
{
    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));
    printf("size of short = %ld\n", sizeof(short));
    //������ϸ� student�� ����ü ����� 24bytes�� �����µ� �������� �е��� �ϱ� �����Դϴ�.
    //lastName�� 13bytes �ε� 4bytes�� �����ϸ� 12bytes�ε� 13bytes �� 1bytes�� ���� 3bytes�� �е����ϸ� 4bytes
    //�� 16bytes�̰�, studentId�� 4bytes, grade�� 2bytes ���� 2bytes�� �е��ϸ� 4bytes
    //�� 16+4+4 = 24bytes�ؼ� lastName�� ��°��� 24bytes�� ���ɴϴ�.
    printf("���¾�\n");
    printf("2017038096\n");
    
    return 0; 
}