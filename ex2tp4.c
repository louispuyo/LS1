#include <stdio.h>
#include <math.h>

typedef struct {
    char name;
    int x;
    int y;


} Point;


float distance(Point p1, Point p2){
  float delta;
  delta = sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2));
  return delta;

}


void main ()
{
  Point pnt, pnt2;
  printf("entrer un Point Sous la Forme  <nomDuPoint> <x> <y> : ");
  scanf("%c%d%d", &pnt.name, &pnt.x, &pnt.y);
  printf("entrer un Point avec un nom different de %c Sous la Forme  <nomDuPoint> <x> <y> : ", pnt.name);
  scanf("%c%d%d", &pnt2.name, &pnt2.x, &pnt2.y);
  // printf("%c : (%d, %d)", pnt.name, pnt.x, pnt.y);
  printf("distance entre point %c et point %c est : %f ",pnt.name, pnt2.name, distance(pnt, pnt2));




}