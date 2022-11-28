/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:56:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/25 15:57:09 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137, 0) {
	}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	: Form("ShrubberyCreationForm", 145, 137, 0) {}
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy) {
	this->Form::operator=(cpy);
	return (*this);
}



ShrubberyCreationForm::~ShrubberyCreationForm() {}



ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & cpy) {
	this->_signed = cpy.getSigned();
	return (*this);
}



void	ShrubberyCreationForm::action() {
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



std::ostream &	operator<<(std::ostream & out, ShrubberyCreationForm const & hrs) {
	out << hrs.getName() << ", ShrubberyCreationForm signed: " << hrs.getSigned()
		<< ", ShrubberyCreationForm grade signed: " << hrs.getGradeSigned()
		<< ", ShrubberyCreationForm grade exec: " << hrs.getGradeExec();
	return (out);
}
