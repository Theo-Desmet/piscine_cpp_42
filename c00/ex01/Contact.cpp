/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:36:18 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/26 09:03:56 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string Contact::getFirstName(void) const{
	return (_first_name);
}

std::string Contact::getLastName(void) const{
	return (_last_name);
}

std::string Contact::getNickName(void) const{
	return (_nickname);
}

std::string Contact::getSecret(void) const{
	return (_secret);
}

std::string Contact::getPhone(void) const{
	return (_phone);
}

void Contact::setFirstName(std::string const line) {
	_first_name = line;
	return ;
}

void Contact::setLastName(std::string const line) {
	_last_name = line;
	return ;
}

void Contact::setNickName(std::string const line) {
	_nickname = line;
	return ;
}

void Contact::setSecret(std::string const line) {
	_secret = line;
	return ;
}

void Contact::setPhone(std::string const line) {
	_phone = line;
	return ;
}
