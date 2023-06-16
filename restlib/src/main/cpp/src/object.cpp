//
// Created by feng junwen on 2023/6/16.
//
#include "object.h"
#include "httplib.h"

#include <iostream>

using namespace std;

namespace taptap {
    namespace tds {
        std::string Object::getServerTime() {

#ifdef CPPHTTPLIB_OPENSSL_SUPPORT
            auto scheme_host_port = "https://api.leancloud.cn";
#else
            auto scheme_host_port = "http://api.leancloud.cn";
#endif

            cout << "begin to query " << scheme_host_port << endl;
            if (auto res = httplib::Client(scheme_host_port).Get("/1.1/date")) {
                cout << res->status << endl;
                cout << res->get_header_value("Content-Type") << endl;
                cout << res->body << endl;
                return res->body;
            } else {
                cout << res.error() << endl;
                return "wrong!";
            }
        }
    }
}

