// 请参考foo.cpp 文件，实现 bar.cpp
// 你需要实现my_lib::bar::speak函数，需要实现my_lib::create_bar函数

module my_lib;

import std;

namespace my_lib{
    std::string bar::speak(){
        return "bar";
    }

    bar& create_bar(){
        static bar b;
        return b;
    }
}