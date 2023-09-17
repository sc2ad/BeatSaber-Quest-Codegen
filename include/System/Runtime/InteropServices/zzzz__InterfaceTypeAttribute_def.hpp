#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System::Runtime::InteropServices {
struct ComInterfaceType;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class InterfaceTypeAttribute;
}
// Type: System.Runtime.InteropServices::InterfaceTypeAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3309))
// CS Name: System.Runtime.InteropServices.InterfaceTypeAttribute
class CORDL_TYPE InterfaceTypeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InterfaceTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InterfaceTypeAttribute", modifiers: " const&", def_value: None }]
constexpr InterfaceTypeAttribute(InterfaceTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InterfaceTypeAttribute", modifiers: "&&", def_value: None }]
constexpr InterfaceTypeAttribute(InterfaceTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InterfaceTypeAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr InterfaceTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InterfaceTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InterfaceTypeAttribute& operator=(InterfaceTypeAttribute&& o) noexcept = default;
  constexpr InterfaceTypeAttribute& operator=(InterfaceTypeAttribute const& o) noexcept = default;
                


// Fields

 ::System::Runtime::InteropServices::ComInterfaceType __declspec(property(get=__get__val, put=__set__val))  _val;

constexpr void __set__val(::System::Runtime::InteropServices::ComInterfaceType value) ;

constexpr ::System::Runtime::InteropServices::ComInterfaceType __get__val() const;


// Methods

// Ctor Parameters [CppParam { name: "interfaceType", ty: "::System::Runtime::InteropServices::ComInterfaceType", modifiers: "", def_value: None }]
explicit InterfaceTypeAttribute(::System::Runtime::InteropServices::ComInterfaceType interfaceType) ;

/// @brief Method .ctor addr 0x236abc8 size 0x28 virtual false final false
 void _ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::InterfaceTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::InterfaceTypeAttribute, "System.Runtime.InteropServices", "InterfaceTypeAttribute");
