#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ConnectionEnd;
}
// Type: Org.BouncyCastle.Crypto.Tls::ConnectionEnd
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1204))
// CS Name: Org.BouncyCastle.Crypto.Tls.ConnectionEnd
class CORDL_TYPE ConnectionEnd : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConnectionEnd() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionEnd", modifiers: " const&", def_value: None }]
constexpr ConnectionEnd(ConnectionEnd const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionEnd", modifiers: "&&", def_value: None }]
constexpr ConnectionEnd(ConnectionEnd&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectionEnd(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConnectionEnd& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectionEnd& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectionEnd& operator=(ConnectionEnd&& o) noexcept = default;
  constexpr ConnectionEnd& operator=(ConnectionEnd const& o) noexcept = default;
                


// Fields

/// @brief Field server offset 0
static constexpr int32_t  server{0};

/// @brief Field client offset 0
static constexpr int32_t  client{1};


// Methods

// Ctor Parameters []
explicit ConnectionEnd() ;

/// @brief Method .ctor addr 0xed3b90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ConnectionEnd);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ConnectionEnd, "Org.BouncyCastle.Crypto.Tls", "ConnectionEnd");
