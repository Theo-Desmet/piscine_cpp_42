/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:28:29 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/21 11:08:46 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include "header.h"

class Contact {

	public:
		Contact(void);
		~Contact(void);
		std::string GetFirstName(void) const;
		std::string GetLastName(void) const;
		std::string GetNickName(void) const;
		std::string GetSecret(void) const;
		std::string GetPhone(void) const;
		void		SetFirstName(std::string const first_name);
		void		SetLastName(std::string const last_name);
		void		SetNickName(std::string const nickname);
		void		SetSecret(std::string const secret);
		void		SetPhone(std::string const phone);

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	secret;
		std::string	phone;
};

#endif
