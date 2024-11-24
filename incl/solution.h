#pragma once
#include "util.h"
#include "problem.h"

#define NUM_TEST_CASES 5

/*------------------------Case 1------------------------*/
char case1RansomNote[] = "a";
char case1Magazine[] = "b";
const bool case1Solution = false;

/*------------------------Case 2------------------------*/
char case2RansomNote[] = "aa";
char case2Magazine[] = "ab";
const bool case2Solution = false;

/*------------------------Case 3------------------------*/
char case3RansomNote[] = "aa";
char case3Magazine[] = "aab";
const bool case3Solution = true;

/*------------------------Case 4------------------------*/
char case4RansomNote[] = "money";
char case4Magazine[] = "mmnmmwahsdjfhlkjashdlkjfhjuieiousdoifuy";
const bool case4Solution = true;

/*------------------------Case 5------------------------*/
char case5RansomNote[] = "dignity";
char case5Magazine[] = "joasidjfpoiqwjmepfiayjpoizgjpsoidmyfpaotijwepmfoijasapoiydjnfpoizjstdfpoyajspfoz";
const bool case5Solution = true;