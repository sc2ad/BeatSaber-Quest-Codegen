#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System::Runtime::InteropServices {
struct ClassInterfaceType;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class ClassInterfaceAttribute;
}
// Type: System.Runtime.InteropServices::ClassInterfaceAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3312))
// CS Name: System.Runtime.InteropServices.ClassInterfaceAttribute
class CORDL_TYPE ClassInterfaceAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ClassInterfaceAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClassInterfaceAttribute", modifiers: " const&", def_value: None }]
constexpr ClassInterfaceAttribute(ClassInterfaceAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClassInterfaceAttribute", modifiers: "&&", def_value: None }]
constexpr ClassInterfaceAttribute(ClassInterfaceAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClassInterfaceAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ClassInterfaceAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClassInterfaceAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClassInterfaceAttribute& operator=(ClassInterfaceAttribute&& o) noexcept = default;
  constexpr ClassInterfaceAttribute& operator=(ClassInterfaceAttribute const& o) noexcept = default;
                


// Fields

 System::Runtime::InteropServices::ClassInterfaceType __declspec(property(get=__get__val, put=__set__val))  _val;

constexpr void __set__val(System::Runtime::InteropServices::ClassInterfaceType value) ;

constexpr System::Runtime::InteropServices::ClassInterfaceType __get__val() const;


// Methods

static System::Runtime::InteropServices::ClassInterfaceAttribute New_ctor(System::Runtime::InteropServices::ClassInterfaceType classInterfaceType) ;

/// @brief Method .ctor addr 0x236ac18 size 0x28 virtual false final false
 void _ctor(System::Runtime::InteropServices::ClassInterfaceType classInterfaceType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::ClassInterfaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ClassInterfaceAttribute, "System.Runtime.InteropServices", "ClassInterfaceAttribute");
