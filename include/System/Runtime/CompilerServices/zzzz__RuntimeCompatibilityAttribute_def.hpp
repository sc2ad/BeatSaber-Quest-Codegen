#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeCompatibilityAttribute;
}
// Type: System.Runtime.CompilerServices::RuntimeCompatibilityAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3373))
// CS Name: System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
class CORDL_TYPE RuntimeCompatibilityAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RuntimeCompatibilityAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeCompatibilityAttribute", modifiers: " const&", def_value: None }]
constexpr RuntimeCompatibilityAttribute(RuntimeCompatibilityAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeCompatibilityAttribute", modifiers: "&&", def_value: None }]
constexpr RuntimeCompatibilityAttribute(RuntimeCompatibilityAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeCompatibilityAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RuntimeCompatibilityAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeCompatibilityAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeCompatibilityAttribute& operator=(RuntimeCompatibilityAttribute&& o) noexcept = default;
  constexpr RuntimeCompatibilityAttribute& operator=(RuntimeCompatibilityAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__WrapNonExceptionThrows_k__BackingField, put=__set__WrapNonExceptionThrows_k__BackingField))  _WrapNonExceptionThrows_k__BackingField;

constexpr void __set__WrapNonExceptionThrows_k__BackingField(bool value) ;

constexpr bool __get__WrapNonExceptionThrows_k__BackingField() const;


// Properties

 bool __declspec(property(put=set_WrapNonExceptionThrows))  WrapNonExceptionThrows;


// Methods

static System::Runtime::CompilerServices::RuntimeCompatibilityAttribute New_ctor() ;

/// @brief Method .ctor addr 0x236e108 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method set_WrapNonExceptionThrows addr 0x236e110 size 0xc virtual false final false
 void set_WrapNonExceptionThrows(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::RuntimeCompatibilityAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::RuntimeCompatibilityAttribute, "System.Runtime.CompilerServices", "RuntimeCompatibilityAttribute");
