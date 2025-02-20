// This file Copyright 2021-2022 Mnemosyne LLC.
// It may be used under GPLv2 (SPDX: GPL-2.0), GPLv3 (SPDX: GPL-3.0),
// or any future license endorsed by Mnemosyne LLC.
// License text can be found in the licenses/ folder.

#pragma once

#include <string>
#include <string_view>
#include <vector>

#include "transmission.h"

#include "announce-list.h"
#include "tr-strbuf.h" // tr_urlbuf

struct tr_error;
struct tr_variant;

class tr_magnet_metainfo
{
public:
    bool parseMagnet(std::string_view magnet_link, tr_error** error = nullptr);

    [[nodiscard]] tr_urlbuf magnet() const;

    [[nodiscard]] constexpr auto const& infoHash() const noexcept
    {
        return info_hash_;
    }

    [[nodiscard]] constexpr auto const& name() const noexcept
    {
        return name_;
    }

    [[nodiscard]] constexpr auto webseedCount() const noexcept
    {
        return std::size(webseed_urls_);
    }

    [[nodiscard]] auto const& webseed(size_t i) const
    {
        return webseed_urls_[i];
    }

    [[nodiscard]] constexpr auto& announceList() noexcept
    {
        return announce_list_;
    }

    [[nodiscard]] constexpr auto const& announceList() const noexcept
    {
        return announce_list_;
    }

    [[nodiscard]] constexpr std::string const& infoHashString() const noexcept
    {
        return info_hash_str_;
    }

    void setName(std::string_view name)
    {
        name_ = name;
    }

protected:
    tr_announce_list announce_list_;
    std::vector<std::string> webseed_urls_;
    tr_sha1_digest_t info_hash_ = {};
    std::string info_hash_str_;
    std::string name_;
};
