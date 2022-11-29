/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:56:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 13:55:21 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	Form("ShrubberyCreationForm", 145, 137) , _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy) :
	Form(cpy) {}



ShrubberyCreationForm::~ShrubberyCreationForm() {}



ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & cpy) {
	this->Form::operator=(cpy);
	return (*this);
}



std::string	ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}



void	ShrubberyCreationForm::action() const {
	std::ofstream	ofs((this->_target + "_shrubbery").c_str());
	if (!ofs.is_open())
		return ;

	ofs << "                                         * " << std::endl;
	ofs  << "                                /*## */( ///  (/( " << std::endl;
	ofs  << "                         .,( (*,##*(%./%//%/*.*/   //,. " << std::endl;
	ofs  << "                       /%#((*,,*/#/#%(*(*/* */%/ **#(((// " << std::endl;
	ofs  << "                    /(./#*##/**%(%///*#/***( ,((((#&&&(#*.. " << std::endl;
	ofs  << "              .,.*(#(*//&%*#%,(##(##%(#((((/*(#%&/(/*%(#((#( " << std::endl;
	ofs  << "           .#,((/#//%(/#*(%#*%%#&%%#((%&((#%*(/%&,###,#%%&%(/, " << std::endl;
	ofs  << "          . /,((#**#(/#%*/##/(#%%&%%(/(%#%#(#,* %(%//%#*##%##//% " << std::endl;
	ofs  << "        .  (# (&((%&%((%*#&&#/. *&&%(/@&&%#/*((##,(&(%&%#&*#((/.,/* " << std::endl;
	ofs  << "      ,((/(*%%%##(*#%,/##/#%%(%&*/(((#&&%%%#%/#%( *&%(@//*/,%&%*.*#, " << std::endl;
	ofs  << "         *(/#&%#%&%(#%#@###/#%%%%#%&%&##(%*%(&&#&%#%%/(##&&(#%&/##/#, " << std::endl;
	ofs  << "         /,((@%(((#%((%%%%#(%/%&%*&%&%/%((&#((#&#%#%&%(&&#(%%&(%%&#((#&((. " << std::endl;
	ofs  << "           ,. #**%%&#&%#&%#%%&%#*&,%%##/.#%%%#/#%%%%%&&&&&###%##*&/.%%#&%/ " << std::endl;
 	ofs  << "     (   (/ ((%&%&%&#&%##&%(%%&%%&//(/#/%&%%%&#%/%#&%&%&(/%&%//(%(#(//*(( " << std::endl;
 	ofs  << "   ,((/%*/%&(**%%(%&%%&%#%&#&&%&*(((//%#/(.##@(&&%@&&%###(%&*%%#(#&*/ " << std::endl;
 	ofs  << "     /(#(((%%#%%&&%#&&&&%%&&&%&@(&%%#&%&&%(&#&#&&&&%&%/#%%&&*&&* #/ , " << std::endl;
 	ofs  << "       ,(#(////&&&#*&#&%&&&&&%#&#&&&&&%&##.#%%%/%#%%%%%@&%&%(&&(/*%##%#*% " << std::endl;
 	ofs  << "   ((#%#&%(/(#(%%#(%&&&&&%%&#%%%#/&@@(&#/#((#&&((((%%%&&&#(/((%(%*&&%%%%/# " << std::endl;
 	ofs  << "     /&%%#(/#*/#(%#%&&%%%&&&##%%#(%%%(&&#%&%&###.#*(.%#&%%&%&(%%#&#@%%%## " << std::endl;
 	ofs  << "    *(*%%%%%&&/((((#&&&@&&%#&#%&%%%#%%&&%#&/%/%&( (/*&&@&(%@%&(&#%#((%#(% " << std::endl;
 	ofs  << "       ,*#/#(%#&%#%&##&.%&#(% &&#%#&%((&%%&#%&@%&#%#(.,%# %&&&@%@&*. " << std::endl;
 	ofs  << "       %/*#%#&%%%%&#%%#(#/(##%#&%#(#%%&,*&  %%@%#%/&%#     %%&%%# " << std::endl;
 	ofs  << "          %.(./%%%&#         #&&&(%%          (%.#%%/( " << std::endl;
 	ofs  << "             (/### *            *### " << std::endl;
 	ofs  << "                                .#(* " << std::endl;
 	ofs  << "                                #((/ " << std::endl;
 	ofs  << "                                ((// " << std::endl;
 	ofs  << "                                (/(/ " << std::endl;
 	ofs  << "                                */(( " << std::endl;
 	ofs  << "                       .,**(/(*/*/((#(#((//,. " << std::endl;
}



std::ostream &	operator<<(std::ostream & out, ShrubberyCreationForm const & hrs) {
	out << hrs.getName() << ", signed: " << hrs.getSigned()
		<< ", grade signed: " << hrs.getGradeSigned()
		<< ", grade exec: " << hrs.getGradeExec()
		<< ", target: " << hrs.getTarget();
	return (out);
}
