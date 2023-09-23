#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::InteropServices {
class ComVisibleAttribute;
}
// Type: System.Runtime.InteropServices::ComVisibleAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3313))
// CS Name: System.Runtime.InteropServices.ComVisibleAttribute
class CORDL_TYPE ComVisibleAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ComVisibleAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComVisibleAttribute", modifiers: " const&", def_value: None }]
constexpr ComVisibleAttribute(ComVisibleAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComVisibleAttribute", modifiers: "&&", def_value: None }]
constexpr ComVisibleAttribute(ComVisibleAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComVisibleAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ComVisibleAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComVisibleAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComVisibleAttribute& operator=(ComVisibleAttribute&& o) noexcept = default;
  constexpr ComVisibleAttribute& operator=(ComVisibleAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__val, put=__set__val))  _val;

constexpr void __set__val(bool value) ;

constexpr bool __get__val() const;


// Methods

// Ctor Parameters [CppParam { name: "visibility", ty: "bool", modifiers: "", def_value: None }]
explicit ComVisibleAttribute(bool visibility) ;

/// @brief Method .ctor addr 0x236ac40 size 0x28 virtual false final false
 void _ctor(bool visibility) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::ComVisibleAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComVisibleAttribute, "System.Runtime.InteropServices", "ComVisibleAttribute");
