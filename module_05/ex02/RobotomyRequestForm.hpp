#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &input);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &input);
		RobotomyRequestForm(std::string const input);

		void	run_execute(Bureaucrat const &executor) const;
};

#endif