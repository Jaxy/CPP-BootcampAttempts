#include "Serialize.hpp"

void *serialize() {
	int i = -1;
	char *data = new char[20];

	char output[] = { "abcdefghijklmnopqrstuvwxyz" };
	
	std::cout << "\x1b[35mSerialized Data\x1b[0m" << std::endl;
	while (++i < 8) //limited to 8 alphanumerial characters from array
		data[i] = output[rand() % 26];
	i = 7;
	while (++i < 12) //limited to 8 alphanumerial characters from array
		data[i] = rand() % 104 - 52;
	i = 11;
	while (++i < 20)
		data[i] = output[rand() % 26];
	data[i] = '\0'; //limited to 8 alphanumerial characters from array
	i = -1;
	std::cout << "Array 1:\t";
	while (++i < 8) //limited to 8 alphanumerial characters from array
		std::cout << data[i];
	std::cout << std::endl << "Integer:\t" << static_cast<int>(data[8]);
	i = 11;
	std::cout << std::endl << "Array 2:\t";
	while (++i < 20) //limited to 8 alphanumerial characters from array
		std::cout << data[i];
	std::cout << std::endl;
	return (reinterpret_cast<void*>(data));
}

Data *deserialize(void *raw) {
	Data *data = new Data;

	data->n = 0;
	char *input = reinterpret_cast<char*>(raw); //convert void pointer type to char
	int i = -1;

	while (++i < 8)
		data->s1 = data->s1 + input[i];
	data->n = input[8];
	i = 11;
	while (++i < 20)
		data->s2 = data->s2 + input[i];
	return (data);
}

int	main() {
	void *serial;
	Data *deserial;

	srand(time(0));
	serial = serialize();
	std::cout << std::endl << "\x1b[35mSerialized data address\x1b[0m" << std::endl << serial << std::endl << std::endl;
	deserial = deserialize(serial); //using the address to deserialize the data
	std::cout << "\x1b[35mDeserialized data using address\x1b[0m" << std::endl <<
    "Array 1:\t" << deserial->s1 << std::endl << 
    "Integer:\t" << deserial->n << std::endl << 
    "Array 2:\t" << deserial->s2 << std::endl;
	delete deserial;
	return (0);
}