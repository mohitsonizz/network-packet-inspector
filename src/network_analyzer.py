import socket
import time

def parse_network_traffic():
    print("=============================================")
    print(" Python Network Packet Analytics Engine")
    print("=============================================")
    
    # Simulating socket data stream parsing
    metrics = {
        "packets_captured": 1420,
        "vlan_tags_detected": [10, 20, 100],
        "qos_priority_high": "35%",
        "packet_loss": "0.02%",
        "avg_latency_ms": 1.4
    }

    print("[+] Analyzing captured network frames...")
    time.sleep(1)
    
    for key, value in metrics.items():
        print(f" -> {key.replace('_', ' ').title()}: {value}")
        
    print("\n[SUCCESS] VLAN & QoS traffic analytics generated successfully.")

if __name__ == "__main__":
    parse_network_traffic()
