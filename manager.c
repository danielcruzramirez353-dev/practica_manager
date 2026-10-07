#include <stdio.h>

typedef struct{
    char nombre[30];
    int popularidad;
    int energia;
    int energia_max;
    int fans;
}Idol;

int main(){
    Idol jennie = {"jennie", 50, 100, 100, 12000};
    
    Idol *p = &jennie;
    
    printf("%d\n", jennie.fans);
    printf("%d\n", (*p).fans);
    printf("%d", p->fans);
    
    printf("%p\n", (void *)p);
    printf("%p\n", (void *)&jennie);
    
    return 0;
}
