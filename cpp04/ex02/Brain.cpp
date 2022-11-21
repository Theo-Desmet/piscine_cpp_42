/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:13:11 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/21 15:27:06 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

Brain::Brain() {
	this->_ideas[0] = "want to eat 🥫";
	this->_ideas[1] = "want to sleep 💤";
	this->_ideas[2] = "want to play 🪀";
	for (size_t i = 3; i < 100; i++) {
		this->_ideas[i] = "have some randome ideas";
	}
	std::cout << "\033[1;35mBrain\033[1;0m🧠 default Constructor called" << std::endl;
}

Brain::Brain(Brain const & cpy) {
	for (size_t i = 0; i < 100; i++) {
		this->_ideas[i] = cpy.getIdeas(i);
	}
	std::cout << "\033[1;35mBrain\033[1;0m🧠 copy Constructor called" << std::endl;
}



Brain::~Brain() {
	std::cout << "\033[1;35mBrain\033[1;0m🧠 default Destructor called" << std::endl;
}



Brain & Brain::operator=(Brain const & cpy) {
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = cpy.getIdeas(i);
	}
	return (*this);
}



std::string 	Brain::getIdeas(size_t index) const {
	return (this->_ideas[index]);
}



std::ostream & operator<<(std::ostream & out, Brain const & hrs) {
	for (size_t i = 0; i < 100; i++) {
		out << hrs.getIdeas(i);
	}
	return (out);
}
