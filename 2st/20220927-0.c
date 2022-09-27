#include <stdio.h>
/*
int main(){
    int i;

    for (i = 1; i <= 100; i++)
    {
        printf("%d ", i);
        if (i % 10 == 0)
        {
            break;
        }        
    }
    // getchar();
}
*/

int main() {
    int i, j;
    for(j = 1; j <= 3; j++){
        for (i=1;i<=100;i++){
            printf("%d ", i);
            if (i % 30 == 0){
                goto label1;
            }
            printf("\n");
        }
    }
    label1:
        printf("\n");
        return 0;

}