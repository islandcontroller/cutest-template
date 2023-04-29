/*- Header files -------------------------------------------------------------*/
#include <CuTest.h>


/*- Stubs --------------------------------------------------------------------*/
// #include "Stub_DemoHandler.h"


/*- Unit-Under-Test ----------------------------------------------------------*/
#if 0 // TODO: Insert path to your unit-under-test here
#include "../relative/path/to/unit_under_test.c"
#endif


/*- Unit stub implementation -------------------------------------------------*/
// #include "Stub_Unit_Impl.inc"


/*- Functional tests for GetValue function -----------------------------------*/
/*!****************************************************************************
 * @brief
 * Invalid input
 *
 * @date xx.xx.xxxx
 ******************************************************************************/
TEST_CASE(TEST_MyUnit_GetValue_InvalidInput)
{
#if 0 // TODO: Use this structure to implement your test cases:
  // Stub and environment setup
  vStub_DemoHandler_Reset();
  vStub_DemoHandler_SetTime(1234u);

  // Input data
  const uint32_t ulInputNumber = 321u;

  // Expected outputs
  const uint8_t ucExpectedError = 5u;
  const uint32_t ulExpectedResult = 1u;

  // Test run and actual values
  uint32_t ulActualResult = ulUnitGetValue(ulInputNumber);
  uint8_t ucActualError = ucStub_DemoHandler_GetError();

  // Results evaluation
  CuAssertIntEquals(ucExpectedError, ucActualError);
  CuAssertIntEquals(ulExpectedResult, ulActualResult);
#endif
}

/// Functional tests for GetValue
TEST_GROUP(TestMyUnit_GetValue)
{
  TEST_MyUnit_GetValue_InvalidInput
};


/*- "Unit" Test Module -------------------------------------------------------*/
/// Test group assignment for "Unit" test module
TEST_MODULE(TestMyUnit)
{
  TestMyUnit_GetValue
};
