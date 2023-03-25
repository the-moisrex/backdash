// Created by moisrex on 5/5/20.

#ifndef BACKDASH_APP_HPP
#define BACKDASH_APP_HPP

#include <webpp/http/http.hpp>
#include <webpp/http/routes/dynamic_router.hpp>

namespace back {

struct app : webpp::http::dynamic_router {};

} // namespace back

#endif // BACKDASH_APP_HPP
