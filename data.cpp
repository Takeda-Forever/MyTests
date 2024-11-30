#include "data.h"

//Windows::Windows(int _id):id(_id){}
//Linux::Linux(int _id) :id(_id) {}
//
//string Linux::get_name()
//{
//	return string(name);
//}
//int Linux::get_id()
//{
//	return id;
//}
//
//string Windows::get_name()
//{
//	return string(name);
//}
//
//int Windows::get_id()
//{
//	return id;
//}

void SystemColor(color x)
{
	switch (x)
	{
	case red:
		system("color E4");
		break;
	case blue:
		system("color E1");
		break;
	case green:
		system("color E2");
		break;
	case black:
		system("color B0");
		break;
	case yellow:
		system("color 1E");
		break;
	default:
		system("color F");
		break;
	}
}

//void sql::SqlServerStart()
//{
//	mysql::MySQL_Driver* driver;
//	Connection* con;
//	Statement* stmt;
//	ResultSet* res;
//
//	driver = mysql::get_mysql_driver_instance();
//	con = driver->connect(HostName, Username, Password);
//
//	con->setSchema(SqlCatalog);
//
//	stmt = con->createStatement();
//	res = stmt->executeQuery("SELECT * FROM " + (string)SqlTable);
//
//	GetMyTable(res);
//
//	delete res;
//	delete stmt;
//	delete con;
//}
//
//void sql::GetMyTable(ResultSet* res)
//{
//	while (res->next()) {
//		cout << "ID: " << res->getInt("id")
//			<< ", Username: " << res->getString("username")
//			<< ", Password: " << res->getString("password")
//			<< std::endl;
//	}
//}

//void TcpServer(unsigned short port)
//{
//        sf::TcpListener listener;
//        std::vector<sf::TcpSocket*> clients;
//
//        if (listener.listen(port) != sf::Socket::Done) {
//            std::cout << "Error while binding listener to port." << std::endl;
//            return;
//        }
//
//        std::cout << "Server is listening on port ..." << std::endl;
//
//        while (true) {
//            sf::TcpSocket* client = new sf::TcpSocket;
//            if (listener.accept(*client) != sf::Socket::Done) {
//                std::cout << "Error while accepting connection." << std::endl;
//                return;
//            }
//
//            clients.push_back(client);
//            std::cout << "New client connected." << std::endl;
//        }
//
//}
//
//void TcpClient(unsigned short port)
//{
//    sf::TcpSocket socket;
//
//    if (socket.connect("127.0.0.1", port) != sf::Socket::Done) {
//        std::cout << "Error while connecting to server." << std::endl;
//        return ;
//    }
//
//    cin.ignore(1000, '\n');
//
//    while (true) {
//        std::string message;
//        std::cout << "Enter a message to send: ";
//        std::getline(std::cin, message);
//
//        if (socket.send(message.c_str(), message.size() + 1) != sf::Socket::Done) {
//            std::cout << "Error while sending message." << std::endl;
//            break;
//        }
//
//        char buffer[1024];
//        std::size_t received;
//
//        if (socket.receive(buffer, sizeof(buffer), received) != sf::Socket::Done) {
//            std::cout << "Error while receiving response." << std::endl;
//            break;
//        }
//
//        std::cout << "Received response from server: " << buffer << std::endl;
//    }
//}
//
//void runTcpServer(unsigned short port)
//{
//    // Create a server socket to accept new connections
//    sf::TcpListener listener;
//
//    // Listen to the given port for incoming connections
//    if (listener.listen(port) != sf::Socket::Done)
//        return;
//    cout << "Server is listening to port " << port << ", waiting for connections... " << endl;
//
//    // Wait for a connection
//    sf::TcpSocket socket;
//    if (listener.accept(socket) != sf::Socket::Done)
//        return;
//    cout << "Client connected: " << socket.getRemoteAddress() << endl;
//
//    this_thread::sleep_for(chrono::seconds(1));
//    system("cls");
//
//    // Send a message to the connected client
//    const char out[] = "Hello Friend!";
//    if (socket.send(out, sizeof(out)) != sf::Socket::Done)
//        return;
//    cout << "Me(Server): \"" << out << "\"" << endl;
//    while (1)
//    {
//        // Receive a message back from the client
//        char in[256];
//        size_t received;
//        if (socket.receive(in, sizeof(in), received) != sf::Socket::Done)
//        {
//            cout << "Client is broken!" << endl;
//            this_thread::sleep_for(chrono::seconds(3));
//            return;
//        }
//        cout << "Friend(Client): \"" << in << "\"" << endl;
//    }
//}
//
//void runTcpClient(unsigned short port)
//{
//    sf::IpAddress server;
//    do
//    {
//        std::cout << "Type the address or name of the server to connect to: ";
//        std::cin >> server;
//    } while (server == sf::IpAddress::None);
//
//    sf::TcpSocket socket;
//
//    // Connect to the server
//    if (socket.connect(server, port) != sf::Socket::Done)
//        return;
//    std::cout << "Connected to server " << server << std::endl;
//
//    this_thread::sleep_for(chrono::seconds(1));
//    system("cls");
//
//    // Receive a message from the server
//    char in[128];
//    std::size_t received;
//    if (socket.receive(in, sizeof(in), received) != sf::Socket::Done)
//        return;
//    std::cout << "Friend(Server): " << in << std::endl;
//
//    char out[128] = "Hello Broo!";
//    if (socket.send(out, sizeof(out)) != sf::Socket::Done)
//        return;
//    std::cout << "Me(Client): " << out  << std::endl;
//
//
//
//    cin.ignore(1000, '\n');
//
//    // Send an answer to the server
//    while (1)
//    {
//        cout << "Me(Client): ";
//        string out;
//        getline(cin, out);
//        if (socket.send(out.c_str(), sizeof(out)) != sf::Socket::Done)
//            return;
//
//    }
//}

