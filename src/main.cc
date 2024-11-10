#include "ui/ui.hh"

#include <chrono>

int main()
{
    UI ui;

    auto last_frame = hr::now();
    while (ui.running()) {
        auto new_frame = hr::now();
        ui.update(new_frame - last_frame);
        ui.draw();
        last_frame = new_frame;
    }
}
