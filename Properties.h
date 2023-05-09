#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <QDialog>
#include <QIcon>
#include <QDialogButtonBox>
#include <QFormLayout>
#include <QLabel>
#include <QAbstractItemView>
#include <QLabel>
#include <QDateTime>

class Properties : public QDialog
{
    Q_OBJECT
public:
    explicit Properties(QWidget *parent = 0);

signals:

public slots:

private slots:
    void accept();
    void reject();
};

#endif // PROPERTIES_H
