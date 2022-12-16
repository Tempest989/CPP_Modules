#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		virtual ~Form();
		Form(const Form &input);
		Form &operator=(Form const &input);
		Form(std::string const name, std::string const spotted, unsigned int min, unsigned int exe);

		std::string const	getName(void) const;
		std::string const	getTarget(void) const;
		unsigned int		getSignMin(void) const;
		unsigned int		getSignExecute(void) const;
		bool				getBeenSign(void) const;

		void				beSigned(Bureaucrat const &input);
		void				execute(Bureaucrat const &executor) const;
		virtual void		run_execute(Bureaucrat const &input) const = 0;

		class NotSignedException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Form: Not Signed");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Form: Grade Too High");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Form: Grade Too Low");
				}
		};

	private:
		const std::string	name;
		const std::string	target;
		const unsigned int	sign_min;
		const unsigned int	sign_exe;
		bool				been_signed;
};

std::ostream &operator<<(std::ostream &out, const Form &input);

#endif