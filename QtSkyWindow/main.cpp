#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPainter>
#include <QTimer>
#include <QtCore>>

class StarryNightScene : public QGraphicsScene {
public:
    StarryNightScene(QObject* parent = nullptr) : QGraphicsScene(parent) {
        setSceneRect(0, 0, 800, 600);

        // 创建定时器，用于触发重绘
        QTimer* timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(update()));
        timer->start(100);
    }

protected:
    void drawBackground(QPainter* painter, const QRectF& rect) override {
        Q_UNUSED(rect);

        // 绘制星空背景
        painter->fillRect(sceneRect(), Qt::black);
        for (int i = 0; i < 100; ++i) {
            int x = rand() % int(sceneRect().width());
            int y = rand() % int(sceneRect().height());
            painter->setPen(QColor(255, 255, 255, rand() % 256));
            painter->drawPoint(x, y);
        }
    }
};

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    QGraphicsView view;
    StarryNightScene scene;
    view.setScene(&scene);
    view.setWindowTitle("Dynamic Window with Starry Night Background");
    view.show();

    return app.exec();
}
