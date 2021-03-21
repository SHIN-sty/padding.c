# padding.c
homework#3
#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
    //student라는 구조체의 크기는 총 13+4+2 = 19bytes
};

int main()
{
    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));
    printf("size of short = %ld\n", sizeof(short));
    //출력을하면 student의 구조체 사이즈가 24bytes가 나오는데 그이유는 패딩을 하기 때문입니다.
    //lastName이 13bytes 인데 4bytes씩 들어가게하면 12bytes인데 13bytes 중 1bytes의 남은 3bytes를 패딩을하면 4bytes
    //총 16bytes이고, studentId는 4bytes, grade는 2bytes 남은 2bytes를 패딩하면 4bytes
    //총 16+4+4 = 24bytes해서 lastName의 출력값이 24bytes가 나옵니다.
    printf("신태양\n");
    printf("2017038096\n");
    
    return 0; 
}
