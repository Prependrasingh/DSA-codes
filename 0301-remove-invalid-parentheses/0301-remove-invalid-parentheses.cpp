class Solution {
private:
    unordered_set<string> validExpressions;
    int minimumRemoved;

    void reset() {
        validExpressions.clear();
        minimumRemoved = INT_MAX;
    }

    void recurse(
        string& s,
        int index,
        int leftCount,
        int rightCount,
        string& expression,
        int removedCount
    ) {
        // Reached the end of the string
        if (index == s.length()) {

            // Current expression is valid
            if (leftCount == rightCount) {

                // We found an expression with minimum removals
                if (removedCount <= minimumRemoved) {

                    // Convert current expression to string
                    string possibleAnswer = expression;

                    // Found a better answer
                    if (removedCount < minimumRemoved) {
                        validExpressions.clear();
                        minimumRemoved = removedCount;
                    }

                    validExpressions.insert(possibleAnswer);
                }
            }

            return;
        }

        char currentCharacter = s[index];
        int length = expression.length();

        // Current character is not a parenthesis
        if (currentCharacter != '(' && currentCharacter != ')') {

            expression.push_back(currentCharacter);

            recurse(
                s,
                index + 1,
                leftCount,
                rightCount,
                expression,
                removedCount
            );

            // Backtrack
            expression.pop_back();
        }
        else {

            // OPTION 1: Remove current parenthesis
            recurse(
                s,
                index + 1,
                leftCount,
                rightCount,
                expression,
                removedCount + 1
            );

            // OPTION 2: Keep current parenthesis
            expression.push_back(currentCharacter);

            if (currentCharacter == '(') {

                recurse(
                    s,
                    index + 1,
                    leftCount + 1,
                    rightCount,
                    expression,
                    removedCount
                );

            }
            else if (rightCount < leftCount) {

                recurse(
                    s,
                    index + 1,
                    leftCount,
                    rightCount + 1,
                    expression,
                    removedCount
                );
            }

            // Backtrack
            expression.pop_back();
        }
    }

public:
    vector<string> removeInvalidParentheses(string s) {

        reset();

        string expression;

        recurse(
            s,
            0,
            0,
            0,
            expression,
            0
        );

        return vector<string>(
            validExpressions.begin(),
            validExpressions.end()
        );
    }
};