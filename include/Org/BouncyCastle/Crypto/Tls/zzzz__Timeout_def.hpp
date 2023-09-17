#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Timeout;
}
// Type: Org.BouncyCastle.Crypto.Tls::Timeout
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1286))
// CS Name: Org.BouncyCastle.Crypto.Tls.Timeout
class CORDL_TYPE Timeout : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Timeout() = default;

// Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: " const&", def_value: None }]
constexpr Timeout(Timeout const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: "&&", def_value: None }]
constexpr Timeout(Timeout&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Timeout(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Timeout& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Timeout& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Timeout& operator=(Timeout&& o) noexcept = default;
  constexpr Timeout& operator=(Timeout const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_durationMillis, put=__set_durationMillis))  durationMillis;

constexpr void __set_durationMillis(int64_t value) ;

constexpr int64_t __get_durationMillis() const;

 int64_t __declspec(property(get=__get_startMillis, put=__set_startMillis))  startMillis;

constexpr void __set_startMillis(int64_t value) ;

constexpr int64_t __get_startMillis() const;


// Methods

// Ctor Parameters [CppParam { name: "durationMillis", ty: "int64_t", modifiers: "", def_value: None }]
explicit Timeout(int64_t durationMillis) ;

/// @brief Method .ctor addr 0xf0b6e8 size 0x70 virtual false final false
 void _ctor(int64_t durationMillis) ;

// Ctor Parameters [CppParam { name: "durationMillis", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "currentTimeMillis", ty: "int64_t", modifiers: "", def_value: None }]
explicit Timeout(int64_t durationMillis, int64_t currentTimeMillis) ;

/// @brief Method .ctor addr 0xf0b758 size 0x94 virtual false final false
 void _ctor(int64_t durationMillis, int64_t currentTimeMillis) ;

/// @brief Method RemainingMillis addr 0xf0b7ec size 0x64 virtual false final false
 int64_t RemainingMillis(int64_t currentTimeMillis) ;

/// @brief Method ConstrainWaitMillis addr 0xf0b850 size 0xc8 virtual false final false
static int32_t ConstrainWaitMillis(int32_t waitMillis, ::Org::BouncyCastle::Crypto::Tls::Timeout timeout, int64_t currentTimeMillis) ;

/// @brief Method ForWaitMillis addr 0xf0b94c size 0x60 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::Timeout ForWaitMillis(int32_t waitMillis) ;

/// @brief Method ForWaitMillis addr 0xf0b9ac size 0xd8 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::Timeout ForWaitMillis(int32_t waitMillis, int64_t currentTimeMillis) ;

/// @brief Method GetWaitMillis addr 0xf0b918 size 0x34 virtual false final false
static int32_t GetWaitMillis(::Org::BouncyCastle::Crypto::Tls::Timeout timeout, int64_t currentTimeMillis) ;

/// @brief Method HasExpired addr 0xf0ba84 size 0x1c virtual false final false
static bool HasExpired(::Org::BouncyCastle::Crypto::Tls::Timeout timeout, int64_t currentTimeMillis) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::Timeout);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::Timeout, "Org.BouncyCastle.Crypto.Tls", "Timeout");
