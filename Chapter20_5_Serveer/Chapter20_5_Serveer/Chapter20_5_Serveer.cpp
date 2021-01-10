#include <iostream>
#include <ctime>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;
using namespace std;

int main()
{
	try
	{
		boost::asio::io_service io_service;

		tcp::endpoint endpoint(tcp::v4(), 13);
		tcp::acceptor acceptor(io_service, endpoint);

		std::cout << "Server started" << endl;

		for (;;) // while(true)
		{
			const std::string message_to_send = "Hello From Server";

			boost::asio::ip::tcp::iostream stream;

			cout << "check 1" << endl;

			boost::system::error_code ec;
			acceptor.accept(*stream.rdbuf(), ec);
			// 클라이언트의 read buffer 읽음

			cout << "check 2" << endl;

			if (!ec) // 클라이언트가 접속이 됬다면
			{
				// receive message from client
				std::string line;
				std::getline(stream, line);
				cout << line << endl;

				// send message to client
				stream << message_to_send;
				stream << endl; // send std::endl to end getline of client
			}

		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}