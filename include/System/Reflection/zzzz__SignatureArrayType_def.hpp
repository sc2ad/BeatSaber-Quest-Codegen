#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__SignatureHasElementType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
class SignatureType;
}
// Forward declare root types
namespace System::Reflection {
class SignatureArrayType;
}
// Type: System.Reflection::SignatureArrayType
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3485))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3482))
// CS Name: System.Reflection.SignatureArrayType
class CORDL_TYPE SignatureArrayType : public ::System::Reflection::SignatureHasElementType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SignatureArrayType() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureArrayType", modifiers: " const&", def_value: None }]
constexpr SignatureArrayType(SignatureArrayType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureArrayType", modifiers: "&&", def_value: None }]
constexpr SignatureArrayType(SignatureArrayType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureArrayType(void* ptr) noexcept : ::System::Reflection::SignatureHasElementType(ptr) {
}


  constexpr SignatureArrayType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureArrayType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureArrayType& operator=(SignatureArrayType&& o) noexcept = default;
  constexpr SignatureArrayType& operator=(SignatureArrayType const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__rank, put=__set__rank))  _rank;

constexpr void __set__rank(int32_t value) ;

constexpr int32_t __get__rank() const;

 bool __declspec(property(get=__get__isMultiDim, put=__set__isMultiDim))  _isMultiDim;

constexpr void __set__isMultiDim(bool value) ;

constexpr bool __get__isMultiDim() const;


// Properties

 bool __declspec(property(get=get_IsSZArray))  IsSZArray;

 bool __declspec(property(get=get_IsVariableBoundArray))  IsVariableBoundArray;

 ::StringW __declspec(property(get=get_Suffix))  Suffix;


// Methods

// Ctor Parameters [CppParam { name: "elementType", ty: "::System::Reflection::SignatureType", modifiers: "", def_value: None }, CppParam { name: "rank", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isMultiDim", ty: "bool", modifiers: "", def_value: None }]
explicit SignatureArrayType(::System::Reflection::SignatureType elementType, int32_t rank, bool isMultiDim) ;

/// @brief Method .ctor addr 0x237cc84 size 0x3c virtual false final false
 void _ctor(::System::Reflection::SignatureType elementType, int32_t rank, bool isMultiDim) ;

/// @brief Method IsArrayImpl addr 0x237cce4 size 0x8 virtual true final true
 bool IsArrayImpl() ;

/// @brief Method IsByRefImpl addr 0x237ccec size 0x8 virtual true final true
 bool IsByRefImpl() ;

/// @brief Method IsPointerImpl addr 0x237ccf4 size 0x8 virtual true final true
 bool IsPointerImpl() ;

/// @brief Method get_IsSZArray addr 0x237ccfc size 0x10 virtual true final true
 bool get_IsSZArray() ;

/// @brief Method get_IsVariableBoundArray addr 0x237cd0c size 0x8 virtual true final true
 bool get_IsVariableBoundArray() ;

/// @brief Method GetArrayRank addr 0x237cd14 size 0x8 virtual true final true
 int32_t GetArrayRank() ;

/// @brief Method get_Suffix addr 0x237cd1c size 0xc8 virtual true final true
 ::StringW get_Suffix() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::SignatureArrayType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureArrayType, "System.Reflection", "SignatureArrayType");
