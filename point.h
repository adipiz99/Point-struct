typedef struct point *Point;  /*generazione del tipo Point in modo da favorire l'information hideing*/

Point createPoint (float x, float y);
float ascissa (Point p);
float ordinata (Point p);
float distanza (Point p1, Point p2);
