#include <iostream>


void UserInputPrompt()
{
    std::cout << "Please choose:" << std::endl \
        << "rock (r) - paper (p) - scissors (s) or (q) for quit:" \
        << std::endl;
}

void UserIncorrectInputPrompt()
{
    std::cout << std::endl << std::endl \
        << "Your input is incorrect. Try again, please:" \
        << std::endl << std::endl;
}

char GetUserInput()
{
    char rock_paper_scissors_symbol{ 'q' };
    std::cin >> rock_paper_scissors_symbol;

    return rock_paper_scissors_symbol;
}

enum class UserChoice { rock = 0, paper, scissors, quit = 10, other };

UserChoice CheckUserInput(char user_input)
{
    switch (user_input)
    {
    case 'r':
        return UserChoice::rock;
        break;
    case 'p':
        return UserChoice::paper;
        break;
    case 's':
        return UserChoice::scissors;
        break;
    case 'q':
        return UserChoice::quit;
        break;
    default:
        return UserChoice::other;
        break;
    }
}



void RockPaperScissorsGameMainCycle()
{
    for (bool is_it_continuing{ true }; is_it_continuing; is_it_continuing = false)
    {
        UserInputPrompt();

        CheckUserInput(GetUserInput());

        
    }
}

int main()
{
    RockPaperScissorsGameMainCycle();
}