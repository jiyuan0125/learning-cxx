﻿#include "../exercise.h"

const float EPSILON = 1e-6f;

// READ: 函数模板 <https://zh.cppreference.com/w/cpp/language/function_template>
// TODO: 将这个函数模板化
template <typename T>
T plus(T a, T b) {
    return a + b;
}

int main(int argc, char **argv) {
    ASSERT(plus(1, 2) == 3, "Plus two int");
    ASSERT(plus(1u, 2u) == 3u, "Plus two unsigned int");

    // THINK: 浮点数何时可以判断 ==？何时必须判断差值？
    ASSERT(plus(1.25f, 2.5f) - 3.75f < EPSILON, "Plus two float");
    ASSERT(plus(1.25, 2.5) - 3.75 < EPSILON, "Plus two double");
    // TODO: 修改判断条件使测试通过
    ASSERT(plus(0.1, 0.2) - 0.3 < EPSILON, "How to make this pass?");

    return 0;
}
