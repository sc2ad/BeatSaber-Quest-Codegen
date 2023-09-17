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
class SignatureConstructedGenericType;
}
// Type: System.Reflection::SignatureConstructedGenericType
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3487))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3484))
// CS Name: System.Reflection.SignatureConstructedGenericType
class CORDL_TYPE SignatureConstructedGenericType : public ::System::Reflection::SignatureType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SignatureConstructedGenericType() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureConstructedGenericType", modifiers: " const&", def_value: None }]
constexpr SignatureConstructedGenericType(SignatureConstructedGenericType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureConstructedGenericType", modifiers: "&&", def_value: None }]
constexpr SignatureConstructedGenericType(SignatureConstructedGenericType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureConstructedGenericType(void* ptr) noexcept : ::System::Reflection::SignatureType(ptr) {
}


  constexpr SignatureConstructedGenericType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureConstructedGenericType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureConstructedGenericType& operator=(SignatureConstructedGenericType&& o) noexcept = default;
  constexpr SignatureConstructedGenericType& operator=(SignatureConstructedGenericType const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get__genericTypeDefinition, put=__set__genericTypeDefinition))  _genericTypeDefinition;

constexpr void __set__genericTypeDefinition(::System::Type value) ;

constexpr ::System::Type __get__genericTypeDefinition() const;

 ::ArrayW<::System::Type> __declspec(property(get=__get__genericTypeArguments, put=__set__genericTypeArguments))  _genericTypeArguments;

constexpr void __set__genericTypeArguments(::ArrayW<::System::Type> value) ;

constexpr ::ArrayW<::System::Type> __get__genericTypeArguments() const;


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


// Methods

// Ctor Parameters [CppParam { name: "genericTypeDefinition", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "typeArguments", ty: "::ArrayW<::System::Type>", modifiers: "", def_value: None }]
explicit SignatureConstructedGenericType(::System::Type genericTypeDefinition, ::ArrayW<::System::Type> typeArguments) ;

/// @brief Method .ctor addr 0x237cec0 size 0x1a4 virtual false final false
 void _ctor(::System::Type genericTypeDefinition, ::ArrayW<::System::Type> typeArguments) ;

/// @brief Method get_IsGenericTypeDefinition addr 0x237d0bc size 0x8 virtual true final true
 bool get_IsGenericTypeDefinition() ;

/// @brief Method HasElementTypeImpl addr 0x237d0c4 size 0x8 virtual true final true
 bool HasElementTypeImpl() ;

/// @brief Method IsArrayImpl addr 0x237d0cc size 0x8 virtual true final true
 bool IsArrayImpl() ;

/// @brief Method IsByRefImpl addr 0x237d0d4 size 0x8 virtual true final true
 bool IsByRefImpl() ;

/// @brief Method IsPointerImpl addr 0x237d0dc size 0x8 virtual true final true
 bool IsPointerImpl() ;

/// @brief Method get_IsSZArray addr 0x237d0e4 size 0x8 virtual true final true
 bool get_IsSZArray() ;

/// @brief Method get_IsVariableBoundArray addr 0x237d0ec size 0x8 virtual true final true
 bool get_IsVariableBoundArray() ;

/// @brief Method get_IsConstructedGenericType addr 0x237d0f4 size 0x8 virtual true final true
 bool get_IsConstructedGenericType() ;

/// @brief Method get_IsGenericParameter addr 0x237d0fc size 0x8 virtual true final true
 bool get_IsGenericParameter() ;

/// @brief Method get_IsGenericMethodParameter addr 0x237d104 size 0x8 virtual true final true
 bool get_IsGenericMethodParameter() ;

/// @brief Method get_ContainsGenericParameters addr 0x237d10c size 0x78 virtual true final true
 bool get_ContainsGenericParameters() ;

/// @brief Method get_ElementType addr 0x237d184 size 0x8 virtual true final true
 ::System::Reflection::SignatureType get_ElementType() ;

/// @brief Method GetArrayRank addr 0x237d18c size 0x50 virtual true final true
 int32_t GetArrayRank() ;

/// @brief Method GetGenericTypeDefinition addr 0x237d1dc size 0x8 virtual true final true
 ::System::Type GetGenericTypeDefinition() ;

/// @brief Method GetGenericArguments addr 0x237d1e4 size 0x10 virtual true final true
 ::ArrayW<::System::Type> GetGenericArguments() ;

/// @brief Method get_GenericTypeArguments addr 0x237d1f4 size 0x78 virtual true final true
 ::ArrayW<::System::Type> get_GenericTypeArguments() ;

/// @brief Method get_GenericParameterPosition addr 0x237d26c size 0x50 virtual true final true
 int32_t get_GenericParameterPosition() ;

/// @brief Method get_Name addr 0x237d2bc size 0x20 virtual true final true
 ::StringW get_Name() ;

/// @brief Method get_Namespace addr 0x237d2dc size 0x24 virtual true final true
 ::StringW get_Namespace() ;

/// @brief Method ToString addr 0x237d300 size 0x124 virtual true final true
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::SignatureConstructedGenericType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureConstructedGenericType, "System.Reflection", "SignatureConstructedGenericType");
