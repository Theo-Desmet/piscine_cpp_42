/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:28:29 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/26 09:02:48 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include "header.h"

class Contact {

	public:
		Contact(void);
		~Contact(void);
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getSecret(void) const;
		std::string getPhone(void) const;
		void		setFirstName(std::string const first_name);
		void		setLastName(std::string const last_name);
		void		setNickName(std::string const nickname);
		void		setSecret(std::string const secret);
		void		setPhone(std::string const phone);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_secret;
		std::string	_phone;
};

#endif
