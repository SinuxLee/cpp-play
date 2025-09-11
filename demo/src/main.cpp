#include <iostream>
#include <memory>

class Demo{
public:
    Demo(){
        std::cout << "ctr" << std::endl;
    }
    ~Demo(){
        std::cout << "dctr" << std::endl;
    }

    static void Say(){
        std::cout << "somthing" << std::endl;
    }
};

#define CAT(A, B) A##B
#define SELECT(NAME, NUM) _CAT(NAME##_, NUM)

std::unique_ptr<Demo> test(std::unique_ptr<Demo> ptr){
    ptr->Say();
    return ptr;
}

int main(int argc, char** argv) {
    auto ptr = std::make_unique<Demo>();
    test(std::move(ptr)); 
    std::cout << "end" << std::endl;
    return 0;
}
