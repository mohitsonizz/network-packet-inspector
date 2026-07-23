#include <iostream>
#include <cstring>

// Simulated Ethernet and IP Header Structures
struct EthernetHeader {
    unsigned char dest_mac[6];
    unsigned char src_mac[6];
    unsigned short eth_type;
};

struct IPHeader {
    unsigned char ver_ihl;
    unsigned char tos;
    unsigned short total_length;
    unsigned short id;
    unsigned char ttl;
    unsigned char protocol;
    unsigned int src_ip;
    unsigned int dest_ip;
};

void parse_packet(unsigned char* buffer, int size) {
    std::cout << "[+] Parsing Captured Packet (" << size << " bytes)..." << std::endl;
    EthernetHeader* eth = (EthernetHeader*)buffer;
    std::cout << "    EtherType: 0x" << std::hex << eth->eth_type << std::dec << std::endl;
    
    IPHeader* ip = (IPHeader*)(buffer + sizeof(EthernetHeader));
    std::cout << "    Protocol ID: " << (int)ip->protocol << std::endl;
    std::cout << "    TTL: " << (int)ip->ttl << std::endl;
    std::cout << "[+] Packet processing completed successfully.\n" << std::endl;
}

int main() {
    std::cout << "==================================================" << std::endl;
    std::cout << " C++ Low-Level Socket Packet Inspector Started " << std::endl;
    std::cout << "==================================================" << std::endl;

    // Dummy packet buffer simulating Raw Network Frame
    unsigned char dummy_packet[64] = {0x00, 0x1A, 0x2B, 0x3C, 0x4D, 0x5E};
    parse_packet(dummy_packet, sizeof(dummy_packet));

    return 0;
}
