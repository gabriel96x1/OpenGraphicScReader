#include "pc_sc_reader.h"

auto pc_sc_reader::get_reader()
{

    auto readers = listReaders();
    auto card = readers[0].connectToCard();
    auto command = CommandApdu::fromBytes({0x2, 0x1, 0x3, 0x4});

    auto transactionGuard = card->beginTransaction();
    auto response = card->transmit(command);

}
