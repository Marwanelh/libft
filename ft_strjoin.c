#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  s1_len;
    size_t  s2_len;
    char    *new_str;

    if (!s1 || !s2)
        return (NULL);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
    if (!new_str)
        return (NULL);
    ft_strlcpy(new_str, s1, s1_len + 1);
    ft_strlcat(new_str, s2, s2_len + 1);
    return (new_str);
}

#include <stdio.h>   // For printf
#include <string.h>  // For strcmp to verify results
#include <stdlib.h>  // For free

// A helper function to print results neatly
void run_test(const char *test_name, char const *s1, char const *s2, const char *expected)
{
    char *result = ft_strjoin(s1, s2);

    // Check for correct NULL handling
    if (expected == NULL)
    {
        if (result == NULL)
            printf("✅  Test: %s (Correctly returned NULL)\n", test_name);
        else
            printf("❌  Test: %s (Should have returned NULL)\n", test_name);
    }
    // Check for correct string result
    else
    {
        if (result && strcmp(result, expected) == 0)
            printf("✅  Test: %s\n", test_name);
        else
            printf("❌  Test: %s (Expected: '%s', Got: '%s')\n", test_name, expected, result);
    }

    // IMPORTANT: Free the memory allocated by ft_strjoin
    if (result)
        free(result);
}

int main(void)
{
    printf("--- Testing ft_strjoin ---\n\n");

    // Test 1: Basic join
    run_test("Basic join", "Hello, ", "world!", "Hello, world!");

    // Test 2: First string is empty
    run_test("First string empty", "", "I am here.", "I am here.");

    // Test 3: Second string is empty
    run_test("Second string empty", "I am here.", "", "I am here.");

    //Test 4: Both strings are empty
    run_test("Both strings empty", "", "", "");
    
    // Test 5: Joining a long string
    run_test("Long strings", "This is a very long first part... ", "and this is the second part.", "This is a very long first part... and this is the second part.");

    // Test 6: Checking NULL inputs
    run_test("First string is NULL", NULL, "world", NULL);
    run_test("Second string is NULL", "hello", NULL, NULL);

    printf("\n--- End of tests ---\n");

    return (0);
}
