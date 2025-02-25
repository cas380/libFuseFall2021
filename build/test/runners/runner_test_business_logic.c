/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include "business_logic.h"
#include <sys/types.h>
#include "mock_common.h"
#include "mock_database.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_update_usage_dberror(void);
extern void test_update_file_dberror(void);
extern void test_update_usage_user_not_exist_sucessfull_add(void);
extern void test_update_file_user_not_exist_sucessfull_add(void);
extern void test_update_usage_user_not_exist_bad_add(void);
extern void test_update_file_user_not_exist_bad_add(void);
extern void test_print_all(void);
extern void test_db_init(void);
extern void test_db_close(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  mock_common_Init();
  mock_database_Init();
}
static void CMock_Verify(void)
{
  mock_common_Verify();
  mock_database_Verify();
}
static void CMock_Destroy(void)
{
  mock_common_Destroy();
  mock_database_Destroy();
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
  UnityBegin("./unit_tests/test_business_logic.c");
  run_test(test_update_usage_dberror, "test_update_usage_dberror", 16);
  run_test(test_update_file_dberror, "test_update_file_dberror", 23);
  run_test(test_update_usage_user_not_exist_sucessfull_add, "test_update_usage_user_not_exist_sucessfull_add", 30);
  run_test(test_update_file_user_not_exist_sucessfull_add, "test_update_file_user_not_exist_sucessfull_add", 38);
  run_test(test_update_usage_user_not_exist_bad_add, "test_update_usage_user_not_exist_bad_add", 46);
  run_test(test_update_file_user_not_exist_bad_add, "test_update_file_user_not_exist_bad_add", 54);
  run_test(test_print_all, "test_print_all", 62);
  run_test(test_db_init, "test_db_init", 68);
  run_test(test_db_close, "test_db_close", 75);

  CMock_Guts_MemFreeFinal();
  return UnityEnd();
}
