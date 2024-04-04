#include <iostream>
#include "User.h"
#include "Singleton.h"
#include <vector>
#include "CarFactory.h"
#include <algorithm>

int main() {
    auto* user = new User("hbw");
    std::cout << user->get_name() << std::endl;

    // 单例模式
    auto a = Singleton::get_Singleton();
    auto b = Singleton::get_Singleton();
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    // 工厂模式
    auto pCar = (new CarFactory)->getCar();
    std::cout << pCar->get_name() << std::endl;
}

void test() {
    int i;
    isdigit(i); // 判断是否为数
    isalpha(i); // 判断是否为字母
    isalnum(i); // 判断是否为字母或数字
    tolower(i); // 大写
    toupper(i); // 小写

    // str <-> int
    int num = 100;
    std::string str = std::to_string(num);
    auto number = std::stoi(str);

    // 迭代器的上下界 - 排序
    std::vector<int> nums{1,2,34,44,99};
    // 在有序排序中,寻找到第一个大于等于当前值,所谓下界
    long long k = std::lower_bound(nums.begin(), nums.end(), 55) - nums.begin();
    // 在有序排序中,寻找到第一个大于当前值,所谓上界
    long long r = std::upper_bound(nums.begin(),nums.end(), 55)- nums.begin();

    // 字符串转为小写
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);



}
