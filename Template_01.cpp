import std;

template <typename T>
T square(const T& value)
{
    return value * value;
}

template <typename T>
std::vector<T> square(const std::vector<T>& vector)
{
    std::vector<T> result;
    result.reserve(vector.size());
    for (const T& item : vector)
        result.push_back(item * item);
    return result;
}

#define TEST_SQUARE(value)                                                                                             \
    {                                                                                                                  \
        auto result = square(value);                                                                                   \
        std::cout << "square(" #value ") = ";                                                                          \
        for (const auto& v : result)                                                                                   \
            std::cout << v << " ";                                                                                     \
        std::cout << std::endl;                                                                                        \
    }

int main()
{
    std::vector<int> vector1{1, 2, 3};
    std::vector<int> vector2{6, 7, 8, 9, 10};

    TEST_SQUARE(vector1);
    TEST_SQUARE(vector2);

    return 0;
}
