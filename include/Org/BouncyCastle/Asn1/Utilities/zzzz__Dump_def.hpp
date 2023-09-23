#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Utilities {
class Dump;
}
// Type: Org.BouncyCastle.Asn1.Utilities::Dump
namespace Org::BouncyCastle::Asn1::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(321))
// CS Name: Org.BouncyCastle.Asn1.Utilities.Dump
class CORDL_TYPE Dump : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Dump() = default;

// Ctor Parameters [CppParam { name: "", ty: "Dump", modifiers: " const&", def_value: None }]
constexpr Dump(Dump const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Dump", modifiers: "&&", def_value: None }]
constexpr Dump(Dump&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Dump(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Dump& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Dump& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Dump& operator=(Dump&& o) noexcept = default;
  constexpr Dump& operator=(Dump const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Dump() ;

/// @brief Method .ctor addr 0xff14f0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Main addr 0xff14f8 size 0x144 virtual false final false
static void Main(::ArrayW<::StringW> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Utilities
NEED_NO_BOX(Org::BouncyCastle::Asn1::Utilities::Dump);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Utilities::Dump, "Org.BouncyCastle.Asn1.Utilities", "Dump");
