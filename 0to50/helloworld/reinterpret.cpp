#include <iostream>

class Base {
public:
     void show() const {
         std::cout << "Base class" << std::endl;
     }
     void hi() const {
         std::cout << "Base hi" << std::endl;
     }
};

class Derived : public Base {
public:
    void shows() const{
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    // Baseクラスのオブジェクトを生成
    Base baseObj;

	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(Base) << std::endl;

    // Baseクラスのポインタを生成
    Base* basePtr = &baseObj;

    // basePtrをDerivedクラスのポインタにreinterpret_cast
    Derived* derivedPtr = reinterpret_cast<Derived*>(basePtr);
	std::cout << sizeof(*derivedPtr) << std::endl;

    // reinterpret_castを使用すると、コンパイルは通るが、実際のオブジェクトがBaseのままであるため、
    // 実行時に予測できない動作を引き起こす可能性がある（未定義の動作）
    // 正確なオブジェクト型を確認するためには、dynamic_castを使用するべきである

    // 実際のオブジェクトの型はBaseクラスのままであるため、Derivedクラスのshowメソッドが呼び出されない
    derivedPtr->hi(); // 予測できない動作を引き起こす可能性があるので避けるべき
    derivedPtr->shows(); // 予測できない動作を引き起こす可能性があるので避けるべき


    return 0;
}

