#include<bits/stdc++.h>
using namespace std;

string removeoutermostparenthesis(string s){
    string result;
    int depth =0;

    for(char ch:s){
        if(ch=='('){
            if(depth>0) result +=ch;
            depth ++;
        }
        else{
            depth --;
            if(depth >0) result +=ch;
        }
    }
    return result;
}

int main(){
    string s = "(()())(())";
    string getresult = removeoutermostparenthesis(s);
    cout<<"After removing the parenthesis"<<getresult;
    return 0;
}



// 🧠 Intuition
// In a valid parentheses string, each '(' has a matching ')'.
// We're told to remove the outermost parentheses of every primitive part.

// 🔑 What's a primitive?
// A primitive is the smallest valid group that:

// Is not empty, and

// Cannot be split into two or more smaller valid strings.

// Example:

// "(()())(())" → contains two primitives:

// "(()())" → after removing outer (), becomes "()()"

// "(())" → becomes "()"

// So we need a way to:

// Detect where each primitive starts and ends, and

// Exclude the outermost parentheses of each.

// ✅ Approach
// We use a simple trick — track the depth of nested parentheses using a counter:

// Step-by-step:
// Initialize:

// A result string to store final answer.

// A variable depth = 0 to track nesting.

// Loop through each character in the input:

// If you see '(':

// If depth > 0, it’s not the outermost, so add it to result.

// Increase depth by 1.

// If you see ')':

// Decrease depth by 1.

// If depth > 0 after decrementing, it’s not the outermost, so add it to result.

// Return the result string.

// 🔄 Why does this work?
// The outermost parentheses are always at depth == 1:

// '(' → first bracket of a primitive (skip it)

// ')' → last bracket of a primitive (skip it)

// All characters inside those outer brackets are at depth > 1 — we keep them.

// 💻 Dry Run Example:
// Input: "(()())"

// Char	Depth (Before)	Action	Result
// (	0	Skip (outer)	
// (	1	Add	(
// )	2	Add	()
// (	1	Add	()(
// )	2	Add	()()
// )	1	Skip (outer)	()()

// Return: "()()"

// ⏱️ Time and Space Complexity
// Time Complexity: O(n)
// One pass through the input string.

// Space Complexity: O(n)
// To store the result string.