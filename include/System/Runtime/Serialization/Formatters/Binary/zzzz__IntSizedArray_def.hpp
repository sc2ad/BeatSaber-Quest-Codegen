#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class IntSizedArray;
}
// Type: System.Runtime.Serialization.Formatters.Binary::IntSizedArray
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3290))
// CS Name: System.Runtime.Serialization.Formatters.Binary.IntSizedArray
class CORDL_TYPE IntSizedArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IntSizedArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntSizedArray", modifiers: " const&", def_value: None }]
constexpr IntSizedArray(IntSizedArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntSizedArray", modifiers: "&&", def_value: None }]
constexpr IntSizedArray(IntSizedArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntSizedArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntSizedArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntSizedArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntSizedArray& operator=(IntSizedArray&& o) noexcept = default;
  constexpr IntSizedArray& operator=(IntSizedArray const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_objects, put=__set_objects))  objects;

constexpr void __set_objects(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_objects() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_negObjects, put=__set_negObjects))  negObjects;

constexpr void __set_negObjects(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_negObjects() const;


// Properties

 int32_t __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters []
explicit IntSizedArray() ;

/// @brief Method .ctor addr 0x2362970 size 0x68 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "sizedArray", ty: "::System::Runtime::Serialization::Formatters::Binary::IntSizedArray", modifiers: "", def_value: None }]
explicit IntSizedArray(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray sizedArray) ;

/// @brief Method .ctor addr 0x2369b4c size 0xdc virtual false final false
 void _ctor(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray sizedArray) ;

/// @brief Method Clone addr 0x2369c28 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_Item addr 0x23629d8 size 0x78 virtual false final false
 int32_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2362a50 size 0xb4 virtual false final false
 void set_Item(int32_t index, int32_t value) ;

/// @brief Method IncreaseCapacity addr 0x2369c88 size 0x220 virtual false final false
 void IncreaseCapacity(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray, "System.Runtime.Serialization.Formatters.Binary", "IntSizedArray");
