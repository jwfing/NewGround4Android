//
// Created by feng junwen on 2023/6/16.
//

#ifndef NEWANDROID_OBJECT_H
#define NEWANDROID_OBJECT_H

#include <string>

namespace taptap {
    namespace tds {
        class Object {
        public:
            Object() {};
            virtual ~Object() {};
            static std::string getServerTime();
        };
    }
}

#endif //NEWANDROID_OBJECT_H
