mkdir -p build && g++ hvlgtptun.cpp udp_client.cpp udp_server.cpp utils.cpp -Wall -fno-exceptions -o build/hvlgtptun && ./build/hvlgtptun