#include <iostream>

void main()
{
    auto a = true;
    auto b = 'A';
    auto c = 'A';
    auto d = "문자열";
    auto e = 3;
    auto f = 3.0;

    std::cout<< "값\t크기\t자료형" << std::endl;
    std::cout<< a << '\t' << sizeof(a) << '\t' << typeid(a).name() << std::endl;
    std::cout<< b << '\t' << sizeof(b) << '\t' << typeid(b).name() << std::endl;
    std::cout<< c << '\t' << sizeof(c) << '\t' << typeid(c).name() << std::endl;
    std::cout<< d << '\t' << sizeof(d) << '\t' << typeid(d).name() << std::endl;
    std::cout<< e << '\t' << sizeof(e) << '\t' << typeid(e).name() << std::endl;
    std::cout<< f << '\t' << sizeof(f) << '\t' << typeid(f).name() << std::endl;
}

﻿
