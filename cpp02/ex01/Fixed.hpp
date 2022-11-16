#ifndef FIXED_CPP02_EX01_FIXED_H
#define FIXED_CPP02_EX01_FIXED_H

#include <iostream>

class Fixed {

	public:
		Fixed( void );
		Fixed( int const );
		Fixed( float const );
		Fixed( Fixed const & );

		~Fixed( void );

		Fixed & operator=( Fixed const & );

		int	getRawBits( void ) const;
		int	getWidth( void ) const;

		int		toInt( void ) const;
		float	toFloat( void ) const;
		void	setRawBits( int const raw );

	private:
		int		_number;
		int static const	_width = 8;
};

std::ostream & operator<<(std::ostream & out, Fixed const & rhs);

#endif
