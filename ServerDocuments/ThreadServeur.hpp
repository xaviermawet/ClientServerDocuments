#ifndef THREADSERVEUR_HPP
#define THREADSERVEUR_HPP

#include <QThread>

// Networking
#include "../utils/Sockets/TCPSocketClient.h"
#include "../utils/Sockets/TCPSocketServer.h"

// Protocol
#include "../utils/GDOCP/GDOCP.hpp"

// Hash
#include "../utils/Hash/RandomPrimeGenerator.hpp"
#include "../utils/Hash/Hash.hpp"

// Parser
#include "../utils/Parser/IniParser.hpp"

class ThreadServeur : public QThread
{
        Q_OBJECT

    public:

        explicit ThreadServeur(int port, QObject *parent = 0);
        ~ThreadServeur(void);

    signals:

        void serverRunning(bool running);
        void message(const QString& msg);

    public slots:

        void run();

    private:

        void manageLOGIN(void);
        void manageGETPLAIN(void);
        void manageGETCIPHER(void);

        void sendFAILMessage(const std::string& cause);

    private:

        GDOCP protocolManager;
        RandomPrimeGenerator primeGenerator;

        int _port;
        TCPSocketServer* server_socket;
        TCPSocketClient* client_socket;
        bool client_connected;
};

#endif // THREADSERVEUR_HPP
