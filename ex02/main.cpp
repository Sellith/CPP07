/* *************************************************************************************************************** */
/*   main.cpp                                                                                                      */
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

#include "includes.hpp"
#include <iostream>

int main ( void )
{
	int					elements[5] = {5, 4, 78, 35, 95};
	std::string			strs[2] = {"this is strs's first element", "strs's second element"};
	Array<int>			a(5);
	Array<std::string>	b(2);

	a.setElements(elements, 5);
	b.setElements(strs, 2);
	std::cout << a << "A's size : " << a.size() << "\n";
	std::cout << b << "B's size : " << b.size() << "\n";
	try {
		std::cout << "trying A's 3rd element : " << a[2] << "\n";
		std::cout << "succeed" << "\n";
	}
	catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "trying B's 3rd element : " << b[2] << "\n";
		std::cout << "succeed" << "\n";
	}
	catch (std::out_of_range &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

}