/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_user_locks.h"

static const char* CMockString_destroy_user_locks = "destroy_user_locks";
static const char* CMockString_init_user_locks = "init_user_locks";
static const char* CMockString_lock_user_mutex = "lock_user_mutex";
static const char* CMockString_uid = "uid";
static const char* CMockString_uid_arr = "uid_arr";
static const char* CMockString_unlock_user_mutex = "unlock_user_mutex";

typedef struct _CMOCK_init_user_locks_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  uid_t* Expected_uid_arr;
  char ReturnThruPtr_uid_arr_Used;
  uid_t* ReturnThruPtr_uid_arr_Val;
  size_t ReturnThruPtr_uid_arr_Size;

} CMOCK_init_user_locks_CALL_INSTANCE;

typedef struct _CMOCK_destroy_user_locks_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_destroy_user_locks_CALL_INSTANCE;

typedef struct _CMOCK_lock_user_mutex_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  uid_t Expected_uid;

} CMOCK_lock_user_mutex_CALL_INSTANCE;

typedef struct _CMOCK_unlock_user_mutex_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  uid_t Expected_uid;

} CMOCK_unlock_user_mutex_CALL_INSTANCE;

static struct mock_user_locksInstance
{
  char init_user_locks_IgnoreBool;
  int init_user_locks_FinalReturn;
  CMOCK_MEM_INDEX_TYPE init_user_locks_CallInstance;
  char destroy_user_locks_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE destroy_user_locks_CallInstance;
  char lock_user_mutex_IgnoreBool;
  int lock_user_mutex_FinalReturn;
  CMOCK_MEM_INDEX_TYPE lock_user_mutex_CallInstance;
  char unlock_user_mutex_IgnoreBool;
  int unlock_user_mutex_FinalReturn;
  CMOCK_MEM_INDEX_TYPE unlock_user_mutex_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_user_locks_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.init_user_locks_CallInstance;
  if (Mock.init_user_locks_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_init_user_locks);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.destroy_user_locks_CallInstance;
  if (Mock.destroy_user_locks_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_destroy_user_locks);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.lock_user_mutex_CallInstance;
  if (Mock.lock_user_mutex_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_lock_user_mutex);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.unlock_user_mutex_CallInstance;
  if (Mock.unlock_user_mutex_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_unlock_user_mutex);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void mock_user_locks_Init(void)
{
  mock_user_locks_Destroy();
}

void mock_user_locks_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

int init_user_locks(uid_t* uid_arr)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_init_user_locks_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_init_user_locks);
  cmock_call_instance = (CMOCK_init_user_locks_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.init_user_locks_CallInstance);
  Mock.init_user_locks_CallInstance = CMock_Guts_MemNext(Mock.init_user_locks_CallInstance);
  if (Mock.init_user_locks_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.init_user_locks_FinalReturn;
    Mock.init_user_locks_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_init_user_locks,CMockString_uid_arr);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_uid_arr), (void*)(uid_arr), sizeof(uid_t), cmock_line, CMockStringMismatch);
  }
  }
  if (cmock_call_instance->ReturnThruPtr_uid_arr_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(uid_arr, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)uid_arr, (void*)cmock_call_instance->ReturnThruPtr_uid_arr_Val,
      cmock_call_instance->ReturnThruPtr_uid_arr_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_init_user_locks(CMOCK_init_user_locks_CALL_INSTANCE* cmock_call_instance, uid_t* uid_arr);
void CMockExpectParameters_init_user_locks(CMOCK_init_user_locks_CALL_INSTANCE* cmock_call_instance, uid_t* uid_arr)
{
  cmock_call_instance->Expected_uid_arr = uid_arr;
  cmock_call_instance->ReturnThruPtr_uid_arr_Used = 0;
}

void init_user_locks_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_init_user_locks_CALL_INSTANCE));
  CMOCK_init_user_locks_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_user_locks_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.init_user_locks_CallInstance = CMock_Guts_MemChain(Mock.init_user_locks_CallInstance, cmock_guts_index);
  Mock.init_user_locks_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.init_user_locks_IgnoreBool = (char)1;
}

