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

#include "template.hpp"

int main( void ) {
    int a = 2;
    int b = 3;
    std::cout << "pre swap : a = " << a << ", b = " << b << "\n";

    ::swap( a, b );
    std::cout << "post swap : a = " << a << ", b = " << b << "\n";

    std::cout << "min( a, b ) = " << ::min( a, b ) << "\n";
    std::cout << "max( a, b ) = " << ::max( a, b ) << "\n\n";

    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "pre swap : c = " << c << ", d = " << d << "\n";

    ::swap(c, d);
    std::cout << "post swap : c = " << c << ", d = " << d << "\n";
	
    std::cout << "min( c, d ) = " << ::min( c, d ) << "\n";
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return (0);
}