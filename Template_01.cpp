import std;

template <typename T>
T square(const T& value)
{
    return value * value;
}

struct Vector3D
{
    double x, y, z;

    Vector3D(double x_ = 0, double y_ = 0, double z_ = 0) : x(x_), y(y_), z(z_) {}

    Vector3D operator*(const Vector3D& other) const { return Vector3D(x * other.x, y * other.y, z * other.z); }

    friend std::ostream& operator<<(std::ostream& os, const Vector3D& vec)
    {
        return os << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
    }
};

struct Vector4D
{
    double x, y, z, w;

    Vector4D(double x_ = 0, double y_ = 0, double z_ = 0, double w_ = 0) : x(x_), y(y_), z(z_), w(w_) {}

    Vector4D operator*(const Vector4D& other) const
    {
        return Vector4D(x * other.x, y * other.y, z * other.z, w * other.w);
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector4D& vec)
    {
        return os << "(" << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w << ")";
    }
};

#define TEST_SQUARE(value) std::cout << "square(" #value ") = " << square(value) << std::endl;

int main()
{
    int num1 = 1;
    float num2 = 15.f;
    double num3 = 5.;
    Vector3D vector1(1., 2., 3.);
    Vector4D vector2(1., 1.5, 2., 2.);

    TEST_SQUARE(num1);
    TEST_SQUARE(num2);
    TEST_SQUARE(num3);
    TEST_SQUARE(vector1);
    TEST_SQUARE(vector2);

    return 0;
}
