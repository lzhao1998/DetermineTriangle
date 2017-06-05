#ifndef _TRIANGLE_H
#define _TRIANGLE_H



/*typedef struct Triangle Triangle;

struct Triangle
{
  int shortSide1;
  int shortSide2;
  int longSide;
}
*/

void classifyLengths(int a, int b, int c, int *max, int *short1, int *short2);
char *getTriangleType(int a,int b,int c);
char *determineValidOrNot(int a,int b,int c);


#endif // _TRIANGLE_H
