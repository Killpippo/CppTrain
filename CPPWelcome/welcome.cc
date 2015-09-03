//#include <boost/lambda/lambda.hpp>
//#include <iostream>
//#include <iterator>
//#include <algorithm>
//
//int main(int argc, char**argv) {
//    // Prints welcome message...
//    std::cout << "Welcome ..." << std::endl;
//
//    // Prints arguments...
//    if (argc > 1) {
//        std::cout << std::endl << "Arguments:" << std::endl;
//        for (int i = 1; i < argc; i++) {
//            std::cout << i << ": " << argv[i] << std::endl;
//        }
//    }
//    
//    using namespace boost::lambda;
//    typedef std::istream_iterator<int> in;
//
//    std::for_each(
//        in(std::cin), in(), std::cout << (_1 * 3) << " " );
//    
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

long factorial(int arg) {
    long result = 1;
    int i;
    for (i = 2; i <= arg; ++i) {
        result *= i;
     }
    return result;
}

int main(int argc, char** argv) {
    printf("Type an integer and press Enter to calculate the integer's factorial: \n");
    int arg;
    fflush(stdout);
    
    vbxcvb   xcvb
    
    scanf("%d", &arg);
    
    printf("factorial(%d) = %ld\n", arg, factorial(arg));

    return (EXIT_SUCCESS);
}
