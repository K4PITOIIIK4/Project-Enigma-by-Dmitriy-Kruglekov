#ifndef ENIGMA_H
#define ENIGMA_H
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Enigma; }
QT_END_NAMESPACE

class Enigma : public QMainWindow
{
    Q_OBJECT

public:
    Enigma(QWidget *parent = nullptr);
    ~Enigma();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Enigma *ui;

private slots:
    void digits_in();

};



#endif // ENIGMA_H
