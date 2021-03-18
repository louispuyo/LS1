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

int checkValid(Point p, Point p2, Point p3){
  if ((distance(p, p2) == 0 | distance(p, p3) == 0 | distance(p2, p3) == 0)){
    return 0;
  }
  else{
    return 1;
  }
}

void main ()
{
  Point pnt, pnt2, pnt3;
  printf("entrer un Point Sous la Forme  <nomDuPoint> <x> <y> : ");
  scanf("%c%d%d", &pnt.name, &pnt.x, &pnt.y);
  printf("entrer un Point avec un nom different de %c Sous la Forme  <nomDuPoint> <x> <y> : ", pnt.name);
  scanf("%c%d%d", &pnt2.name, &pnt2.x, &pnt2.y);
  // printf("%c : (%d, %d)", pnt.name, pnt.x, pnt.y);
printf("entrer un Point avec un nom different de %c %c Sous la Forme  <nomDuPoint> <x> <y> : ", pnt.name, pnt2.name);

  // printf("distance entre point %c et point %c est : %f ",pnt.name, pnt2.name, distance(pnt, pnt2));
    scanf("%c%d%d", &pnt3.name, &pnt3.x, &pnt3.y);
    if (checkValid == 1){
      printf("VALID");
    }
    else{
      printf("INVALID");
    }
  // printf("%c : (%d, %d)", pnt.name, pnt.x, pnt.y);
  // printf("distance entre point %c et point %c est : %f ",pnt.name, pnt2.name, distance(pnt, pnt2));




}