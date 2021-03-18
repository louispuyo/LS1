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
  if ((distance(p, p2) == 0. | distance(p, p3) == 0. | distance(p2, p3) == 0.)){
    return 0;
  }
  else{
    return 1;
  }
}

void typeDeTriangle(Point p1, Point p2, Point p3) {
    if (distance(p1, p2) == distance(p1, p3))
    {
        if (distance(p2, p3) == distance(p1, p2)){
            printf("le triangle est equilaterale !");
        }
        else{
            printf("le triangle est isocele !");
        }

    }
    else{
        printf("le triangle est quelconque !");
    }
}

void FormeGeo(Point tabPoint [4]){
  int acc = 0;
    for (int i = 0; i<4; i++){
      if (free(&tabPoint[i]) == 0){
        acc += 1;
        
      }

    }
    if (acc == 1){
      printf(" Type -> Point");
    
    }
    else if (acc == 2) {
      printf("Type -> Segment");

    }
    else if (acc == 3){
      if (checkValid(tabPoint[0], tabPoint[1], tabPoint[2])){

      typeDeTriangle(tabPoint[0], tabPoint[1], tabPoint[2]);
      }

    }
    else if (acc == 4){
      printf("Type -> Quadrilatere");
    }
    else{
      printf("void");
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
        scanf("%d", &pnt3.x); // debug 
    Point tabPt [4];
    int nb;
    printf("entrer un nombre entre 1 et 4");
    scanf("%d", &nb);
    for (int i = 0; i<nb; i++){

      // scanfPoint();
    }

    // FormeGeo();
    if (checkValid(pnt, pnt2, pnt3) == 1){
    //   printf("VALID");
    typeDeTriangle(pnt, pnt2, pnt3);

    
    }
    else{
     printf("INVALID");
    }


  // printf("%c : (%d, %d)", pnt.name, pnt.x, pnt.y);
  // printf("distance entre point %c et point %c est : %f ",pnt.name, pnt2.name, distance(pnt, pnt2));




}