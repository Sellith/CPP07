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

int main ( void )
{
	int			intRes[3] = { 65, 42, 69 };

	std::string	strRes = "Le resultat sera modifié";

	std::cout << CYAN << "int Res before iter : " << intRes[0] << " " << intRes[1] << " " << intRes[2] << "\n";
	std::cout << "str Res before iter : " << strRes << "\n";

	::iter(&strRes[0], strRes.size(), add_one<char>);
	::iter(intRes, 3, add_one<int>);

	std::cout << WHITE << "int Res after iter : " << intRes[0] << " " << intRes[1] << " " << intRes[2] << "\n";
	std::cout << "str Res after iter : " << strRes << RESET << std::endl;

	::iter(&strRes[0], strRes.size(), min_one<char>);
	::iter(intRes, 3, min_one<int>);

	std::cout << YELLOW << "int Res after min : " << intRes[0] << " " << intRes[1] << " " << intRes[2] << "\n";
	std::cout << "str Res after min : " << strRes << WHITE << std::endl;

	::iter("end of ex01 !\n", 14, print<char>);
	std::cout << RESET;
}