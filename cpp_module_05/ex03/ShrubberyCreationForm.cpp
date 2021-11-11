#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", "", 19, 19) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
    : Form(target, "ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
    : Form(src) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(
    ShrubberyCreationForm const &rhs) {
    Form::operator=(rhs);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::action(Bureaucrat const &executor) {
    Form::execute(executor);
    std::ofstream ofs(this->getTarget() + "_shrubbery");

    if (!ofs.good()) {
        std::cout << "Error creating the file" << std::endl;
        return;
    }
    ofs << "	   		  ,@@@@@@@," << std::endl;
    ofs << "	  ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    ofs << "	,&%%&%&&%,@@@@@/@@@@@@,8888888/8o" << std::endl;
    ofs << "	,%&&&&&%&&%,@@@@@@@/@@@88888888/88'" << std::endl;
    ofs << "	%&&%&%&/%&&%@@@@@/ /@@@88888888888'" << std::endl;
    ofs << "	%&&%/ %&%%&&@@| V /@@' `8888 `/88'" << std::endl;
    ofs << "	`&%| ` /%&'    |.|        | '|8'" << std::endl;
    ofs << "	   |o|         | |        | |" << std::endl;
    ofs << "	   |.|         | |        | |" << std::endl;
    ofs << "	jgs \\/ ._  /_/  ,//__\\/. _//__/_" << std::endl;
    ofs.close();
}

Form *ShrubberyCreationForm::create(std::string const &target) {
    return new ShrubberyCreationForm(target);
}