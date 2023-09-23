#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsContext
constexpr  Org::BouncyCastle::Crypto::Tls::TlsClientContext::operator Org::BouncyCastle::Crypto::Tls::TlsContext() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsContext(::bs_hook::Il2CppWrapperType::instance);
}
