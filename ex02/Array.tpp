/* *************************************************************************************************************** */
/*   Array.tpp                                                                                                  */
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

template <typename T>
Array<T>::Array ( void ) : size_(0), elements_(0) {}

template <typename T>
Array<T>::Array ( unsigned int n ) : size_(n)
{
	elements_ = new T[n];
}

template <typename T>
Array<T>::Array ( Array const & src ) : size_(src.size_) 
{
	elements_ = new T[size_];
	for (size_t i = 0; i < size_; i++)
		elements_[i] = src.elements_[i];
}

template <typename T>
Array<T>::~Array ( void )
{
	delete [] elements_;
}

template <typename T>
Array<T> &	Array<T>::operator= ( Array const & src )
{
	if (this != &src) {
		size_ = src.size_;
		for (size_t i = 0; i < size_; i++)
			elements_[i] = src.elements_[i];
	}
	return ( *this );
}

static std::string const getColor ( size_t index )
{
	switch (index % 6)
	{
		case 0: return (_RED);
		case 1: return (_GREEN);
		case 2: return (_YELLOW);
		case 3: return (_PURPLE);
		case 4: return (_CYAN);
		default: return (_WHITE);
	}
}

template <typename T>
std::ostream & operator<< ( std::ostream & o, Array<T> const & src )
{
	T * 	tmp = src.getElements();
	size_t	itmp = src.size();
	for( size_t i = 0; i < itmp; i++) {
		o << getColor(i) << tmp[i];
		if (i < itmp - 1)
			o << ", ";
	}
	o << _WHITE << std::endl;
	return (o);
}

template <typename T>
T & Array<T>::operator[] ( size_t index )
{
	if (!elements_)
		throw std::out_of_range("elements_ not initialised");
	if (index >= size_)
		throw std::out_of_range("index out of reach");
	return (elements_[index]);
}

/* Array size getter */

template <typename T>
size_t	Array<T>::size ( void ) const
{return (size_);}

/* Array elements getter */

template <typename T>
T *	Array<T>::getElements ( void ) const
{return (elements_);}

template <typename T>
T & Array<T>::getElementIndex ( size_t index )
{return ((*this)[index]);}

/* Array elements setter */

template <typename T>
void Array<T>::setElements ( T * p_elements, size_t const p_size )
{
	size_t element_size;

	if (p_size < size_)
		element_size = p_size;
	else
		element_size = size_;
	for ( size_t i = 0; i < element_size; i++)
		elements_[i] = p_elements[i];
}

/* Array elements Add one */

template <typename T>
void	Array<T>::addOneElement ( T & p_element )
{
	T *	tmp = new T[size_ + 1];
	for (size_t i = 0; i < size_; i++)
		tmp[i] = elements_[i];
	tmp[size_] = p_element;
	delete [] elements_;
	elements_ = tmp;
	size_++;
}