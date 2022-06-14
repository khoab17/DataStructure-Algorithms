#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct Bracket {
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};


int main() {
    std::string text;
    getline(std::cin, text);
    

    std::stack <Bracket> opening_brackets_stack;
    int first_inc_index=-1;

    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {
            // Process opening bracket, write your code here
            Bracket *b=new Bracket(next,position+1);
            opening_brackets_stack.push(*b);
        }

        if (next == ')' || next == ']' || next == '}') {
            // Process closing bracket, write your code here
            if(opening_brackets_stack.size()==0)
            {
                first_inc_index=position+1;
                break;
            }
            else if(opening_brackets_stack.top().Matchc(next))
            {
                opening_brackets_stack.pop();
            }
            else{
                first_inc_index=position+1;
                break;
            }
        }
    }


    // Printing answer, write your code here

    if(first_inc_index==-1 && opening_brackets_stack.size()==0)
    {
        cout<<"Success"<<endl;
    }
    else{
        if(first_inc_index==-1 && opening_brackets_stack.size()!=0)
        {
            first_inc_index=opening_brackets_stack.top().position;
        }
        cout<<first_inc_index<<endl;
    }
    return 0;
}
