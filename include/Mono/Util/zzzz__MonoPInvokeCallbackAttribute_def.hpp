#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace Mono::Util {
class MonoPInvokeCallbackAttribute;
}
// Type: Mono.Util::MonoPInvokeCallbackAttribute
namespace Mono::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7606))
// CS Name: Mono.Util.MonoPInvokeCallbackAttribute
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

static Mono::Util::MonoPInvokeCallbackAttribute New_ctor(System::Type t) ;

/// @brief Method .ctor addr 0x2685c84 size 0x8 virtual false final false
 void _ctor(System::Type t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Util
NEED_NO_BOX(Mono::Util::MonoPInvokeCallbackAttribute);
DEFINE_IL2CPP_ARG_TYPE(Mono::Util::MonoPInvokeCallbackAttribute, "Mono.Util", "MonoPInvokeCallbackAttribute");
