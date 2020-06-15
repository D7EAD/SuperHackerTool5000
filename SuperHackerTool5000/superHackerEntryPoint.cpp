#include <iostream>
#include <vector>
#include "superHackerASCIIArt.h"
#ifdef _WIN32
	#include <windows.h>
	#include <shellapi.h>
#endif
#ifdef __linux__
    #include <cstring>
	#include <unistd.h>
#endif

void prePhase();
void postPhase();
void endPhase();
void __sleep(unsigned int ms);
void __clear();
void typingPrint(const char* item);
void openRickRoll();

int main() {
	prePhase();
	std::cout << banner << std::endl;
	postPhase();
	endPhase();
}

// does super l33t stuff before moving on to the banner phase
void prePhase() {
	const char* welcome = "[!] Welcome...";                                          // super cool hacking modules for the big hacc
	const char* loading = "[!] Loading modules..."; std::vector<const char*> modules = {"instagram_hacking_module",
																						"facebook_hacking_module",
																						"snapchat_hacking_module",
																						"fbi_hacking_module",
																						"nsa_hacking_module"};
	const char* enc     = "[!] Encrypting virtual address space...";
	const char* init    = "[!] Initializing...";
	__sleep(1000); // for suspense
	typingPrint(welcome); __sleep(1500); std::cout << std::endl;
	typingPrint(loading); __sleep(1500); std::cout << std::endl;
	for (unsigned short int i = 0; i < modules.size(); i++) {
		std::cout << "\t[+] Loaded module: " << modules[i] << std::endl;
		__sleep(1000);
	} __sleep(1500);                 // encryption go brrrr
	typingPrint(enc); __sleep(4000); std::cout << " done."; std::cout << std::endl;
	typingPrint(init); __sleep(1500); __clear();
}

// does super l33t stuff after the banner phase
void postPhase() {
	const char* execMods = "[!] Executing modules...";

	for (unsigned short int i = 0; i < strlen(execMods); i++) {
		std::cout << execMods[i];
		__sleep(60);
	} __sleep(1500);
	std::cout << std::endl;
	std::cout << "[+][instagram_module] - Hacking all recently viewed Instagram accounts..."; __sleep(3000); std::cout << " success; information saved." << std::endl;
	std::cout << "[+][facebook_module]  - Hacking all recently viewed Facebook accounts...";  __sleep(3000); std::cout << "  success; information saved." << std::endl;
	std::cout << "[+][snapchat_module]  - Hacking all recently viewed Snapchat accounts...";  __sleep(3000); std::cout << "  success; information saved." << std::endl;
	std::cout << "[+][fbi_module]       - Starting FBI Hack..." << std::endl; __sleep(2000); std::cout << "\t[+] Performing RCE on FBI website..."; __sleep(1000); std::cout << " done." << std::endl;
																							 std::cout << "\t[+] Injecting internal database...";   __sleep(1000); std::cout << "   done." << std::endl;
																							 std::cout << "\t[+] Get user information tables...";   __sleep(2000); std::cout << "   done; information saved." << std::endl;
																							 std::cout << "\t[+] Getting classified documents...";  __sleep(3000); std::cout << "  done; information saved." << std::endl;
																							 std::cout << "\t[+] Done." << std::endl;
	std::cout << "[+][nsa_module]       - Starting NSA Hack..." << std::endl; __sleep(2000); std::cout << "\t[+] Executing NSA backdoor...";         __sleep(3000); std::cout << "        done; connected." << std::endl;
																							 std::cout << "\t[+] Gathering government secrets...";   __sleep(3000); std::cout << "  done; information saved." << std::endl;
																							 std::cout << "\t[+] Placing a RAT on Hillary's PC...";  __sleep(4000); std::cout << " done; injected." << std::endl;
																							 std::cout << "\t[+] Done. " << std::endl;
	std::cout << "[+] Exporting saved information..."; __sleep(8000); std::cout << " done; exported." << std::endl;
	std::cout << "[!] Finalizing..."; __sleep(3000);
}

// clears the screen and makes fun of the dumbass who believed this
void endPhase() {
	__clear();
	openRickRoll();
	std::cout << trolled << std::endl; std::cout << "Now get out of here... "; getchar();
}

// platform dependent thread sleep
void __sleep(unsigned int ms) {
	#ifdef __linux__
		usleep(ms * 1000);   // usleep takes sleep time in us (1 millionth of a second)
	#endif
	#ifdef _WIN32
		Sleep(ms);
	#endif
}

// platform dependent clear
void __clear() {
	#ifdef __linux__
		system("clear");
	#endif
	#ifdef _WIN32
		system("cls");
	#endif
}

// to miniy for statements
void typingPrint(const char* item) {
	for (unsigned short int i = 0; i < strlen(item); i++) {
		std::cout << item[i];
		__sleep(60);
	}
}

// __linux__ is untested
void openRickRoll() {
	#ifdef _WIN32
		ShellExecute(0, 0, "https://youtu.be/dQw4w9WgXcQ?autoplay=1", 0, 0, SW_SHOW);
	#endif
	#ifdef __linux__
		system("xdg-open https://youtu.be/dQw4w9WgXcQ?autoplay=1");
	#endif
}
