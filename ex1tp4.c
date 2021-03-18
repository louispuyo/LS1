#include <stdio.h>


typedef struct {
    char name;
    int x;
    int y;


} Point;


void main ()
{
  Point *ppnt, pnt;
  printf("entrer un Point Sous la Forme  <nomDuPoint> <x> <y> : ");
  scanf("%c%d%d", &pnt.name, &pnt.x, &pnt.y);
  printf("%c : (%d, %d)", pnt.name, pnt.x, pnt.y);




}