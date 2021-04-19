/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:52:20 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 18:52:21 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string ShrubberyCreationForm::_treeArt = 
	"                                                         .\n"
	"											.         ;  \n"
	"				.              .              ;%     ;;   \n"
	"				,           ,                :;%  %;   \n"
	"					:         ;                   :;%;'     .,   \n"
	"		,.        %;     %;            ;        %;'    ,;\n"
	"			;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
	"			%;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
	"			;%;      %;        ;%;        % ;%;  ,%;'\n"
	"				`%;.     ;%;     %;'         `;%%;.%;'\n"
	"				`:;%.    ;%%. %@;        %; ;@%;%'\n"
	"					`:%;.  :;bd%;          %;@%;'\n"
	"					`@%:.  :;%.         ;@@%;'   \n"
	"						`@%.  `;@%.      ;@@%;         \n"
	"						`@%%. `@%%    ;@@%;        \n"
	"							;@%. :@%%  %@@%;       \n"
	"							%@bd%%%bd%%:;     \n"
	"								#@%%%%%:;;\n"
	"								%@@%%%::;\n"
	"								%@@@%(o);  . '         \n"
	"								%@@@o%;:(.,'         \n"
	"							`.. %@@@o%::;         \n"
	"							`)@@@o%::;         \n"
	"								%@@(o)::;        \n"
	"							.%@@@@%::;         \n"
	"							;%@@@@%::;.          \n"
	"							;%@@@@%%:;;;. \n"
	"						...;%@@@@@%%:;;;;,..    Gilo97\n"
;

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery Creation Form", target, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &arg) : Form(arg)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &arg)
{
	Form::operator=(arg);

	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream ofs;

	Form::execute(executor);
	ofs.open(this->getTarget() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (!ofs.is_open())
		throw FileOpenException();
	ofs << this->_treeArt;
	ofs.close();
}

const char*	ShrubberyCreationForm::FileOpenException::what(void) const throw()
{
	return ("Exception Error : File Open Error!");
}
