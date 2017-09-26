#include<iostream>
#include<stack>
using namespace std;

#define STRING_SIZE 10

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i ++) {
            if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) {
                st.push(s[i]); // add to the stack
            } else {
                if (st.size() == 0) return false;
                char top = st.top();
                if (s[i] == ')') {
                    if (top != '(') return false;
                } else if (s[i] == ']') {
                    if (top != '[') return false;
                } else {
                    if (top != '{') return false;
                }
                st.pop(); // remove a top element from the stack
            }
        }
        return st.size() == 0;
    }
};

int main(){
  Solution sln;
  char st[STRING_SIZE];
  cout << "Enter a string: ";
  cin >> st;
 
  cout << sln.isValid(st) << endl;
 return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
#include<iostream>
#include<string>
using namespace std;

#define STACK_SIZE 10

class Stack
{
  int date_[STACK_SIZE];
  int top_;
public:
    Stack ()
  {
    top_ = 0;
  }
  bool is_empty ()
  {
    return top_ == 0;
  }
  bool is_full ()
  {
    return top_ == STACK_SIZE;
  }
  void push (int value)
  {
    if (is_full ())
      {
	cout << "OOOPS! Stack is full! f@#?!k" << endl;
	return;
      }
    date_[top_++] = value;
  }
  char pop ()
  {
    if (is_empty ())
      {
	cout << "OOOPS! Stack is empty! f@#?!k" << endl;
	return false;
      }
    return date_[--top_];
  }
  char top ()
  {
    return date_[--top_];
  }

};

int
main ()
{
  bool isValid = true;
  char str[STACK_SIZE];
  cout << "Enter a string: ";
  cin >> str;
  int lenght = 0;
  for (; str[lenght] != '\0'; lenght++)
    {
    }
  Stack st;
  for (int i = 0; i < lenght; i++)
    {
      if ((str[i] == '(') || (str[i] == '[') || (str[i] == '{'))
	{
	  st.push (str[i]);
	}
      else
	{
	  if (st.is_empty () == 0)
	    {
	      isValid = false;
	      break;
	    }
	  char top = st.top ();
	  if (str[i] == ')')
	    {
	      if (top == '(')
		{
		  isValid = false;
		  break;
		}
	      else if (str[i] == ']')
		{
		  if (top != '[')
		    {
		      isValid = false;
		      break;
		    }
		}
	      else
		{
		  if (top != '{')
		    {
		      isValid = false;
		      break;
		    }
		}
	      st.pop ();
	    }
	}

      if (isValid)
	{
	  cout << "It's valid!" << endl;
	}
      else
	{
	  cout << "It's not valid!" << endl;
	}
      if (st.is_empty ())
	{
	  cout << "Date's empty." << endl;
	}
      else
	{
	  cout << "Date's no empty." << endl;
	}


      return 0;
    }
}
*/
