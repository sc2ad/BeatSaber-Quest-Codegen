#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::InteropServices {
class FieldOffsetAttribute;
}
// Type: System.Runtime.InteropServices::FieldOffsetAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3325))
// CS Name: System.Runtime.InteropServices.FieldOffsetAttribute
class CORDL_TYPE FieldOffsetAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~FieldOffsetAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldOffsetAttribute", modifiers: " const&", def_value: None }]
constexpr FieldOffsetAttribute(FieldOffsetAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldOffsetAttribute", modifiers: "&&", def_value: None }]
constexpr FieldOffsetAttribute(FieldOffsetAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FieldOffsetAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr FieldOffsetAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FieldOffsetAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FieldOffsetAttribute& operator=(FieldOffsetAttribute&& o) noexcept = default;
  constexpr FieldOffsetAttribute& operator=(FieldOffsetAttribute const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__val, put=__set__val))  _val;

constexpr void __set__val(int32_t value) ;

constexpr int32_t __get__val() const;


// Methods

static System::Runtime::InteropServices::FieldOffsetAttribute New_ctor(int32_t offset) ;

/// @brief Method .ctor addr 0x236af7c size 0x28 virtual false final false
 void _ctor(int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::FieldOffsetAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::FieldOffsetAttribute, "System.Runtime.InteropServices", "FieldOffsetAttribute");
