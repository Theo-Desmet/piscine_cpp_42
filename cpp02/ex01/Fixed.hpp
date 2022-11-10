#ifndef FIXED_EX00_FIXED_H
#define FIXED_EX00_FIXED_H

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
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int	toInt( void ) const;

	private:
		int		_number;
		int static const	_width = 8;
};

#endif
