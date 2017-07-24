/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

namespace Nav {

class Ui_MainWindow
{
public:
    QAction *actionBrowseFiles;
    QAction *actionFileExit;
    QAction *actionBrowseGlobalDefinitions;
    QAction *actionBrowseSymbols;
    QAction *actionEditCopy;
    QAction *actionEditFind;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuBrowse;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuViewTabWidth;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Nav__MainWindow)
    {
        if (Nav__MainWindow->objectName().isEmpty())
            Nav__MainWindow->setObjectName(QStringLiteral("Nav__MainWindow"));
        Nav__MainWindow->resize(950, 950);
        actionBrowseFiles = new QAction(Nav__MainWindow);
        actionBrowseFiles->setObjectName(QStringLiteral("actionBrowseFiles"));
        actionBrowseFiles->setShortcutContext(Qt::ApplicationShortcut);
        actionFileExit = new QAction(Nav__MainWindow);
        actionFileExit->setObjectName(QStringLiteral("actionFileExit"));
        actionFileExit->setShortcutContext(Qt::ApplicationShortcut);
        actionBrowseGlobalDefinitions = new QAction(Nav__MainWindow);
        actionBrowseGlobalDefinitions->setObjectName(QStringLiteral("actionBrowseGlobalDefinitions"));
        actionBrowseGlobalDefinitions->setShortcutContext(Qt::ApplicationShortcut);
        actionBrowseSymbols = new QAction(Nav__MainWindow);
        actionBrowseSymbols->setObjectName(QStringLiteral("actionBrowseSymbols"));
        actionBrowseSymbols->setShortcutContext(Qt::ApplicationShortcut);
        actionEditCopy = new QAction(Nav__MainWindow);
        actionEditCopy->setObjectName(QStringLiteral("actionEditCopy"));
        actionEditFind = new QAction(Nav__MainWindow);
        actionEditFind->setObjectName(QStringLiteral("actionEditFind"));
        centralWidget = new QWidget(Nav__MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Nav__MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Nav__MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 950, 25));
        menuBrowse = new QMenu(menuBar);
        menuBrowse->setObjectName(QStringLiteral("menuBrowse"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuViewTabWidth = new QMenu(menuView);
        menuViewTabWidth->setObjectName(QStringLiteral("menuViewTabWidth"));
        Nav__MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(Nav__MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Nav__MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(Nav__MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(16, 16));
        Nav__MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuBrowse->menuAction());
        menuBrowse->addAction(actionBrowseFiles);
        menuBrowse->addAction(actionBrowseGlobalDefinitions);
        menuBrowse->addAction(actionBrowseSymbols);
        menuFile->addAction(actionFileExit);
        menuEdit->addAction(actionEditCopy);
        menuEdit->addAction(actionEditFind);
        menuView->addAction(menuViewTabWidth->menuAction());

        retranslateUi(Nav__MainWindow);

        QMetaObject::connectSlotsByName(Nav__MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Nav__MainWindow)
    {
        Nav__MainWindow->setWindowTitle(QApplication::translate("Nav::MainWindow", "SourceWeb", Q_NULLPTR));
        actionBrowseFiles->setText(QApplication::translate("Nav::MainWindow", "&Files...", Q_NULLPTR));
        actionBrowseFiles->setShortcut(QApplication::translate("Nav::MainWindow", "Ctrl+P", Q_NULLPTR));
        actionFileExit->setText(QApplication::translate("Nav::MainWindow", "E&xit", Q_NULLPTR));
        actionFileExit->setShortcut(QApplication::translate("Nav::MainWindow", "Ctrl+Q", Q_NULLPTR));
        actionBrowseGlobalDefinitions->setText(QApplication::translate("Nav::MainWindow", "Global &Definitions...", Q_NULLPTR));
        actionBrowseGlobalDefinitions->setShortcut(QApplication::translate("Nav::MainWindow", "Ctrl+D", Q_NULLPTR));
        actionBrowseSymbols->setText(QApplication::translate("Nav::MainWindow", "&Symbols...", Q_NULLPTR));
        actionBrowseSymbols->setShortcut(QApplication::translate("Nav::MainWindow", "Ctrl+S", Q_NULLPTR));
        actionEditCopy->setText(QApplication::translate("Nav::MainWindow", "&Copy", Q_NULLPTR));
        actionEditCopy->setShortcut(QApplication::translate("Nav::MainWindow", "Ctrl+C", Q_NULLPTR));
        actionEditFind->setText(QApplication::translate("Nav::MainWindow", "&Find...", Q_NULLPTR));
        actionEditFind->setShortcut(QApplication::translate("Nav::MainWindow", "Ctrl+F", Q_NULLPTR));
        menuBrowse->setTitle(QApplication::translate("Nav::MainWindow", "&Browse", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("Nav::MainWindow", "&File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("Nav::MainWindow", "&Edit", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("Nav::MainWindow", "&View", Q_NULLPTR));
        menuViewTabWidth->setTitle(QApplication::translate("Nav::MainWindow", "&Tab Width", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("Nav::MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

} // namespace Nav

namespace Nav {
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui
} // namespace Nav

#endif // UI_MAINWINDOW_H
