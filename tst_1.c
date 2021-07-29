#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

int TriDin(int a, int b, int c, int d, int cont1, int cont2);

static void test_1(void **state)
{
    int rez = TriDin(10,1,7,11,0,0);
    assert_int_equal(rez , 11);
}

static void test_2(void **state)
{
    int rez = TriDin(15,1,7,11,0,0);
    assert_int_equal(rez , 15);
}

static void test_3(void **state)
{
    int rez = TriDin(10,15,7,11,0,0);
    assert_int_equal(rez , 15);
}

static void test_4(void **state)
{
    int rez = TriDin(10,1,15,11,0,0);
    assert_int_equal(rez , 15);
}

static void test_5(void **state)
{
    int rez = TriDin(10,1,7,15,0,0);
    assert_int_equal(rez , 15);
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
        cmocka_unit_test( test_2 ),
        cmocka_unit_test( test_3 ),
        cmocka_unit_test( test_4 ),
        cmocka_unit_test( test_5 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}