#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerID;
}
// Type: Org.BouncyCastle.Cms::SignerID
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(678))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(688))
// CS Name: Org.BouncyCastle.Cms.SignerID
class CORDL_TYPE SignerID : public ::Org::BouncyCastle::X509::Store::X509CertStoreSelector {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~SignerID() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerID", modifiers: " const&", def_value: None }]
constexpr SignerID(SignerID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerID", modifiers: "&&", def_value: None }]
constexpr SignerID(SignerID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerID(void* ptr) noexcept : ::Org::BouncyCastle::X509::Store::X509CertStoreSelector(ptr) {
}


  constexpr SignerID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerID& operator=(SignerID&& o) noexcept = default;
  constexpr SignerID& operator=(SignerID const& o) noexcept = default;
                


// Methods

/// @brief Method GetHashCode addr 0x117d850 size 0xa4 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x117d8f4 size 0x12c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit SignerID() ;

/// @brief Method .ctor addr 0x117da20 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::SignerID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SignerID, "Org.BouncyCastle.Cms", "SignerID");
