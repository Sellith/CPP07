/* *************************************************************************************************************** */
/*   Array.hpp                                                                                                     */
/*   By: lvan-bre                                                                   .,                             */
/*                                                                                 okxl                            */
/*                                                                                xkddo                            */
/*                                                                               kkxddo                            */
/*                                                                              lxxddol                            */
/*                                                                              xxdolol.                           */
/*                                                                             :kxdddddl                 .ox,      */
/*                                                                       ..,cdkOOkkkxdddd'      ;o.     ckkd,      */
/*                                                               .,:coxOOOkkkkkkkxxxxxddddo:...lxdl.   ckkxd.      */
/*                                                           ;oxOOOOkkxxkxxxxxxxxxxdddddodddxxxkkxxxdlckkxdd.      */
/*                                                        ,oOOOkkkkxxxdddxdddddddddddddoooooodooddddooooddooc      */
/*                                                      ;kkkkkxxxxxddoooooooooooooooooooooooooollooooooololll      */
/*                                                     oxodddddoooooolllllllolooooollloooollllolllllloooolccl;     */
/*                                                    'x:::cclccllllccccccccccclllclllllllllllllllll     .;;cl;    */
/*                                                    d;c::cc:cc:::;::c:c:cccccclccc:cccclllllll,         .:cl.    */
/*                                                      c;,;:;;::::;;::::c..,cccllcc:c;;:lloodk.                   */
/*                                                        'ooooooooodddxxkkkOOOkOOOOOOc:cclllloo'                  */
/*                                                           .XXXXXXXKKXXXXXXXXXXXXXXXkcccclcccllo                 */
/*                                                                 ,KKKKKXXXXXXXXXXXXK0.  .:ccllclll;.             */
/*                                                                                           .ccccccllc,.          */
/*                                                                                                 :::cl:          */
/*                                                                                                                 */
/* *************************************************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

# define _RED		"\e[1;91m"
# define _GREEN		"\e[1;92m"
# define _YELLOW	"\e[1;93m"
# define _PURPLE	"\e[1;95m"
# define _CYAN		"\e[1;96m"
# define _WHITE		"\e[1;97m"
# define _RESET		"\e[0m"

enum e_colors {
	RED,
	GREEN,
	YELLOW,
	PURPLE,
	CYAN,
	WHITE,
	RESET
};

template <typename T>
class Array 
{

public:

	Array ( void );
	Array ( unsigned int n );
	Array ( Array const & src );
	~Array ( void );
	
	Array &		operator= ( Array const & src );
	T & 		operator[] ( size_t index );
	size_t		size ( void ) const;

	T *			getElements ( void ) const;
	T &			getElementIndex ( size_t index );
	void		setElements ( T * elements, size_t size );
	void		addOneElement ( T & element );

private:

	T *		elements_;
	size_t	size_;

};

template <typename T>
std::ostream &	operator<< ( std::ostream & o, Array<T> const & src );

#include "Array.tpp"

#endif