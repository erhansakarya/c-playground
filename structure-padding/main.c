#include <stdio.h>
#include <string.h>

struct structure1 {
    int id1;
    int id2;
    char name;
    char c;
    float percentage;
};

struct structure2 {
    int id1;
    char name;
    int id2;
    char c;
    float percentage;
};

#pragma pack(1)
struct structure3 {
    int id1;
    int id2;
    char name;
    char c;
    float percentage;
};
#pragma pack(4)

#pragma pack(1)
struct structure4 {
    int id1;
    char name;
    int id2;
    char c;
    float percentage;
};
#pragma pack(4)

int main() {
    struct structure1 s1;
    struct structure3 s3;
    struct structure2 s2;
    struct structure4 s4;

    printf("size of structure1 in bytes : %d\n", sizeof(s1));
    printf ( "\n   Address of id1        = %u", &s1.id1 );
    printf ( "\n   Address of id2        = %u", &s1.id2 );
    printf ( "\n   Address of name       = %u", &s1.name );
    printf ( "\n   Address of c          = %u", &s1.c );
    printf ( "\n   Address of percentage = %u", &s1.percentage);

    printf("\n\nsize of structure3 in bytes : %d\n", sizeof(s3));
    printf ( "\n   Address of id1        = %u", &s3.id1 );
    printf ( "\n   Address of id2        = %u", &s3.id2 );
    printf ( "\n   Address of name       = %u", &s3.name );
    printf ( "\n   Address of c          = %u", &s3.c );
    printf ( "\n   Address of percentage = %u", &s3.percentage);
 
    printf("\n\nsize of structure2 in bytes : %d\n", sizeof(s2));
    printf ( "\n   Address of id1        = %u", &s2.id1 );
    printf ( "\n   Address of name       = %u", &s2.name );
    printf ( "\n   Address of id2        = %u", &s2.id2 );
    printf ( "\n   Address of c          = %u", &s2.c );
    printf ( "\n   Address of percentage = %u", &s2.percentage);

    printf("\n\nsize of structure4 in bytes : %d\n", sizeof(s4));
    printf ( "\n   Address of id1        = %u", &s4.id1 );
    printf ( "\n   Address of name       = %u", &s4.name );
    printf ( "\n   Address of id2        = %u", &s4.id2 );
    printf ( "\n   Address of c          = %u", &s4.c );
    printf ( "\n   Address of percentage = %u", &s4.percentage);
    
    getchar();
    return 0;
} 