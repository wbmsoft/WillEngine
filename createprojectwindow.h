#ifndef CREATEPROJECTWINDOW_H
#define CREATEPROJECTWINDOW_H

#include <QDialog>

namespace Ui {
class CreateProjectWindow;
}

class CreateProjectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CreateProjectWindow(QWidget *parent = nullptr);
    ~CreateProjectWindow();

private:
    Ui::CreateProjectWindow *ui;
};

#endif // CREATEPROJECTWINDOW_H
