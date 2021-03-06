/*
 * Copyright 2020 UBports foundation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Marius Gripsgard <marius@ubports.com>
 */

#include <leds.h>
#include <unistd.h>

int main() {
    auto leds = hfd::Leds::create();

    leds->setState(hfd::State::On);
    sleep(1);
    leds->setState(hfd::State::Off);
    leds->setState(hfd::State::On);

    leds->setColor(0xff0000);
    sleep(10);
    leds->setColor(0x00ff00);
    sleep(10);
    leds->setColor(0x0000ff);
    sleep(10);
    leds->setColor(0xbd5751);

    sleep(10);
    leds->setState(hfd::State::Off);

}
