#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerStringBase;
}
// Type: Org.BouncyCastle.Asn1::DerStringBase
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(33))
// CS Name: Org.BouncyCastle.Asn1.DerStringBase
class CORDL_TYPE DerStringBase : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1String
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1String() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DerStringBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerStringBase", modifiers: " const&", def_value: None }]
constexpr DerStringBase(DerStringBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerStringBase", modifiers: "&&", def_value: None }]
constexpr DerStringBase(DerStringBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerStringBase(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr DerStringBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerStringBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerStringBase& operator=(DerStringBase&& o) noexcept = default;
  constexpr DerStringBase& operator=(DerStringBase const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DerStringBase() ;

/// @brief Method .ctor addr 0xddd4b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetString() ;

/// @brief Method ToString addr 0xddd4c0 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method Asn1GetHashCode addr 0xddd4cc size 0x24 virtual true final false
 int32_t Asn1GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerStringBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerStringBase, "Org.BouncyCastle.Asn1", "DerStringBase");
