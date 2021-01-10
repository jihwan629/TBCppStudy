#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;
using namespace std;

int main(int argc, char *argv[])
{
	try
	{
		if (argc != 2)
		{
			cerr << "Usage: client <host>" << endl;
		}

		tcp::iostream stream(argv[1], std::to_string(int(13))); // port number 13

		if (!stream)
		{
			cout << "Unable to connect : "
				<< stream.error().message() << endl;
			return 1;
		}

		// send message to server
		stream << "Hello from client";
		stream << endl; // send new-line to end receiver' stream getline

		// receive message from server
		std::string line;
		std::getline(stream, line);
		cout << line << endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
    return 0;
}