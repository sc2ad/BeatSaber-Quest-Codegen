#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class SignatureType;
}
// Forward declare root types
namespace System::Reflection {
class SignatureTypeExtensions;
}
// Type: System.Reflection::SignatureTypeExtensions
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3488))
// CS Name: System.Reflection.SignatureTypeExtensions
class CORDL_TYPE SignatureTypeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SignatureTypeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureTypeExtensions", modifiers: " const&", def_value: None }]
constexpr SignatureTypeExtensions(SignatureTypeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureTypeExtensions", modifiers: "&&", def_value: None }]
constexpr SignatureTypeExtensions(SignatureTypeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureTypeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignatureTypeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureTypeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureTypeExtensions& operator=(SignatureTypeExtensions&& o) noexcept = default;
  constexpr SignatureTypeExtensions& operator=(SignatureTypeExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method MatchesParameterTypeExactly addr 0x237e90c size 0xb4 virtual false final false
static bool MatchesParameterTypeExactly(System::Type pattern, System::Reflection::ParameterInfo parameter) ;

/// @brief Method MatchesExactly addr 0x237e9c0 size 0x3a8 virtual false final false
static bool MatchesExactly(System::Reflection::SignatureType pattern, System::Type actual) ;

/// @brief Method TryResolveAgainstGenericMethod addr 0x237ed68 size 0x38 virtual false final false
static System::Type TryResolveAgainstGenericMethod(System::Reflection::SignatureType signatureType, System::Reflection::MethodInfo genericMethod) ;

/// @brief Method TryResolve addr 0x237eda0 size 0x3bc virtual false final false
static System::Type TryResolve(System::Reflection::SignatureType signatureType, ::ArrayW<System::Type> genericMethodParameters) ;

/// @brief Method TryMakeArrayType addr 0x237f15c size 0x9c virtual false final false
static System::Type TryMakeArrayType(System::Type type) ;

/// @brief Method TryMakeArrayType addr 0x237f1f8 size 0x9c virtual false final false
static System::Type TryMakeArrayType(System::Type type, int32_t rank) ;

/// @brief Method TryMakeByRefType addr 0x237f294 size 0x9c virtual false final false
static System::Type TryMakeByRefType(System::Type type) ;

/// @brief Method TryMakePointerType addr 0x237f330 size 0x9c virtual false final false
static System::Type TryMakePointerType(System::Type type) ;

/// @brief Method TryMakeGenericType addr 0x237f3cc size 0x9c virtual false final false
static System::Type TryMakeGenericType(System::Type type, ::ArrayW<System::Type> instantiation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::SignatureTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::SignatureTypeExtensions, "System.Reflection", "SignatureTypeExtensions");
