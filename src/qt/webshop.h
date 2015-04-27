#ifndef WEBSHOP_H
#define WEBSHOP_H

#include <QWidget>

namespace Ui {
	class Webshop;
}
class WalletModel;

class Webshop : public QWidget
{
    Q_OBJECT

public:
    explicit Webshop(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Webshop();    


private:
	Ui::Webshop *ui;
    WalletModel *model;
};

#endif // WEBSHOP_H
