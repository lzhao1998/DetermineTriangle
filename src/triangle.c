#include "triangle.h"


/**
 *  Classify the length into 1 long side and 2 short sides
 *  If the given lengths can form a triangle, a non-zero value
 *  is returned. Otherwie zero is return.
 **/

void classifyLengths(int a, int b, int c, int *max, int *short1, int *short2)
{
  if(a > b && a > c)
  {
    *max = a;
    *short1 = b;
    *short2 = c;
  }
  else if(b > a&& b > c)
  {
    *max = b;
    *short1 = a;
    *short2 = c;
  }
  else if(c > a&& c > b)
  {
    *max = c;
    *short1 = a;
    *short2 = b;
  }
}

char *determineValidOrNot(int a,int b,int c)
{
    int max, short1, short2;
    classifyLengths(a, b, c, &max, &short1, &short2);
    if(short1 + short2 > max)
  {
    return "Valid";
    printf("This is valid");
  }
  else
  {
    return "Invalid";
    printf("This is invalid");
  }
}

char *getTriangleType(int a,int b,int c)
{
  int max, short1, short2, maxlen, shortlen1, shortlen2;
  classifyLengths(a, b, c, &max, &short1, &short2);
  maxlen = max * max;
  shortlen1 = short1 * short1;
  shortlen2 = short2 * short2;
  if(shortlen1 + shortlen2 == maxlen)
  {
    return "Right_Angle";
    printf("This is right angle");
  }
  else if(shortlen1 + shortlen2 > maxlen)
  {
    return "Obtuse";
    printf("This is obtuse");
  }
  else if(shortlen1 + shortlen2 < maxlen)
  {
    return "Accute";
    printf("This is accute");
  }
  else
  return "Invalid";
  
}
