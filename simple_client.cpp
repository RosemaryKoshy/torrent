#include <cstdlib>
#include <iostream>
#include <iomanip>

#include "libtorrent/bencode.hpp"
#include "libtorrent/entry.hpp"
#include "libtorrent/session.hpp"
#include "libtorrent/torrent_info.hpp"

int main(int argc, char *argv[]) try {
    if (argc != 2) {
        std::cerr << "usage: ./simple_client torrent-file\n"
                     "to stop the client, press return.\n";
        return EXIT_FAILURE;
    }

    lt::session s;
    lt::add_torrent_params p;
    p.save_path = ".";
    p.ti = std::make_shared<lt::torrent_info>(argv[1]);

    std::cout << "name         : " << p.ti->name() << std::endl;
    const std::time_t creation_date = p.ti->creation_date();
    std::cout << "creation_date: " << std::put_time(gmtime(&creation_date), "%c") << std::endl;
    std::cout << "creator      : " << p.ti->creator() << std::endl;
    std::cout << "comment      : " << p.ti->comment() << std::endl;
    std::cout << "save_path    : " << p.save_path << std::endl;

    s.add_torrent(p);

    return EXIT_SUCCESS;
} catch (std::exception const &e) {
    std::cerr << "ERROR: " << e.what() << "\n";
}
