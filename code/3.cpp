#include <iostream>
class Server {
public:
    int getVCpu();
    void setVCpu(int);
    int getRAM();
    void setRAM(int);
    int getStorage();
    void setStorage(int);
private:
    int Storage;
    int RAM;
    int vCPU;
};
void Server::setVCpu(int x) {
    this->vCPU = x;
}
void Server::setRAM(int x) {
    this->RAM = x;
}
void Server::setStorage(int x) {
    this->Storage = x;
}
int Server::getVCpu() {
    return vCPU;
}
int Server::getRAM() {
    return RAM;
}
int Server::getStorage() {
    return Storage;
}
int main()
{
    Server  Windows2019;
    Windows2019.setRAM(8);
    Windows2019.setVCpu(4);
    Windows2019.setStorage(200);
    std::cout << "Server has " << Windows2019.getVCpu() << " cores,"
        << Windows2019.getRAM() << " GB of memory, "
        << Windows2019.getStorage() << " GB of storage!" << std::endl;

}
