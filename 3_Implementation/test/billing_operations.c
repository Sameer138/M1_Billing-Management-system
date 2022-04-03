#include"unity.h"
#include"billing_operations.h"
#define PROJECT_NAME "Billing_Management"
void addrecords(void);
void listrecords(void);
void modifyrecords(void);
void deleterecords(void);
void searchrecords(void);
void payment(void);
int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_addrecords);
    RUN_TEST(test_listrecords);
    RUN_TEST(test_modifyrecords);
    RUN_TEST(test_deleterecords);
    RUN_TEST(test_searchrecords);
    RUN_TEST(test_payment);
    return UNITY_END;
}