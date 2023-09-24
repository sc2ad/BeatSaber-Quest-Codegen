#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class UserMappingType;
}
// Type: Org.BouncyCastle.Crypto.Tls::UserMappingType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1334))
// CS Name: Org.BouncyCastle.Crypto.Tls.UserMappingType
class CORDL_TYPE UserMappingType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UserMappingType() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserMappingType", modifiers: " const&", def_value: None }]
constexpr UserMappingType(UserMappingType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserMappingType", modifiers: "&&", def_value: None }]
constexpr UserMappingType(UserMappingType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserMappingType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserMappingType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserMappingType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserMappingType& operator=(UserMappingType&& o) noexcept = default;
  constexpr UserMappingType& operator=(UserMappingType const& o) noexcept = default;
                


// Fields

/// @brief Field upn_domain_hint offset 0
static constexpr uint8_t  upn_domain_hint{64u};


// Methods

static Org::BouncyCastle::Crypto::Tls::UserMappingType New_ctor() ;

/// @brief Method .ctor addr 0xf32f4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::UserMappingType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::UserMappingType, "Org.BouncyCastle.Crypto.Tls", "UserMappingType");
