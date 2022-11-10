#ifndef FIXED_EX00_FIXED_H
#define FIXED_EX00_FIXED_H

class Fixed {
	
	public:
		Fixed( void );
		Fixed( Fixed const & );
		~Fixed( void );
		Fixed & operator=( Fixed const & );

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int		_number;
		int static const	_width = 8;
};

#endif
