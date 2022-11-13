#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
  int mainpower;
  int turf;
  int dirt;  
}Activehorse;

void activehorse_init(Activehorse *a, int m, int t, int d){
    a->mainpower = m;
    a->turf = t;
    a->dirt = d;
}

void activehorse_add(Activehorse *a, int m, int t, int d){
    a->mainpower += m;
    a->turf += t;
    a->dirt += d;
}

void activehorse_print(Activehorse a){
    printf("mainpower:%d\n",a.mainpower);
    printf("turf:%d\n",a.turf);
    printf("dirt:%d\n",a.dirt);
    return;
}