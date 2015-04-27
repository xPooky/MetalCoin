#include "ui_webshop.h"
#include "guiutil.h"
#include "bitcoingui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Webshop::Webshop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Webshop),
    model(0)
{
    ui->setupUi(this);
}
    void Webshop::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Webshop::~Webshop()
{
    delete ui;
}