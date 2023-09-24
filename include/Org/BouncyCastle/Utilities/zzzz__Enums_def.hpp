#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Array;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Enums;
}
// Type: Org.BouncyCastle.Utilities::Enums
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1833))
// CS Name: Org.BouncyCastle.Utilities.Enums
class CORDL_TYPE Enums : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Enums() = default;

// Ctor Parameters [CppParam { name: "", ty: "Enums", modifiers: " const&", def_value: None }]
constexpr Enums(Enums const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Enums", modifiers: "&&", def_value: None }]
constexpr Enums(Enums&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Enums(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Enums& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Enums& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Enums& operator=(Enums&& o) noexcept = default;
  constexpr Enums& operator=(Enums const& o) noexcept = default;
                


// Methods

/// @brief Method GetEnumValue addr 0x10e25c4 size 0x1e4 virtual false final false
static ::bs_hook::EnumTypeWrapper GetEnumValue(System::Type enumType, ::StringW s) ;

/// @brief Method GetEnumValues addr 0x10e27c8 size 0xd8 virtual false final false
static System::Array GetEnumValues(System::Type enumType) ;

/// @brief Method GetArbitraryValue addr 0x10e28a0 size 0xe0 virtual false final false
static ::bs_hook::EnumTypeWrapper GetArbitraryValue(System::Type enumType) ;

/// @brief Method IsEnumType addr 0x10e27a8 size 0x20 virtual false final false
static bool IsEnumType(System::Type t) ;

static Org::BouncyCastle::Utilities::Enums New_ctor() ;

/// @brief Method .ctor addr 0x10e2980 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities
NEED_NO_BOX(Org::BouncyCastle::Utilities::Enums);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Enums, "Org.BouncyCastle.Utilities", "Enums");
