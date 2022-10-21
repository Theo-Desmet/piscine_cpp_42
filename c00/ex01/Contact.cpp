/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:36:18 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/21 11:23:38 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string Contact::GetFirstName(void) const{
	return (first_name);
}

std::string Contact::GetLastName(void) const{
	return (last_name);
}

std::string Contact::GetNickName(void) const{
	return (nickname);
}

std::string Contact::GetSecret(void) const{
	return (secret);
}

std::string Contact::GetPhone(void) const{
	return (phone);
}

void Contact::SetFirstName(std::string const line) {
	first_name = line;
	return ;
}

void Contact::SetLastName(std::string const line) {
	last_name = line;
	return ;
}

void Contact::SetNickName(std::string const line) {
	nickname = line;
	return ;
}

void Contact::SetSecret(std::string const line) {
	secret = line;
	return ;
}

void Contact::SetPhone(std::string const line) {
	phone = line;
	return ;
}
