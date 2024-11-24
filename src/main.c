#include "../incl/main.h"

int main(void)
{
    char ** case1RansomNotePtr;
    case1RansomNotePtr = malloc(1 * sizeof(char*));

    printf("------------------------");
    printf("Running %d Tests...", NUM_TEST_CASES);
    printf("------------------------\n");

    runningReturn += testCaseN(case1RansomNote, case1Magazine ,case1Solution);
    runningReturn += testCaseN(case2RansomNote, case2Magazine ,case2Solution);
    runningReturn += testCaseN(case3RansomNote, case3Magazine ,case3Solution);
    runningReturn += testCaseN(case4RansomNote, case4Magazine ,case4Solution);
    runningReturn += testCaseN(case5RansomNote, case5Magazine ,case5Solution);

    printf("------------------------");
    printf("%ld / %d tests passed!", runningReturn - NUM_TEST_CASES, NUM_TEST_CASES);
    printf("------------------------\n");

    return runningReturn;
}

// return 0 if the test case passes, 1 if it fails; the reason for this design is that we call `testCaseN` NUM_TEST_CASES times
int testCaseN(char *ransomNote, char *magazine, bool solution)
{
    bool answer = false;

    //run function under test    
    answer = canConstruct(ransomNote, magazine);

    printf("Test case %ld ", ++currentTestCase);
    if (answer == solution)
    {
        printf("passed!\n");
        return 0;
    }
    else
    {
        printf("FAILED!\n");
        return 1;
    }
}
