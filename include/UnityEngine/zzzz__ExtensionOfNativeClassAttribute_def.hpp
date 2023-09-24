#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class ExtensionOfNativeClassAttribute;
}
// Type: UnityEngine::ExtensionOfNativeClassAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10175))
// CS Name: UnityEngine.ExtensionOfNativeClassAttribute
class CORDL_TYPE ExtensionOfNativeClassAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExtensionOfNativeClassAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionOfNativeClassAttribute", modifiers: " const&", def_value: None }]
constexpr ExtensionOfNativeClassAttribute(ExtensionOfNativeClassAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionOfNativeClassAttribute", modifiers: "&&", def_value: None }]
constexpr ExtensionOfNativeClassAttribute(ExtensionOfNativeClassAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtensionOfNativeClassAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ExtensionOfNativeClassAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtensionOfNativeClassAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtensionOfNativeClassAttribute& operator=(ExtensionOfNativeClassAttribute&& o) noexcept = default;
  constexpr ExtensionOfNativeClassAttribute& operator=(ExtensionOfNativeClassAttribute const& o) noexcept = default;
                


// Methods

static UnityEngine::ExtensionOfNativeClassAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2b5c1e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ExtensionOfNativeClassAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ExtensionOfNativeClassAttribute, "UnityEngine", "ExtensionOfNativeClassAttribute");
