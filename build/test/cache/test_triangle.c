#include "build/temp/_test_triangle.c"
#include "triangle.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}













void test_classify_3_4_and_5(void)

{

    int max, short1, short2;

    classifyLengths(3,4,5, &max, &short1, &short2);

    printf("Short1: %d\n", short1);

    printf("Short2: %d\n", short2);

    printf("Long: %d\n", max);

    UnityAssertEqualString((const char*)(("Right_Angle")), (const char*)((getTriangleType(3, 4, 5))), (

   ((void *)0)

   ), (UNITY_UINT)(24));

}
