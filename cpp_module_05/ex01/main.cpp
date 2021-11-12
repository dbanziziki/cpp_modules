#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat Pit("Pit", 150);
    Bureaucrat Kat("Kat", 1);
    Form f("base", 10, 1);

    Pit.signForm(f);
    Kat.signForm(f);
    return 0;
}
