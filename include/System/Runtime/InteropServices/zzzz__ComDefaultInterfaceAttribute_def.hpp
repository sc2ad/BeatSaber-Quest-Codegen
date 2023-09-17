#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class ComDefaultInterfaceAttribute;
}
// Type: System.Runtime.InteropServices::ComDefaultInterfaceAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3310))
// CS Name: System.Runtime.InteropServices.ComDefaultInterfaceAttribute
class CORDL_TYPE ComDefaultInterfaceAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ComDefaultInterfaceAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComDefaultInterfaceAttribute", modifiers: " const&", def_value: None }]
constexpr ComDefaultInterfaceAttribute(ComDefaultInterfaceAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComDefaultInterfaceAttribute", modifiers: "&&", def_value: None }]
constexpr ComDefaultInterfaceAttribute(ComDefaultInterfaceAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComDefaultInterfaceAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ComDefaultInterfaceAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComDefaultInterfaceAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComDefaultInterfaceAttribute& operator=(ComDefaultInterfaceAttribute&& o) noexcept = default;
  constexpr ComDefaultInterfaceAttribute& operator=(ComDefaultInterfaceAttribute const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get__val, put=__set__val))  _val;

constexpr void __set__val(::System::Type value) ;

constexpr ::System::Type __get__val() const;


// Methods

// Ctor Parameters [CppParam { name: "defaultInterface", ty: "::System::Type", modifiers: "", def_value: None }]
explicit ComDefaultInterfaceAttribute(::System::Type defaultInterface) ;

/// @brief Method .ctor addr 0x236abf0 size 0x28 virtual false final false
 void _ctor(::System::Type defaultInterface) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::ComDefaultInterfaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ComDefaultInterfaceAttribute, "System.Runtime.InteropServices", "ComDefaultInterfaceAttribute");
