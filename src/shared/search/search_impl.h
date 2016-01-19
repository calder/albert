// albert - a simple application launcher for linux
// Copyright (C) 2014-2015 Manuel Schneider
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once
#include <QString>
#include <vector>
#include <memory>
#include "abstractobjects.hpp"

class SearchImpl
{
public:
    virtual ~SearchImpl(){}
    virtual void add(std::shared_ptr<AlbertItem> idxble) = 0;
    virtual void clear() = 0;
    virtual std::vector<std::shared_ptr<AlbertItem>> search(const QString &req) const = 0;

protected:
    static constexpr const char* SEPARATOR_REGEX  = "[!?<>\"'=+*.:,;\\\\\\/ _\\-]+";

};
