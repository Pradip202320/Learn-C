// In the new CodeChef Learn module, under the "Learn Problem Solving" section, there are two courses for each language. For eg. "Python Beginner - Part 1" and "Python Beginner - Part 2". These courses help you get started with CodeChef contests.

// Currently there are courses for 4 languages, and hence there are 8 courses in this section. But suppose there are courses for 
// �
// N languages, what will be the total number of courses in this section?

// Input Format
// The only line of input will contain a single integer 
// �
// N, denoting the number of languages for which there are courses.

// Output Format
// Output on a single line the total number of courses in the section.

// Constraints
// 1
// ≤
// �
// ≤
// 100
// 1≤N≤100
// Sample 1:
// Input
// Output
// 4
// 8
// Explanation:
// If there are 
// 4
// 4 languages, then there will be 
// 2
// ∗
// 4
// =
// 8
// 2∗4=8 courses in total.

// Sample 2:
// Input
// Output
// 9
// 18
// Explanation:
// If there are 
// 9
// 9 languages, then there will be 
// 2
// ∗
// 9
// =
// 18
// 2∗9=18 courses in total.
#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    int total_courses = 2 * N;
    
    printf("%d\n", total_courses);
    
    return 0;
}