//void runUdpServer(unsigned short port)
//{
//    // Create a socket to receive a message from anyone
//    sf::UdpSocket socket;
//
//    // Listen to messages on the specified port
//    if (socket.bind(port) != sf::Socket::Done)
//        return;
//    std::cout << "Server is listening to port " << port << ", waiting for a message... " << std::endl;
//
//    // Wait for a message
//    char in[128];
//    std::size_t received;
//    sf::IpAddress sender;
//    unsigned short senderPort;
//    if (socket.receive(in, sizeof(in), received, sender, senderPort) != sf::Socket::Done)
//        return;
//    std::cout << "Message received from client " << sender << ": \"" << in << "\"" << std::endl;
//
//    // Send an answer to the client
//    const char out[] = "Hi, I'm the server";
//    if (socket.send(out, sizeof(out), sender, senderPort) != sf::Socket::Done)
//        return;
//    std::cout << "Message sent to the client: \"" << out << "\"" << std::endl;
//}
//
//
//////////////////////////////////////////////////////////////
///// Send a message to the server, wait for the answer
/////
//////////////////////////////////////////////////////////////
//void runUdpClient(unsigned short port)
//{
//    // Ask for the server address
//    sf::IpAddress server;
//    do
//    {
//        std::cout << "Type the address or name of the server to connect to: ";
//        std::cin >> server;
//    } while (server == sf::IpAddress::None);
//
//    // Create a socket for communicating with the server
//    sf::UdpSocket socket;
//
//    // Send a message to the server
//    const char out[] = "Hi, I'm a client";
//    if (socket.send(out, sizeof(out), server, port) != sf::Socket::Done)
//        return;
//    std::cout << "Message sent to the server: \"" << out << "\"" << std::endl;
//
//    // Receive an answer from anyone (but most likely from the server)
//    char in[128];
//    std::size_t received;
//    sf::IpAddress sender;
//    unsigned short senderPort;
//    if (socket.receive(in, sizeof(in), received, sender, senderPort) != sf::Socket::Done)
//        return;
//    std::cout << "Message received from " << sender << ": \"" << in << "\"" << std::endl;
//}

//template <typename... Args>
//void print(Args... args) {
//    ((std::cout << args << " "), ...);
//}
//template <typename... Args>
//auto sum(Args... args) {
//    return (args + ...); 
//}
//template <typename... Args>
//typename std::enable_if<std::conjunction<std::is_arithmetic<Args>...>::value, double>::type
//sum(Args... args) {
//    return (args + ...);
//}








