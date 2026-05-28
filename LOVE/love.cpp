#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

namespace bettercpp
{
    class LoveVirtualizer
    {
    private:
        int registerCount;
        std::vector<int> virtualRegisters;

        void logVM(const std::string& type, const std::string& details)
        {
            std::cout << "[LOVE-VM][" << type << "] " << details << std::endl;
        }

    public:
        LoveVirtualizer(int regs)
        {
            registerCount = regs;
            virtualRegisters.resize(registerCount, 0);
        }

        void runEnvironment()
        {
            std::cout << "==================================================" << std::endl;
            std::cout << " LOVE: Low-level Object Virtualization Environment" << std::endl;
            std::cout << "==================================================" << std::endl;

            logVM("CORE", "Initializing hardware abstraction layer...");
            logVM("REGS", "Allocated " + std::to_string(registerCount) + " secure virtual registers.");
            std::this_thread::sleep_for(std::chrono::milliseconds(400));

            logVM("EXEC", "Loading virtual bytecode sequence...");
            std::this_thread::sleep_for(std::chrono::milliseconds(200));

            for (int i = 0; i < registerCount && i < 4; ++i)
            {
                virtualRegisters[i] = (i + 1) * 0x0F;
                logVM("OPCODE", "MOV REG_" + std::to_string(i) + ", " + std::to_string(virtualRegisters[i]));
                std::this_thread::sleep_for(std::chrono::milliseconds(150));
            }

            std::cout << "--------------------------------------------------" << std::endl;
            logVM("YIELD", "Virtual environment state flushed successfully. Core idling.");
            std::cout << "==================================================" << std::endl;
        }
    };
}

int main(int argc, char* argv[])
{
    int registersToAllocate = 4;

    if (argc > 1)
    {
        registersToAllocate = std::stoi(argv[1]);
    }

    bettercpp::LoveVirtualizer vm(registersToAllocate);
    vm.runEnvironment();

    return 0;
}
