// Write a C++ program to convert Infix to Postfix using Stack.

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class stack
{
private:
    char arr[MAX_SIZE];
    int top;

public:
    stack() { top = -1; }

    bool isEmpty() { return top == -1; }

    void push(char x) { arr[++top] = x; }

    char pop() { return arr[top--]; }

    char peek() { return arr[top]; }
};

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool isOperand(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

void infixToPostfix(char infix[])
{
    stack s;
    char postfix[MAX_SIZE];
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++)
    {
        char c = infix[i];
        if (isOperand(c))
        {
            postfix[j++] = c;
        }
        else if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            while (s.peek() != '(')
            {
                postfix[j++] = s.pop();
            }
            s.pop();
        }
        else if (isOperator(c))
        {
            while (!s.isEmpty() && precedence(s.peek()) >= precedence(c))
            {
                postfix[j++] = s.pop();
            }
            s.push(c);
        }
    }
    while (!s.isEmpty())
    {
        postfix[j++] = s.pop();
    }
    postfix[j] = '\0';
    cout << "Postfix : " << postfix << endl;
}

int main()
{
    char infix[MAX_SIZE];
    cout << "Enter Expressions : ";
    cin >> infix;

    infixToPostfix(infix);

    return 0;
}