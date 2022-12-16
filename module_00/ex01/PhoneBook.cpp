#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->current = 0;
}

PhoneBook::~PhoneBook()
{
}

int	ft_phone_check(std::string phone_number)
{
	int track = 0;
	if (phone_number.at(0) == '+')
		track++;
	char store;
	int size = phone_number.size();
	for ( ; track < size; track++)
	{
		store = phone_number.at(track);
		if (store < '0' || store > '9')
			return (-1);
	}
	return (1);
}

void	PhoneBook::Add()
{
	std::cout << std::endl << "First Name: ";
	std::getline(std::cin, this->contact[this->current]->first_name);
	while (this->contact[this->current]->first_name.empty())
	{
		std::cout << "Please Give an Input: ";
		std::getline(std::cin, this->contact[this->current]->first_name);
	}
	std::cout << "Last Name: ";
	std::getline(std::cin, this->contact[this->current]->last_name);
	while (this->contact[this->current]->last_name.empty())
	{
		std::cout << "Please Give an Input: ";
		std::getline(std::cin, this->contact[this->current]->last_name);
	}
	std::cout << "NickName: ";
	std::getline(std::cin, this->contact[this->current]->nickname);
	while (this->contact[this->current]->nickname.empty())
	{
		std::cout << "Please Give an Input: ";
		std::getline(std::cin, this->contact[this->current]->nickname);
	}
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->contact[this->current]->phone_number);
	while (this->contact[this->current]->phone_number.empty() || ft_phone_check(this->contact[this->current]->phone_number) == -1)
	{
		std::cout << "Please Give a Valid Phone Number: ";
		std::getline(std::cin, this->contact[this->current]->phone_number);
	}
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->contact[this->current]->darkest_secret);
	while (this->contact[this->current]->darkest_secret.empty())
	{
		std::cout << "Please Give an Input: ";
		std::getline(std::cin, this->contact[this->current]->darkest_secret);
	}
	std::cout << std::endl;
	if (this->current > 6)
		this->current = 0;
	else
		this->current++;
}

void	ft_print_string(std::string temp)
{
	std::cout << "|";
	int len = 10 - temp.size();
	if (len > 0)
	{
		for ( ; len > 0; len--)
			std::cout << " ";
		std::cout << temp;
	}
	else
		std::cout << temp.substr(0, 9) << ".";
}

int	ft_input_check(std::string input, int max_index)
{
	int len = 0;
	int temp = max_index;
	if (max_index == 0)
		len = 1;
	else
	{
		for ( ; temp != 0; temp /= 10)
			len++;
	}
	int size = input.size();
	if (size > len)
		return (-1);
	int store;
	if (size == 1 && len == 1)
	{
		store = input.at(0) - '0';
		if (store >= 0 && store <= max_index)
			return (1);
		return (-1);
	}
	char check;
	for (int i = 0; i < size; i++)
	{
		check = input.at(i);
		if (check < '0' || check > '9' || (size == len && ((((max_index - (max_index % (int)pow(10, i))) / (max_index % (int)pow(10, i))) % 10) < (check - '0'))))
			return (-1);
	}
	return (1);
}

int	ft_atoi(std::string input)
{
	int output = 0;
	for (int track = input.size() - 1; track >= 0; track--)
		output = (output * 10) + (input.at(track) - '0');
	return (output);
}

void	PhoneBook::Search()
{
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First Name| LastName | NickName |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (this->contacts[0]->first_name == NULL)
	{
		std::cout << "|     NO CONTACTS CURRENTLY IN PHONEBOOK    |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl << std::endl;
		std::cout << "Unable to Search for Contact Details with no contacts." << std::endl << std::endl;
		return ;
	}
	int len;
	for (int len = 0; len < 8; len++)
	{
		if (this->contacts[len]->)
		std::cout << "|         " << len;
		ft_print_string(this->contact[this->current]->first_name);
		ft_print_string(this->contact[this->current]->last_name);
		ft_print_string(this->contact[this->current]->nickname);
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	std::cout << std::endl;
	std::string input;
	std::cout << "Enter Index for Contact Entry Details to be Displayed: ";
	std::getline(std::cin, input);
	while (ft_input_check(input, contacts_tail->index) == -1)
	{
		std::cout << "Invalid Input, Please Try Again: ";
		std::getline(std::cin, input);
	}
	std::cout << std::endl;
	int index = ft_atoi(input);
	for (temp = contacts_head; this->contact[this->current]->index != index; temp = this->contact[this->current]->next) {}
	std::cout << "First Name: " << this->contact[this->current]->first_name << std::endl << "Last Name: " << this->contact[this->current]->last_name << std::endl;
	std::cout << "NickName: " << this->contact[this->current]->nickname << std::endl << "Phone Number: " << this->contact[this->current]->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->contact[this->current]->darkest_secret << std::endl << std::endl;
}
