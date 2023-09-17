#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SupplementalDataType;
}
// Type: Org.BouncyCastle.Crypto.Tls::SupplementalDataType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1285))
// CS Name: Org.BouncyCastle.Crypto.Tls.SupplementalDataType
class CORDL_TYPE SupplementalDataType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SupplementalDataType() = default;

// Ctor Parameters [CppParam { name: "", ty: "SupplementalDataType", modifiers: " const&", def_value: None }]
constexpr SupplementalDataType(SupplementalDataType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SupplementalDataType", modifiers: "&&", def_value: None }]
constexpr SupplementalDataType(SupplementalDataType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SupplementalDataType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SupplementalDataType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SupplementalDataType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SupplementalDataType& operator=(SupplementalDataType&& o) noexcept = default;
  constexpr SupplementalDataType& operator=(SupplementalDataType const& o) noexcept = default;
                


// Fields

/// @brief Field user_mapping_data offset 0
static constexpr int32_t  user_mapping_data{0};


// Methods

// Ctor Parameters []
explicit SupplementalDataType() ;

/// @brief Method .ctor addr 0xf0b6e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SupplementalDataType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SupplementalDataType, "Org.BouncyCastle.Crypto.Tls", "SupplementalDataType");
