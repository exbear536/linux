#include <iostream>
#include <thread>
#include <chrono>

int main() {
    // 关闭 cin/cout 与 C stdio 的同步，让缓冲差异更明显
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 5; i++) {
        std::cout << "cout: 第" << i << "条，我在等待...\n";  // 不flush
    }
    
    std::cerr << "cerr: 我立刻出现！\n";  // 立即显示
    
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    std::cout << std::flush;  // 手动触发flush
    return 0;
}