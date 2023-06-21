#include <iostream>
#include <iomanip>
#include <stack>
#include <vector>
#include <math.h>
using namespace std;

// Expression class is a utility class
// it provides 2 functionalties
// infix_to_postfix() method converts a boolean string to postfix form
// evluate_postfix() methods evalutes a postfix expression and retuns the answer 
class Expression {

	static int prece(char t) {
		if (t == '\'')		return 2;
		else if (t == '.') return 1;
		else 			return 0;
	}

	static bool isOperator(char t) {
		return t == '.' || t == '+' || t == '\'';
	}

	static bool isOperand(char t) {
		return t >= 'A' && t <= 'Z';
	}

public:

	// the function convert given infix expression to postfix expression and returns the postfix expression
	// it accepts 1 argument
	// infix - it is the input infix expression we want to covnert
	static string infix_to_postfix(string infix) {

		stack<char> opStack;

		// it stores final postfix expression
		string postfix;

		// it stores each token of infix expression
		char token;

		infix.insert(0, 1, '(');
		infix.push_back(')');

		postfix = "";
		for (int i = 0; i < infix.length(); ++i) {
			token = infix[i];
			if (token == '(') {
				opStack.push(token);
			}
			else if (isOperand(token)) {
				postfix.push_back(token);
			}
			else if (isOperator(token)) {
				while (isOperator(opStack.top()) && (prece(opStack.top()) >= prece(token))) {
					char temp = opStack.top();
					opStack.pop();
					postfix.push_back(temp);
				}
				opStack.push(token);
			}
			else if (token == ')') {
				while (opStack.top() != '(') {
					char temp = opStack.top();
					opStack.pop();
					postfix.push_back(temp);
				}
				// pop again to remove extra '(' from the stack
				// as it is already paired with ')' 
				opStack.pop();
			}
		}

		return postfix;

	}

	// the function evaluates a postfix expression
	// it accepts 2 arguments
	// 1. postfix - it is the postfix expression we want to evaluates
	// 2. val - it stores the values of boolean variables in postfix expression
	static int evluate_postfix(string& postfix, vector<int>& val) {

		stack<int> stk;
		char token;

		for (int i = 0; i < postfix.length(); ++i) {
			token = postfix[i];
			if (isOperand(token)) {
				stk.push(val[token - 'A']);
			}
			else if (isOperator(token)) {
				int v1, v2;
				if (token == '\'') {
					v1 = stk.top();
					stk.pop();
					stk.push(!v1);
				}
				else {
					v1 = stk.top();
					stk.pop();
					v2 = stk.top();
					stk.pop();
					switch (token) {
					case '+':
						stk.push(v2 or v1);
						break;
					case '.':
						stk.push(v2 and v1);
						break;
					}
				}
			}
		}
		return stk.top();

	}


};

// this function increments val in binary
// for example if the content of val is 011011
// the content of val after incrementing will be 011100
// 011011
// +    1
// ______
// 011100
// NOTE: Not every value in val is considered while incrementing
// only those position that var corresponds are considered
void increment(vector<char>& var, vector<int>& val) {

	int carry = 1;
	for (int i = var.size() - 1; i >= 0; --i) {
		if (val[var[i] - 'A'] == 1 && carry == 1) {
			val[var[i] - 'A'] = 0;
		}
		else if (carry == 1) {
			val[var[i] - 'A'] = 1;
			carry = 0;
		}
	}

}

// this function prints truth table of a boolean expression - s
// for simplicity, each variable of the boolean expression is denoted by a uppercase alphabet
// the boolean expression should contain only 3 operators - " . " (AND), " + " (OR) and " ' " (NOT) 
void print_truth_table(string s) {

	vector<char> var;	// stores all variables that are present in bool expression s          
	vector<int> val(26, -1);	// stores value of each boolean variables
							// value of boolean variable 'A' is stored at val[0]
							// value of boolean variable 'B' is stored at val[1]
							// ....
							// value of boolean variable 'Z' is stored at val[25]
	string postfix; // stores postfix form of s
	int n;

	for (int i = 0; i < s.length(); ++i) {

		if (s[i] >= 'A' && s[i] <= 'Z' && val[s[i] - 'A'] == -1) {
			val[s[i] - 'A'] = 0;
			var.push_back(s[i]);
		}

	}

	postfix = Expression::infix_to_postfix(s); // returns the postfix of s
	n = var.size(); // number of variables in boolean expression

	cout << "\nTRUTH TABLE FOR INPUT BOOLEAN EXPRESSION\n";

	for (int i = 0; i < n; ++i) {
		cout << "-----------";
	}
	cout << endl;

	for (int i = 0; i < n; ++i) {
		cout << var[i] << setw(10);
	}
	cout << "f" << endl;

	for (int i = 0; i < pow(2, n); ++i) {

		for (int i = 0; i < n; ++i) {
			cout << val[var[i] - 'A'] << setw(10);
		}
		cout << Expression::evluate_postfix(postfix, val) << endl;
		increment(var, val);

	}

}

int main() {

	string s;
	cout << "Enter Boolean Expression: ";
	cin >> s;

	print_truth_table(s);

}
