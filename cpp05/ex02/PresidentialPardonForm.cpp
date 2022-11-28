/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:56:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/25 15:57:09 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 145, 137, 0) {
	}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
	: Form("PresidentialPardonForm", 145, 137, 0) {}
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy) {
	this->Form::operator=(cpy);
	return (*this);
}



PresidentialPardonForm::~PresidentialPardonForm() {}



PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & cpy) {
	this->_signed = cpy.getSigned();
	return (*this);
}



void	PresidentialPardonForm::action() {
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



std::ostream &	operator<<(std::ostream & out, PresidentialPardonForm const & hrs) {
	out << hrs.getName() << ", PresidentialPardonForm signed: " << hrs.getSigned()
		<< ", PresidentialPardonForm grade signed: " << hrs.getGradeSigned()
		<< ", PresidentialPardonForm grade exec: " << hrs.getGradeExec();
	return (out);
}