void init_user_locks_CMockStopIgnore(void)
{
  if(Mock.init_user_locks_IgnoreBool)
    Mock.init_user_locks_CallInstance = CMock_Guts_MemNext(Mock.init_user_locks_CallInstance);
  Mock.init_user_locks_IgnoreBool = (char)0;
}

void init_user_locks_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_init_user_locks_CALL_INSTANCE));
  CMOCK_init_user_locks_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_user_locks_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.init_user_locks_CallInstance = CMock_Guts_MemChain(Mock.init_user_locks_CallInstance, cmock_guts_index);
  Mock.init_user_locks_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void init_user_locks_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uid_t* uid_arr, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_init_user_locks_CALL_INSTANCE));
  CMOCK_init_user_locks_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_user_locks_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.init_user_locks_CallInstance = CMock_Guts_MemChain(Mock.init_user_locks_CallInstance, cmock_guts_index);
  Mock.init_user_locks_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_init_user_locks(cmock_call_instance, uid_arr);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void init_user_locks_CMockReturnMemThruPtr_uid_arr(UNITY_LINE_TYPE cmock_line, uid_t* uid_arr, size_t cmock_size)
{
  CMOCK_init_user_locks_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_user_locks_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.init_user_locks_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_uid_arr_Used = 1;
  cmock_call_instance->ReturnThruPtr_uid_arr_Val = uid_arr;
  cmock_call_instance->ReturnThruPtr_uid_arr_Size = cmock_size;
}

void destroy_user_locks(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_destroy_user_locks_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_destroy_user_locks);
  cmock_call_instance = (CMOCK_destroy_user_locks_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.destroy_user_locks_CallInstance);
  Mock.destroy_user_locks_CallInstance = CMock_Guts_MemNext(Mock.destroy_user_locks_CallInstance);
  if (Mock.destroy_user_locks_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void destroy_user_locks_CMockIgnore(void)
{
  Mock.destroy_user_locks_IgnoreBool = (char)1;
}

void destroy_user_locks_CMockStopIgnore(void)
{
  Mock.destroy_user_locks_IgnoreBool = (char)0;
}

void destroy_user_locks_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_destroy_user_locks_CALL_INSTANCE));
  CMOCK_destroy_user_locks_CALL_INSTANCE* cmock_call_instance = (CMOCK_destroy_user_locks_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.destroy_user_locks_CallInstance = CMock_Guts_MemChain(Mock.destroy_user_locks_CallInstance, cmock_guts_index);
  Mock.destroy_user_locks_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

int lock_user_mutex(uid_t uid)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lock_user_mutex_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lock_user_mutex);
  cmock_call_instance = (CMOCK_lock_user_mutex_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lock_user_mutex_CallInstance);
  Mock.lock_user_mutex_CallInstance = CMock_Guts_MemNext(Mock.lock_user_mutex_CallInstance);
  if (Mock.lock_user_mutex_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.lock_user_mutex_FinalReturn;
    Mock.lock_user_mutex_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_lock_user_mutex,CMockString_uid);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uid), (void*)(&uid), sizeof(uid_t), cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_lock_user_mutex(CMOCK_lock_user_mutex_CALL_INSTANCE* cmock_call_instance, uid_t uid);
void CMockExpectParameters_lock_user_mutex(CMOCK_lock_user_mutex_CALL_INSTANCE* cmock_call_instance, uid_t uid)
{
  memcpy((void*)(&cmock_call_instance->Expected_uid), (void*)(&uid),
         sizeof(uid_t[sizeof(uid) == sizeof(uid_t) ? 1 : -1])); /* add uid_t to :treat_as_array if this causes an error */
}

void lock_user_mutex_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lock_user_mutex_CALL_INSTANCE));
  CMOCK_lock_user_mutex_CALL_INSTANCE* cmock_call_instance = (CMOCK_lock_user_mutex_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lock_user_mutex_CallInstance = CMock_Guts_MemChain(Mock.lock_user_mutex_CallInstance, cmock_guts_index);
  Mock.lock_user_mutex_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.lock_user_mutex_IgnoreBool = (char)1;
}

