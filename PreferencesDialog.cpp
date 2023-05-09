#include "PreferencesDialog.h"
#include <QVBoxLayout>
#include <QCheckBox>
#include <QDialogButtonBox>
#include <QGroupBox>
#include <QToolBar>
#include <QStatusBar>
#include "mainwindow.h"

PreferencesDialog::PreferencesDialog(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle(tr("Preferences"));
    setWindowIcon(QIcon::fromTheme("preferences-other", QIcon("/Users/mariazyryanova/FileManager/Images/Preferences.ico")));
    QVBoxLayout *layout = new QVBoxLayout(this);
    statusBar = (static_cast<MainWindow*>(parent))->statusBar();
    toolBar = (static_cast<MainWindow*>(parent))->toolBar;

    showToolBarCheckBox = new QCheckBox((tr("&Show Tool Bar")));
    showToolBarCheckBox->setChecked(toolBar->isVisible());
    showStatusBarCheckBox = new QCheckBox((tr("&Show Status Bar")));
    showStatusBarCheckBox->setChecked(statusBar->isVisible());

    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
    layout->addWidget(showToolBarCheckBox);
    layout->addWidget(showStatusBarCheckBox);
    layout->addWidget(buttonBox);
    setLayout(layout);
}

void PreferencesDialog::accept()
{
    toolBar->setVisible(showToolBarCheckBox->isChecked());
    statusBar->setVisible(showStatusBarCheckBox->isChecked());
    done(1);
}

void PreferencesDialog::reject()
{
    done(0);
}
