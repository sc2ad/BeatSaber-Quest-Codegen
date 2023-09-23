#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Collections::Generic {
class BitHelper;
}
// Type: System.Collections.Generic::BitHelper
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8382))
// CS Name: System.Collections.Generic.BitHelper
class CORDL_TYPE BitHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BitHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "BitHelper", modifiers: " const&", def_value: None }]
constexpr BitHelper(BitHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BitHelper", modifiers: "&&", def_value: None }]
constexpr BitHelper(BitHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BitHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BitHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BitHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BitHelper& operator=(BitHelper&& o) noexcept = default;
  constexpr BitHelper& operator=(BitHelper const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;

 void* __declspec(property(get=__get__arrayPtr, put=__set__arrayPtr))  _arrayPtr;

constexpr void __set__arrayPtr(void* value) ;

constexpr void* __get__arrayPtr() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__array() const;

 bool __declspec(property(get=__get__useStackAlloc, put=__set__useStackAlloc))  _useStackAlloc;

constexpr void __set__useStackAlloc(bool value) ;

constexpr bool __get__useStackAlloc() const;


// Methods

// Ctor Parameters [CppParam { name: "bitArrayPtr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit BitHelper(void* bitArrayPtr, int32_t length) ;

/// @brief Method .ctor addr 0x27af1b8 size 0x38 virtual false final false
 void _ctor(void* bitArrayPtr, int32_t length) ;

// Ctor Parameters [CppParam { name: "bitArray", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit BitHelper(::ArrayW<int32_t> bitArray, int32_t length) ;

/// @brief Method .ctor addr 0x27af1f0 size 0x30 virtual false final false
 void _ctor(::ArrayW<int32_t> bitArray, int32_t length) ;

/// @brief Method MarkBit addr 0x27af220 size 0x7c virtual false final false
 void MarkBit(int32_t bitPosition) ;

/// @brief Method IsMarked addr 0x27af29c size 0x84 virtual false final false
 bool IsMarked(int32_t bitPosition) ;

/// @brief Method ToIntArrayLength addr 0x27af320 size 0x28 virtual false final false
static int32_t ToIntArrayLength(int32_t n) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
NEED_NO_BOX(System::Collections::Generic::BitHelper);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::BitHelper, "System.Collections.Generic", "BitHelper");
