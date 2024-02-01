#include <iostream>

class Point2d {
    public:
        Point2d() = default;
        Point2d(double m_x, double m_y)
            : m_x{ m_x }
            , m_y{ m_y }
        {
        }

        void print() const {
            std::cout << "point2d(" << m_x << ", " << m_y << ")\n";
        }

    private:
        double m_x{ 0.0 };
        double m_y{ 0.0 };
};

int main() {
    Point2d first{};
    Point2d second{ 3.0, 4.0};

    first.print();
    second.print();

    return 0;
}