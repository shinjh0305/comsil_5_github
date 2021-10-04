#include <stdio.h>

int gettype(int);

int main() {
	int input;
	int paren[10];
	int top = -1;
	int popnum;
	int type;

	printf("Input? ");

	while (1) {
		input = getchar();
		if (input == '\n') break;

		type = gettype(input);

		if (type == 0) continue;
		else if (type < 4) {
			paren[++top] = type;
		}
		else {
			popnum = paren[top--];
			if (popnum + 3 == type) {
				continue;
			}
			printf("Wrong Parenthesis\n");
			return 0;
		}
	}
	printf("Good!\n");
	return 0;
}

int gettype(int input) {
	switch (input) {
	case '(':
		return 1; break;
	case '{':
		return 2; break;
	case '[':
		return 3; break;
	case ')':
		return 4; break;
	case '}':
		return 5; break;
	case ']':
		return 6; break;
	default:
		return 0; break;
	}
}