#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__SignatureHasElementType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection {
class SignatureType;
}
// Forward declare root types
namespace System::Reflection {
class SignatureByRefType;
}
// Type: System.Reflection::SignatureByRefType
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3485))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3483))
// CS Name: System.Reflection.SignatureByRefType
class CORDL_TYPE SignatureByRefType : public System::Reflection::SignatureHasElementType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignatureByRefType() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureByRefType", modifiers: " const&", def_value: None }]
constexpr SignatureByRefType(SignatureByRefType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureByRefType", modifiers: "&&", def_value: None }]
constexpr SignatureByRefType(SignatureByRefType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureByRefType(void* ptr) noexcept : System::Reflection::SignatureHasElementType(ptr) {
}


  constexpr SignatureByRefType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureByRefType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureByRefType& operator=(SignatureByRefType&& o) noexcept = default;
  constexpr SignatureByRefType& operator=(SignatureByRefType const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsSZArray))  IsSZArray;

 bool __declspec(property(get=get_IsVariableBoundArray))  IsVariableBoundArray;

 ::StringW __declspec(property(get=get_Suffix))  Suffix;


// Methods

static System::Reflection::SignatureByRefType New_ctor(System::Reflection::SignatureType elementType) ;

/// @brief Method .ctor addr 0x237cde4 size 0x24 virtual false final false
 void _ctor(System::Reflection::SignatureType elementType) ;

/// @brief Method IsArrayImpl addr 0x237ce08 size 0x8 virtual true final true
 bool IsArrayImpl() ;

/// @brief Method IsByRefImpl addr 0x237ce10 size 0x8 virtual true final true
 bool IsByRefImpl() ;

/// @brief Method IsPointerImpl addr 0x237ce18 size 0x8 virtual true final true
 bool IsPointerImpl() ;

/// @brief Method get_IsSZArray addr 0x237ce20 size 0x8 virtual true final true
 bool get_IsSZArray() ;

/// @brief Method get_IsVariableBoundArray addr 0x237ce28 size 0x8 virtual true final true
 bool get_IsVariableBoundArray() ;

/// @brief Method GetArrayRank addr 0x237ce30 size 0x50 virtual true final true
 int32_t GetArrayRank() ;

/// @brief Method get_Suffix addr 0x237ce80 size 0x40 virtual true final true
 ::StringW get_Suffix() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::SignatureByRefType);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::SignatureByRefType, "System.Reflection", "SignatureByRefType");
