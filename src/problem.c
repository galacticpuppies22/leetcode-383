#include "../incl/util.h"
#include "../incl/problem.h"

#define LENGTH_OF_LOWER_CASE_ENGLISH_ALPHABET 26
#define OFFSET_FOR_LETTER_AS_MAP_INDEX 'a'

/**
 * Constraints:
 * 1 <= ransomNote.length, magazine.length <= 105
 * ransomNote and magazine consist of lowercase English letters.
 */
bool canConstruct(char* ransomNote, char* magazine)
{
#ifdef SOLUTION_1 //unfinished
    for (int i = 0; ransomNote[i] != '\0'; i++)
    {
#ifdef DEBUG
        printf("%s[%d]:%c\n", STRINGIFY(ransomNote), i, ransomNote[i]);
#endif /* DEBUG */
        while (ransomNote[i] != '\0')
        {

        }
    }
#endif /* SOLUTION_1 */
#ifdef SOLUTION_2 //using a map
    int map[LENGTH_OF_LOWER_CASE_ENGLISH_ALPHABET] = {0}; //create a map of the lower-case english alphabet as an letter incidence count map

    while (*magazine) //collect incidence counts of letters in magazine string in map
    {
        map[*magazine - OFFSET_FOR_LETTER_AS_MAP_INDEX]++; //dereference the pointer to get the character representing `magazine`, subtract the offset to get the index
        magazine++;
    }

    while (*ransomNote) //for each letter in ransom note, subtract 1 count of that letter from the magazine'd map
    {
        map[*ransomNote - OFFSET_FOR_LETTER_AS_MAP_INDEX]--;
        ransomNote++;
    }

    for (int i = 0; i < LENGTH_OF_LOWER_CASE_ENGLISH_ALPHABET; i++)
    {
        if (map[i] < 0)
        {
            return false;
        }
    }
    return true;
    /**
     * Time Complexity = O(m)
     * where magazine.lenght >= ransomNote.lenth
     * the complexity depends on the longer of the two strings, which is always magazine
     */
    /**
     * Space Complexity is O(1)
     * 
     * Let's analyze:
     * Space Complexity is O(k, where k is the number of distinct characters in magazine
     * Since the constraints for this problems state that we will only use english alphabet lower case letters,
     * therefore our hashmap will store at most 26 characters, i.e. k <= 26, i.e. k will always have an upper bound of 26, no matter length of n and m
     * This means that we can consider 'k' a constant for all lengths of n and m. 
     * This, in turn, means that we hace a constant space complexity: O(1)
     * 
     * Correction: https://leetcode.com/explore/learn/card/the-leetcode-beginners-guide/692/challenge-problems/4427/#:~:text=Video%20Solution-,Correction,-%3A%20The%20space%20complexity
     */
#endif /* SOLUTION_2 */
}