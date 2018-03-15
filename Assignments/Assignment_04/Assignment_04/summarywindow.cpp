#include "summarywindow.h"

SummaryWindow::SummaryWindow(QWidget *parent) : QWidget(parent)
{
    // Set window size
    this->setFixedSize(700, 500);

    // Create labels
    name = new QLabel("User Name", this);
    accountNum = new QLabel("1234567", this);

    // Create buttons
    savings = new QPushButton("Savings", this);
    checking = new QPushButton("Checking", this);
    deposit = new QPushButton("Deposit", this);
    withdraw = new QPushButton("Withdraw", this);
    transfer = new QPushButton("Transfer", this);
    history = new QPushButton("Transaction History", this);

    name->setGeometry(0, 0, 100, 30);

    // Set position and size of buttons
    deposit->setGeometry(100, 200, 100, 40);
    withdraw->setGeometry(500, 200, 100, 40);
    savings->setGeometry(500, 100, 100, 40);
    checking->setGeometry(100, 100, 100, 40);
    transfer->setGeometry(250, 150, 100, 40);
    history->setGeometry(300, 200, 100, 40);
}

SummaryWindow::~SummaryWindow()
{
    delete savings;
    delete checking;
    delete deposit;
    delete withdraw;
    delete transfer;
    delete history;
    delete name;
    delete accountNum;
}
