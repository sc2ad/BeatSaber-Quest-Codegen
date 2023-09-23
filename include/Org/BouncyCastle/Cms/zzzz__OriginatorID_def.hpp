#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class OriginatorID;
}
// Type: Org.BouncyCastle.Cms::OriginatorID
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(678))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(679))
// CS Name: Org.BouncyCastle.Cms.OriginatorID
class CORDL_TYPE OriginatorID : public Org::BouncyCastle::X509::Store::X509CertStoreSelector {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~OriginatorID() = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorID", modifiers: " const&", def_value: None }]
constexpr OriginatorID(OriginatorID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorID", modifiers: "&&", def_value: None }]
constexpr OriginatorID(OriginatorID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OriginatorID(void* ptr) noexcept : Org::BouncyCastle::X509::Store::X509CertStoreSelector(ptr) {
}


  constexpr OriginatorID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OriginatorID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OriginatorID& operator=(OriginatorID&& o) noexcept = default;
  constexpr OriginatorID& operator=(OriginatorID const& o) noexcept = default;
                


// Methods

/// @brief Method GetHashCode addr 0x117b5a4 size 0xa4 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x117b648 size 0x12c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit OriginatorID() ;

/// @brief Method .ctor addr 0x1178f1c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::OriginatorID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::OriginatorID, "Org.BouncyCastle.Cms", "OriginatorID");
