#include <stdio.h>
#include <string.h>
char stack[15];
char infix[50];
char postfix[50];
int top = -1, top_postfix = -1;

int order(char element)
{
	if(element == '^')
		return 5;
	else if(element == '/' || element == '*')
		return 4;
	else if(element == '+' || element == '-')
		return 3;
	else
		return 0;
}

void push_to_stack(char element)
{
	stack[++top] = element;
}

void pop_to_postfix()
{
	postfix[++top_postfix] = stack[top--]; 
}

void push_to_postfix(char element)
{
	postfix[++top_postfix] = element;
}


void scanning()
{
	int i = 0;
	for(i = 0; i < strlen(infix); i++)
	{
		if(infix[i] == '^' || infix[i] == '/' || infix[i] == '*' || infix[i] == '-' || infix[i] == '+')
		{
			if(order(infix[i]) > order(stack[top]))
				push_to_stack(infix[i]);
			else
			{
				while(order(infix[i]) <= order(stack[top]))
					pop_to_postfix();
				push_to_stack(infix[i]);
			}
		}
		else if(infix[i] == '(' || infix[i] == ')')
		{
			if(infix[i] == '(')
				push_to_stack(infix[i]);
			else
			{
				while(stack[top] != '(')
					pop_to_postfix();
				top--;
			}
		}
		else
		{
			push_to_postfix(infix[i]);
		}
	}
	while(top > -1)
		pop_to_postfix();	
}

int main()
{
	printf("Enter infix expression\n");
	gets(infix);
	scanning();
	printf("postfix expression\n");
	puts(postfix);
	return 0;
}