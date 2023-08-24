#include <iostream>
#include <memory>
#include <vector>

//vector参照渡し
std::vector<int> &ref_function(int N) {
    std::vector<int>* dynamicVector = new std::vector<int>(N, 0);
    // ベクターに要素を追加などの処理
    return *dynamicVector;
}

std::unique_ptr<std::vector<int>> function() {
    auto dynamicVector = std::make_unique<std::vector<int>>();
    // ベクターに要素を追加などの処理
    return dynamicVector;
}

//vector値渡し関数
std::unique_ptr<std::vector<int>> cbv_function(int N) {
    auto dynamicVector = std::make_unique::<std::vector<int>>();
    // ベクターに要素を追加などの処理
    return dynamicVector;
}

int main() {
    //std::vector<int> &ref_Vector = ref_function(5);
	//std::cout << ref_Vector[2] << std::endl;
    auto call_Vector = function(5);
	std::cout << call_Vector[2] << std::endl;
    // returnedVectorを使用
    // ここでメモリリークが発生する可能性がある
    return 0;
}

