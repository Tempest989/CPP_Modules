#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", "Default", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &input) : Form(input.getName(), input.getTarget(), input.getSignMin(), input.getSignExecute())
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = input;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const input) : Form("ShrubberyCreationForm", input, 145, 137)
{
	std::cout << "ShrubberyCreationForm string custom constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &input)
{
	std::cout << "ShrubberyCreationForm Copy Assignment operator called" << std::endl;
	this->Form::operator=(input);
	return (*this);
}

void	ShrubberyCreationForm::run_execute(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	char temp[this->getTarget().size() + 11];
	long unsigned int track = 0;
	for ( ; track < this->getTarget().size(); track++)
		temp[track] = this->getTarget().at(track);
	const char *end = "_shubbery";
	for (int j = 0 ; j <  11; j++)
		temp[track + j] = end[j];
	std::ofstream outfile(temp);
	if (!outfile.is_open())
		throw std::ofstream::failure("Could not open file " + this->getTarget() + "_shrubbery");
	outfile << "          .     .  .      +     .      .          ." << std::endl;
	outfile << "     .       .      .     #       .           ." << std::endl;
	outfile << "        .      .         ###            .      .      ." << std::endl;
	outfile << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
	outfile << "          .      . \"####\"###\"####\"  ." << std::endl;
	outfile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
	outfile << "  .             \"#########\"#########\"        .        ." << std::endl;
	outfile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
	outfile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
	outfile << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
	outfile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
	outfile << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
	outfile << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
	outfile << "            .     \"      000      \"    .     ." << std::endl;
	outfile << "       .         .   .   000     .        .       ." << std::endl;
	outfile << ".. .. ..................O000O........................ ...... ..." << std::endl;
	outfile.close();
	std::cout << "Shrubbery Creation Form Successfully Executed." << std::endl;
}
