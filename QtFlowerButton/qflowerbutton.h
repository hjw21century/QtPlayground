#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QPolygon>

class QFlowerButton : public QWidget {
public:
    explicit QFlowerButton(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override {
        Q_UNUSED(event);

        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);

        // 绘制花朵形状
        painter.setPen(Qt::NoPen);
        painter.setBrush(Qt::red);

        QPolygon flowerPolygon;
        flowerPolygon << QPoint(50, 10) << QPoint(80, 30) << QPoint(70, 60) << QPoint(50, 80) << QPoint(30, 60) << QPoint(20, 30);
        painter.drawPolygon(flowerPolygon, Qt::WindingFill);
    }
};
