#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &input);
		Bureaucrat &operator=(Bureaucrat const &input);
		Bureaucrat(std::string const name, unsigned int grade);

		std::string const	getName(void) const;
		unsigned int		getGrade(void) const;
		void				gradePlus(unsigned int input);
		void				gradeMinus(unsigned int input);

		void				signForm(Form &input) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Bureaucrat: Grade Too High");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Bureaucrat: Grade Too Low");
				}
		};

	private:
		const std::string	name;
		unsigned int		grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &input);

#endif