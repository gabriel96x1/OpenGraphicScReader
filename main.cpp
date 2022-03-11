#include <QApplication>
#include <QPushButton>
#include <QLabel>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QWidget window;
    window.setFixedSize(700, 600);

    QLabel *lbl = new QLabel("a label", &window);

    lbl -> setGeometry(100, 10, 200,30);

    QPushButton *btn = new QPushButton(" get Reader ", &window);
    btn -> setGeometry(10,10,80,30);

    window.show();
    return app.exec();
}
