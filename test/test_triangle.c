#include "unity.h"
#include "triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

/*void test_getTriangleType(void)
{  
}
*/

void test_classify_3_4_and_5(void)
{
    int max, short1, short2;
    classifyLengths(3,4,5,  &max,  &short1,  &short2);
    printf("Short1: %d\n", short1);
    printf("Short2: %d\n", short2);
    printf("Long: %d\n", max);
    TEST_ASSERT_EQUAL_STRING("Right_Angle",getTriangleType(3, 4, 5));
}
