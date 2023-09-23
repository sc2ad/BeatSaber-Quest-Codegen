#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::CompilerServices {
class NullableAttribute;
}
// Type: System.Runtime.CompilerServices::NullableAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3939))
// CS Name: System.Runtime.CompilerServices.NullableAttribute
class CORDL_TYPE NullableAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NullableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullableAttribute", modifiers: " const&", def_value: None }]
constexpr NullableAttribute(NullableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullableAttribute", modifiers: "&&", def_value: None }]
constexpr NullableAttribute(NullableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullableAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NullableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullableAttribute& operator=(NullableAttribute&& o) noexcept = default;
  constexpr NullableAttribute& operator=(NullableAttribute const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_NullableFlags, put=__set_NullableFlags))  NullableFlags;

constexpr void __set_NullableFlags(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_NullableFlags() const;


// Methods

// Ctor Parameters [CppParam { name: "", ty: "uint8_t", modifiers: "", def_value: None }]
explicit NullableAttribute(uint8_t ) ;

/// @brief Method .ctor addr 0x20a431c size 0x80 virtual false final false
 void _ctor(uint8_t ) ;

// Ctor Parameters [CppParam { name: "", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit NullableAttribute(::ArrayW<uint8_t> ) ;

/// @brief Method .ctor addr 0x20a439c size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> ) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::NullableAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::NullableAttribute, "System.Runtime.CompilerServices", "NullableAttribute");
