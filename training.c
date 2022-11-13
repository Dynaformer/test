#include "myutil.h"

int main(void){
    Activehorse horse1;
    activehorse_init(&horse1,100,80,80);

   int choice;
    while(1){
        printf("choose the menu\n0:exit 1:mainpower 2:turf 3:dirt\n>");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                activehorse_add(&horse1,10,-5,-5);
                activehorse_print(horse1);
                break;
            case 2:
                activehorse_add(&horse1,-10,10,0);
                activehorse_print(horse1);
                break;
            case 3:
                activehorse_add(&horse1,-10,0,10);
                activehorse_print(horse1);
                break;

        }
        printf("\n");
        if(choice==0)break;
    }

    return 0;
}

