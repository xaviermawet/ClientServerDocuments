#ifndef __WIDGET_HPP__
#define __WIDGET_HPP__

#include <QtWidgets>
#include <QString>

// Networking
#include "../utils/Sockets/TCPSocketClient.h"

// Protocol
#include "../utils/GDOCP/GDOCP.hpp"

// Hash
#include "../utils/Hash/Hash.hpp"
#include "../utils/Hash/RandomPrimeGenerator.hpp"

// Parser
#include "../utils/Parser/IniParser.hpp"

// Exceptions
#include "../utils/Exceptions/Exception.hpp"

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
        Q_OBJECT

    public:

        explicit Widget(QWidget *parent = NULL);
        virtual ~Widget(void);

    private slots:

        void setWidgetsEnable(bool client_connected);
        void displayMessage(const QString& message);

        // Auto-connect
        void on_pushButtonConnect_clicked();
        void on_pushButtonDisconnect_clicked();
        void on_pushButtonCipherText_clicked();
        void on_pushButtonClear_clicked();

        void on_pushButtonPlainText_clicked();

    protected:

        void disconnectFromServer(void);
        bool login(void);

        Ui::Widget *ui;

        TCPSocketClient* client_sock;
        GDOCP protocolManager;
        RandomPrimeGenerator primeGenerator;
};

#endif // __WIDGET_HPP__
