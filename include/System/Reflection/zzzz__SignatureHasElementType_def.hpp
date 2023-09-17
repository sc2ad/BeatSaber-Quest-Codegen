#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__SignatureType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace System::Reflection {
class SignatureType;
}
// Forward declare root types
namespace System::Reflection {
class SignatureHasElementType;
}
// Type: System.Reflection::SignatureHasElementType
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3487))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3485))
// CS Name: System.Reflection.SignatureHasElementType
class CORDL_TYPE SignatureHasElementType : public ::System::Reflection::SignatureType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignatureHasElementType() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureHasElementType", modifiers: " const&", def_value: None }]
constexpr SignatureHasElementType(SignatureHasElementType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureHasElementType", modifiers: "&&", def_value: None }]
constexpr SignatureHasElementType(SignatureHasElementType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureHasElementType(void* ptr) noexcept : ::System::Reflection::SignatureType(ptr) {
}


  constexpr SignatureHasElementType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureHasElementType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureHasElementType& operator=(SignatureHasElementType&& o) noexcept = default;
  constexpr SignatureHasElementType& operator=(SignatureHasElementType const& o) noexcept = default;
                


// Fields

 ::System::Reflection::SignatureType __declspec(property(get=__get__elementType, put=__set__elementType))  _elementType;

constexpr void __set__elementType(::System::Reflection::SignatureType value) ;

constexpr ::System::Reflection::SignatureType __get__elementType() const;


// Properties

 bool __declspec(property(get=get_IsGenericTypeDefinition))  IsGenericTypeDefinition;

 bool __declspec(property(get=get_IsSZArray))  IsSZArray;

 bool __declspec(property(get=get_IsVariableBoundArray))  IsVariableBoundArray;

 bool __declspec(property(get=get_IsConstructedGenericType))  IsConstructedGenericType;

 bool __declspec(property(get=get_IsGenericParameter))  IsGenericParameter;

 bool __declspec(property(get=get_IsGenericMethodParameter))  IsGenericMethodParameter;

 bool __declspec(property(get=get_ContainsGenericParameters))  ContainsGenericParameters;

 ::System::Reflection::SignatureType __declspec(property(get=get_ElementType))  ElementType;

 ::ArrayW<::System::Type> __declspec(property(get=get_GenericTypeArguments))  GenericTypeArguments;

 int32_t __declspec(property(get=get_GenericParameterPosition))  GenericParameterPosition;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Namespace))  Namespace;

 ::StringW __declspec(property(get=get_Suffix))  Suffix;


// Methods

// Ctor Parameters [CppParam { name: "elementType", ty: "::System::Reflection::SignatureType", modifiers: "", def_value: None }]
explicit SignatureHasElementType(::System::Reflection::SignatureType elementType) ;

/// @brief Method .ctor addr 0x237ccc0 size 0x24 virtual false final false
 void _ctor(::System::Reflection::SignatureType elementType) ;

/// @brief Method get_IsGenericTypeDefinition addr 0x237d424 size 0x8 virtual true final true
 bool get_IsGenericTypeDefinition() ;

/// @brief Method HasElementTypeImpl addr 0x237d42c size 0x8 virtual true final true
 bool HasElementTypeImpl() ;

/// @brief Method IsArrayImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsArrayImpl() ;

/// @brief Method IsByRefImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsByRefImpl() ;

/// @brief Method IsPointerImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsPointerImpl() ;

/// @brief Method get_IsSZArray addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsSZArray() ;

/// @brief Method get_IsVariableBoundArray addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsVariableBoundArray() ;

/// @brief Method get_IsConstructedGenericType addr 0x237d434 size 0x8 virtual true final true
 bool get_IsConstructedGenericType() ;

/// @brief Method get_IsGenericParameter addr 0x237d43c size 0x8 virtual true final true
 bool get_IsGenericParameter() ;

/// @brief Method get_IsGenericMethodParameter addr 0x237d444 size 0x8 virtual true final true
 bool get_IsGenericMethodParameter() ;

/// @brief Method get_ContainsGenericParameters addr 0x237d44c size 0x24 virtual true final true
 bool get_ContainsGenericParameters() ;

/// @brief Method get_ElementType addr 0x237d470 size 0x8 virtual true final true
 ::System::Reflection::SignatureType get_ElementType() ;

/// @brief Method GetArrayRank addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetArrayRank() ;

/// @brief Method GetGenericTypeDefinition addr 0x237d478 size 0x50 virtual true final true
 ::System::Type GetGenericTypeDefinition() ;

/// @brief Method GetGenericArguments addr 0x237d4c8 size 0x7c virtual true final true
 ::ArrayW<::System::Type> GetGenericArguments() ;

/// @brief Method get_GenericTypeArguments addr 0x237d544 size 0x7c virtual true final true
 ::ArrayW<::System::Type> get_GenericTypeArguments() ;

/// @brief Method get_GenericParameterPosition addr 0x237d5c0 size 0x50 virtual true final true
 int32_t get_GenericParameterPosition() ;

/// @brief Method get_Name addr 0x237d610 size 0x54 virtual true final true
 ::StringW get_Name() ;

/// @brief Method get_Namespace addr 0x237d664 size 0x24 virtual true final true
 ::StringW get_Namespace() ;

/// @brief Method ToString addr 0x237d688 size 0x54 virtual true final true
 ::StringW ToString() ;

/// @brief Method get_Suffix addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Suffix() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::SignatureHasElementType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureHasElementType, "System.Reflection", "SignatureHasElementType");