void lock_user_mutex_CMockStopIgnore(void)
{
  if(Mock.lock_user_mutex_IgnoreBool)
    Mock.lock_user_mutex_CallInstance = CMock_Guts_MemNext(Mock.lock_user_mutex_CallInstance);
  Mock.lock_user_mutex_IgnoreBool = (char)0;
}

void lock_user_mutex_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lock_user_mutex_CALL_INSTANCE));
  CMOCK_lock_user_mutex_CALL_INSTANCE* cmock_call_instance = (CMOCK_lock_user_mutex_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lock_user_mutex_CallInstance = CMock_Guts_MemChain(Mock.lock_user_mutex_CallInstance, cmock_guts_index);
  Mock.lock_user_mutex_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void lock_user_mutex_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uid_t uid, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lock_user_mutex_CALL_INSTANCE));
  CMOCK_lock_user_mutex_CALL_INSTANCE* cmock_call_instance = (CMOCK_lock_user_mutex_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lock_user_mutex_CallInstance = CMock_Guts_MemChain(Mock.lock_user_mutex_CallInstance, cmock_guts_index);
  Mock.lock_user_mutex_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_lock_user_mutex(cmock_call_instance, uid);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

int unlock_user_mutex(uid_t uid)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_unlock_user_mutex_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_unlock_user_mutex);
  cmock_call_instance = (CMOCK_unlock_user_mutex_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.unlock_user_mutex_CallInstance);
  Mock.unlock_user_mutex_CallInstance = CMock_Guts_MemNext(Mock.unlock_user_mutex_CallInstance);
  if (Mock.unlock_user_mutex_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.unlock_user_mutex_FinalReturn;
    Mock.unlock_user_mutex_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_unlock_user_mutex,CMockString_uid);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uid), (void*)(&uid), sizeof(uid_t), cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_unlock_user_mutex(CMOCK_unlock_user_mutex_CALL_INSTANCE* cmock_call_instance, uid_t uid);
void CMockExpectParameters_unlock_user_mutex(CMOCK_unlock_user_mutex_CALL_INSTANCE* cmock_call_instance, uid_t uid)
{
  memcpy((void*)(&cmock_call_instance->Expected_uid), (void*)(&uid),
         sizeof(uid_t[sizeof(uid) == sizeof(uid_t) ? 1 : -1])); /* add uid_t to :treat_as_array if this causes an error */
}

void unlock_user_mutex_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_unlock_user_mutex_CALL_INSTANCE));
  CMOCK_unlock_user_mutex_CALL_INSTANCE* cmock_call_instance = (CMOCK_unlock_user_mutex_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.unlock_user_mutex_CallInstance = CMock_Guts_MemChain(Mock.unlock_user_mutex_CallInstance, cmock_guts_index);
  Mock.unlock_user_mutex_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.unlock_user_mutex_IgnoreBool = (char)1;
}

void unlock_user_mutex_CMockStopIgnore(void)
{
  if(Mock.unlock_user_mutex_IgnoreBool)
    Mock.unlock_user_mutex_CallInstance = CMock_Guts_MemNext(Mock.unlock_user_mutex_CallInstance);
  Mock.unlock_user_mutex_IgnoreBool = (char)0;
}

void unlock_user_mutex_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_unlock_user_mutex_CALL_INSTANCE));
  CMOCK_unlock_user_mutex_CALL_INSTANCE* cmock_call_instance = (CMOCK_unlock_user_mutex_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.unlock_user_mutex_CallInstance = CMock_Guts_MemChain(Mock.unlock_user_mutex_CallInstance, cmock_guts_index);
  Mock.unlock_user_mutex_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void unlock_user_mutex_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uid_t uid, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_unlock_user_mutex_CALL_INSTANCE));
  CMOCK_unlock_user_mutex_CALL_INSTANCE* cmock_call_instance = (CMOCK_unlock_user_mutex_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.unlock_user_mutex_CallInstance = CMock_Guts_MemChain(Mock.unlock_user_mutex_CallInstance, cmock_guts_index);
  Mock.unlock_user_mutex_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_unlock_user_mutex(cmock_call_instance, uid);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

