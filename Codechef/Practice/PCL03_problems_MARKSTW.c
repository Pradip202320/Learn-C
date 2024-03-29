// Alice has scored 
// �
// X marks in her test and Bob has scored 
// �
// Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.

// Input Format
// The first and only line of input contains two space-separated integers 
// �
// ,
// �
// X,Y — the marks of Alice and Bob respectively.
// Output Format
// For each testcase, print Yes if Alice is happy and No if she is not, according to the problem statement.

// The judge is case insensitive so you may output the answer in any case. In particular YES, yes, yEsare all considered equivalent toYes`.

// Constraints
// 1
// ≤
// �
// ,
// �
// ≤
// 100
// 1≤X,Y≤100
// Sample 1:
// Input
// Output
// 2 1
// Yes
// Explanation:
// Alice has scored 
// �
// =
// 2
// X=2 marks whereas Bob has scored 
// �
// =
// 1
// Y=1 mark. As Alice has scored twice as much as Bob (i.e. 
// �
// ≥
// 2
// �
// X≥2Y), the answer is Yes.

// Sample 2:
// Input
// Output
// 1 2
// No
// Explanation:
// Alice has scored 
// �
// =
// 1
// X=1 mark whereas Bob has scored 
// �
// =
// 2
// Y=2 marks. As Alice has not scored twice as much as Bob (i.e. 
// �
// <
// 2
// �
// X<2Y), the answer is No.
#include <stdio.h>

int main() {
    int X, Y;
    
    
    scanf("%d %d", &X, &Y);
    
    
    if (X >= 2 * Y) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
