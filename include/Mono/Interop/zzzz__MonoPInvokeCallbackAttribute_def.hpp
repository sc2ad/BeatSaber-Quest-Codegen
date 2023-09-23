#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace Mono::Interop {
class MonoPInvokeCallbackAttribute;
}
// Type: Mono.Interop::MonoPInvokeCallbackAttribute
namespace Mono::Interop {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2256))
// CS Name: Mono.Interop.MonoPInvokeCallbackAttribute
class CORDL_TYPE MonoPInvokeCallbackAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MonoPInvokeCallbackAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: " const&", def_value: None }]
constexpr MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: "&&", def_value: None }]
constexpr MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoPInvokeCallbackAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr MonoPInvokeCallbackAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoPInvokeCallbackAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoPInvokeCallbackAttribute& operator=(MonoPInvokeCallbackAttribute&& o) noexcept = default;
  constexpr MonoPInvokeCallbackAttribute& operator=(MonoPInvokeCallbackAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "t", ty: "System::Type", modifiers: "", def_value: None }]
explicit MonoPInvokeCallbackAttribute(System::Type t) ;

/// @brief Method .ctor addr 0x22a7d1c size 0x8 virtual false final false
 void _ctor(System::Type t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Interop
NEED_NO_BOX(Mono::Interop::MonoPInvokeCallbackAttribute);
DEFINE_IL2CPP_ARG_TYPE(Mono::Interop::MonoPInvokeCallbackAttribute, "Mono.Interop", "MonoPInvokeCallbackAttribute");
