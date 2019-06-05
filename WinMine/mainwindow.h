#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

    void setEnmoji(int i);

    QTimer timer;
    QTime base_time;
    std::vector<QIcon> enmoji;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H