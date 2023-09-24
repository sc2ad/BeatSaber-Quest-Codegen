#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class NameType;
}
// Type: Org.BouncyCastle.Crypto.Tls::NameType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1256))
// CS Name: Org.BouncyCastle.Crypto.Tls.NameType
class CORDL_TYPE NameType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NameType() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameType", modifiers: " const&", def_value: None }]
constexpr NameType(NameType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameType", modifiers: "&&", def_value: None }]
constexpr NameType(NameType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NameType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameType& operator=(NameType&& o) noexcept = default;
  constexpr NameType& operator=(NameType const& o) noexcept = default;
                


// Fields

/// @brief Field host_name offset 0
static constexpr uint8_t  host_name{0u};


// Methods

/// @brief Method IsValid addr 0xf04d98 size 0xc virtual false final false
static bool IsValid(uint8_t nameType) ;

static Org::BouncyCastle::Crypto::Tls::NameType New_ctor() ;

/// @brief Method .ctor addr 0xf04da4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::NameType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::NameType, "Org.BouncyCastle.Crypto.Tls", "NameType");
