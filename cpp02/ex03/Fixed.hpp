#ifndef FIXED_EX00_FIXED_H
#define FIXED_EX00_FIXED_H

#include <iostream>

class Fixed {

	public:
		Fixed( void );
		Fixed( int const );
		Fixed( float const );
		Fixed( Fixed const & );
		~Fixed( void );

		Fixed & operator=( Fixed const & );

		bool	operator>( Fixed const & );
		bool	operator<( Fixed const & );
		bool	operator>=( Fixed const & );
		bool	operator<=( Fixed const & );
		bool	operator!=( Fixed const & );
		bool	operator==( Fixed const & );

		Fixed	operator-( Fixed const & );
		Fixed	operator+( Fixed const & );
		Fixed	operator*( Fixed const & );
		Fixed	operator/( Fixed const & );

		Fixed	operator++( int );
		Fixed &	operator++( void );
		Fixed	operator--( int );
		Fixed &	operator--( void );

		int		getRawBits( void ) const;
		int		getWidth( void ) const;
		void	setRawBits( int const );

		int				toInt( void ) const;
		float			toFloat( void ) const;
		Fixed static &			min( Fixed &, Fixed & );
		Fixed static const &	min( Fixed const &, Fixed const & );
		Fixed static &			max( Fixed &, Fixed & );
		Fixed static const &	max( Fixed const &, Fixed const & );


	private:
		int		_number;
		int static const	_width = 8;
};

std::ostream & operator<<(std::ostream & out, Fixed const & rhs);

#endif
