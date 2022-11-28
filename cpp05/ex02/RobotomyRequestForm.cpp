/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:56:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/25 15:57:09 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 145, 137, 0) {
	}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	: Form("RobotomyRequestForm", 145, 137, 0) {}
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) {
	this->Form::operator=(cpy);
	return (*this);
}



RobotomyRequestForm::~RobotomyRequestForm() {}



RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & cpy) {
	this->_signed = cpy.getSigned();
	return (*this);
}



void	RobotomyRequestForm::action() {
	std::ofstream	outfile.open(this->target + "_shrubbery");

	                                                                                
	outfile << "                                         * ";
	outfile  << "                                /*## */( ///  (/( ";
	outfile  << "                         .,( (*,##*(%./%//%/*.*/   //,. ";
	outfile  << "                       /%#((*,,*/#/#%(*(*/* */%/ **#(((// ";
	outfile  << "                    /(./#*##/**%(%///*#/***( ,((((#&&&(#*.. ";
	outfile  << "              .,.*(#(*//&%*#%,(##(##%(#((((/*(#%&/(/*%(#((#( ";
	outfile  << "           .#,((/#//%(/#*(%#*%%#&%%#((%&((#%*(/%&,###,#%%&%(/, ";
	outfile  << "          . /,((#**#(/#%*/##/(#%%&%%(/(%#%#(#,* %(%//%#*##%##//% ";
	outfile  << "        .  (# (&((%&%((%*#&&#/. *&&%(/@&&%#/*((##,(&(%&%#&*#((/.,/* ";
	outfile  << "      ,((/(*%%%##(*#%,/##/#%%(%&*/(((#&&%%%#%/#%( *&%(@//*/,%&%*.*#, ";
	outfile  << "         *(/#&%#%&%(#%#@###/#%%%%#%&%&##(%*%(&&#&%#%%/(##&&(#%&/##/#, ";
	outfile  << "         /,((@%(((#%((%%%%#(%/%&%*&%&%/%((&#((#&#%#%&%(&&#(%%&(%%&#((#&((. ";
	outfile  << "           ,. #**%%&#&%#&%#%%&%#*&,%%##/.#%%%#/#%%%%%&&&&&###%##*&/.%%#&%/ ";
 	outfile  << "     (   (/ ((%&%&%&#&%##&%(%%&%%&//(/#/%&%%%&#%/%#&%&%&(/%&%//(%(#(//*(( ";
 	outfile  << "   ,((/%*/%&(**%%(%&%%&%#%&#&&%&*(((//%#/(.##@(&&%@&&%###(%&*%%#(#&*/ ";
 	outfile  << "     /(#(((%%#%%&&%#&&&&%%&&&%&@(&%%#&%&&%(&#&#&&&&%&%/#%%&&*&&* #/ , ";
 	outfile  << "       ,(#(////&&&#*&#&%&&&&&%#&#&&&&&%&##.#%%%/%#%%%%%@&%&%(&&(/*%##%#*% ";
 	outfile  << "   ((#%#&%(/(#(%%#(%&&&&&%%&#%%%#/&@@(&#/#((#&&((((%%%&&&#(/((%(%*&&%%%%/# ";
 	outfile  << "     /&%%#(/#*/#(%#%&&%%%&&&##%%#(%%%(&&#%&%&###.#*(.%#&%%&%&(%%#&#@%%%## ";
 	outfile  << "    *(*%%%%%&&/((((#&&&@&&%#&#%&%%%#%%&&%#&/%/%&( (/*&&@&(%@%&(&#%#((%#(% ";
 	outfile  << "       ,*#/#(%#&%#%&##&.%&#(% &&#%#&%((&%%&#%&@%&#%#(.,%# %&&&@%@&*. ";
 	outfile  << "       %/*#%#&%%%%&#%%#(#/(##%#&%#(#%%&,*&  %%@%#%/&%#     %%&%%# ";
 	outfile  << "          %.(./%%%&#         #&&&(%%          (%.#%%/( ";
 	outfile  << "             (/### *            *### ";
 	outfile  << "                                .#(* ";
 	outfile  << "                                #((/ ";
 	outfile  << "                                ((// ";
 	outfile  << "                                (/(/ ";
 	outfile  << "                                */(( ";
 	outfile  << "                       .,**(/(*/*/((#(#((//,. ";
                                                                                
}



std::ostream &	operator<<(std::ostream & out, RobotomyRequestForm const & hrs) {
	out << hrs.getName() << ", RobotomyRequestForm signed: " << hrs.getSigned()
		<< ", RobotomyRequestForm grade signed: " << hrs.getGradeSigned()
		<< ", RobotomyRequestForm grade exec: " << hrs.getGradeExec();
	return (out);
}
