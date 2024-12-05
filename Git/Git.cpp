#include <iostream>
#include <string>

using namespace std;

class Square {
private:
    int sideLength;

public:
    Square(int length) : sideLength(length) {}

    void Draw() const {
        for (int i = 0; i < sideLength; ++i) {
            for (int j = 0; j < sideLength; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    void Draw() const {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                cout << "# ";
            }
            cout << endl;
        }
    }
};

class Triangle {
private:
    int height;

public:
    Triangle(int h) : height(h) {}

    void Draw() const {
        for (int i = 1; i <= height; ++i) {
            for (int j = 0; j < i; ++j) {
                cout << "@ ";
            }
            cout << endl;
        }
    }
};

int main() {
    Square square(5);
    Rectangle rectangle(7, 4);
    Triangle triangle(5);

    cout << "Square:" << endl;
    square.Draw();

    cout << "\nRectangle:" << endl;
    rectangle.Draw();

    cout << "\nTriangle:" << endl;
    triangle.Draw();

    return 0;
}
