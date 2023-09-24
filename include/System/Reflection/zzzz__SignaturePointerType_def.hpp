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
class SignaturePointerType;
}
// Type: System.Reflection::SignaturePointerType
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3485))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3486))
// CS Name: System.Reflection.SignaturePointerType
class CORDL_TYPE SignaturePointerType : public System::Reflection::SignatureHasElementType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignaturePointerType() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePointerType", modifiers: " const&", def_value: None }]
constexpr SignaturePointerType(SignaturePointerType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePointerType", modifiers: "&&", def_value: None }]
constexpr SignaturePointerType(SignaturePointerType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignaturePointerType(void* ptr) noexcept : System::Reflection::SignatureHasElementType(ptr) {
}


  constexpr SignaturePointerType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignaturePointerType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignaturePointerType& operator=(SignaturePointerType&& o) noexcept = default;
  constexpr SignaturePointerType& operator=(SignaturePointerType const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsSZArray))  IsSZArray;

 bool __declspec(property(get=get_IsVariableBoundArray))  IsVariableBoundArray;

 ::StringW __declspec(property(get=get_Suffix))  Suffix;


// Methods

static System::Reflection::SignaturePointerType New_ctor(System::Reflection::SignatureType elementType) ;

/// @brief Method .ctor addr 0x237d6dc size 0x24 virtual false final false
 void _ctor(System::Reflection::SignatureType elementType) ;

/// @brief Method IsArrayImpl addr 0x237d700 size 0x8 virtual true final true
 bool IsArrayImpl() ;

/// @brief Method IsByRefImpl addr 0x237d708 size 0x8 virtual true final true
 bool IsByRefImpl() ;

/// @brief Method IsPointerImpl addr 0x237d710 size 0x8 virtual true final true
 bool IsPointerImpl() ;

/// @brief Method get_IsSZArray addr 0x237d718 size 0x8 virtual true final true
 bool get_IsSZArray() ;

/// @brief Method get_IsVariableBoundArray addr 0x237d720 size 0x8 virtual true final true
 bool get_IsVariableBoundArray() ;

/// @brief Method GetArrayRank addr 0x237d728 size 0x50 virtual true final true
 int32_t GetArrayRank() ;

/// @brief Method get_Suffix addr 0x237d778 size 0x40 virtual true final true
 ::StringW get_Suffix() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::SignaturePointerType);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::SignaturePointerType, "System.Reflection", "SignaturePointerType");
