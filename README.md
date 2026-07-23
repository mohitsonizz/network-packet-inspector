Network Packet Inspector & Socket Engine

A lightweight C++ and Python utility designed for capturing, parsing, and analyzing network packets (Ethernet, IPv4, TCP/UDP headers) in real-time.

Features
- **Raw Socket Capture**: Captures low-level network frames.
- **Packet Parsing**: Extracts Ethernet frames, IP headers, TTL, and protocol types using C++.
- **Analytics Engine**: Python module for computing network latency, packet loss, and VLAN tag distributions.

Tech Stack
- **Languages**: C++, Python 3
- **Concepts**: Sockets, TCP/IP, Layer 2 Networking, VLAN, QoS
- **Environment**: Linux / Unix CLI

How to Run
```bash
Compile C++ Engine
g++ src/packet_parser.cpp -o packet_parser
./packet_parser

Run Python Analytics
python3 src/network_analyzer.py
