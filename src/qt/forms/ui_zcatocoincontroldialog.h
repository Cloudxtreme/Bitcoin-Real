/********************************************************************************
** Form generated from reading UI file 'zcatocoincontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZCATOCOINCONTROLDIALOG_H
#define UI_ZCATOCOINCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZCatocoinControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZCatocoin;
    QLabel *labelZCatocoin_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZCatocoinControlDialog)
    {
        if (ZCatocoinControlDialog->objectName().isEmpty())
            ZCatocoinControlDialog->setObjectName(QStringLiteral("ZCatocoinControlDialog"));
        ZCatocoinControlDialog->resize(681, 384);
        ZCatocoinControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZCatocoinControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZCatocoinControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZCatocoinControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZCatocoin = new QLabel(ZCatocoinControlDialog);
        labelZCatocoin->setObjectName(QStringLiteral("labelZCatocoin"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZCatocoin);

        labelZCatocoin_int = new QLabel(ZCatocoinControlDialog);
        labelZCatocoin_int->setObjectName(QStringLiteral("labelZCatocoin_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZCatocoin_int);

        pushButtonAll = new QPushButton(ZCatocoinControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZCatocoinControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zCatocoin Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZCatocoinControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZCatocoinControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZCatocoinControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZCatocoinControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZCatocoinControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZCatocoinControlDialog)
    {
        ZCatocoinControlDialog->setWindowTitle(QApplication::translate("ZCatocoinControlDialog", "Select zCatocoin to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZCatocoinControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZCatocoinControlDialog", "0", Q_NULLPTR));
        labelZCatocoin->setText(QApplication::translate("ZCatocoinControlDialog", "zCatocoin", Q_NULLPTR));
        labelZCatocoin_int->setText(QApplication::translate("ZCatocoinControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZCatocoinControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZCatocoinControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZCatocoinControlDialog: public Ui_ZCatocoinControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZCATOCOINCONTROLDIALOG_H
