#include <iostream>

int main()
{
    int c;
    std::cin >> c;
    try
    {
        if (c < 10)
            throw std::out_of_range("Invalid Input!!");
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }
    return 0;
}

// bool funcA() {
//     int c;
//     std::cin >> c;
//     if (c < 10) //Let's assume this is exception
//         return false;
//     return true;
// }
// int main() {
//     if (funcA()){

//     }
//     else {
//         std::cout << "Exception : Invalid Input!!" << std::endl;
//     }
//     return 0;
// }