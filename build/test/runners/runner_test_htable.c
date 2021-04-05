/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "htable.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>
#include <sys/types.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_single_insert(void);
extern void test_double_insert(void);
extern void test_insert_update_existing_key(void);
extern void test_null_insert(void);
extern void test_single_remove();
extern void test_removes_only_specified_key_and_val();
extern void test_null_remove();
extern void test_get_value(void);
extern void test_get_false_on_nonexistent_key(void);
extern void test_null_get(void);
extern void test_update_value(void);
extern void test_update_in_place(void);
extern void test_enum_next(void);
extern void test_enum_next_empty_table(void);
extern void test_enum_multiple_items(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("./test/test_htable.c");
  run_test(test_single_insert, "test_single_insert", 58);
  run_test(test_double_insert, "test_double_insert", 71);
  run_test(test_insert_update_existing_key, "test_insert_update_existing_key", 91);
  run_test(test_null_insert, "test_null_insert", 105);
  run_test(test_single_remove, "test_single_remove", 114);
  run_test(test_removes_only_specified_key_and_val, "test_removes_only_specified_key_and_val", 122);
  run_test(test_null_remove, "test_null_remove", 137);
  run_test(test_get_value, "test_get_value", 148);
  run_test(test_get_false_on_nonexistent_key, "test_get_false_on_nonexistent_key", 158);
  run_test(test_null_get, "test_null_get", 169);
  run_test(test_update_value, "test_update_value", 175);
  run_test(test_update_in_place, "test_update_in_place", 189);
  run_test(test_enum_next, "test_enum_next", 204);
  run_test(test_enum_next_empty_table, "test_enum_next_empty_table", 216);
  run_test(test_enum_multiple_items, "test_enum_multiple_items", 222);

  return UnityEnd();
}
