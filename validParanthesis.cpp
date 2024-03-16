bool isValid(string s) {
    stack<char> stack;
    for (char string : s) {
        if (string == '(' || string == '{' || string == '[') stack.push(string);
        else if (!stack.empty() && string == ')' && stack.top() == '(') stack.pop();
        else if (!stack.empty() && string == '}' && stack.top() == '{') stack.pop();
        else if (!stack.empty() && string == ']' && stack.top() == '[') stack.pop();
        else return false;
    }
    return stack.empty();
}