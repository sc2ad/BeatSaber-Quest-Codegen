#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class ExcludeFromObjectFactoryAttribute;
}
// Type: UnityEngine::ExcludeFromObjectFactoryAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10173))
// CS Name: UnityEngine.ExcludeFromObjectFactoryAttribute
class CORDL_TYPE ExcludeFromObjectFactoryAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExcludeFromObjectFactoryAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromObjectFactoryAttribute", modifiers: " const&", def_value: None }]
constexpr ExcludeFromObjectFactoryAttribute(ExcludeFromObjectFactoryAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromObjectFactoryAttribute", modifiers: "&&", def_value: None }]
constexpr ExcludeFromObjectFactoryAttribute(ExcludeFromObjectFactoryAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExcludeFromObjectFactoryAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ExcludeFromObjectFactoryAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExcludeFromObjectFactoryAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExcludeFromObjectFactoryAttribute& operator=(ExcludeFromObjectFactoryAttribute&& o) noexcept = default;
  constexpr ExcludeFromObjectFactoryAttribute& operator=(ExcludeFromObjectFactoryAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ExcludeFromObjectFactoryAttribute() ;

/// @brief Method .ctor addr 0x2b5c0e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ExcludeFromObjectFactoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ExcludeFromObjectFactoryAttribute, "UnityEngine", "ExcludeFromObjectFactoryAttribute");
