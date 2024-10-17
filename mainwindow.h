#ifndef MAINWINDOW_H
#define MAINWINDOW_H
///#include <QTableView>
#include <QStandardItemModel>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void mainEntry();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
};
#endif // MAINWINDOW_H
