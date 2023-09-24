#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class DisallowMultipleComponent;
}
// Type: UnityEngine::DisallowMultipleComponent
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10154))
// CS Name: UnityEngine.DisallowMultipleComponent
class CORDL_TYPE DisallowMultipleComponent : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DisallowMultipleComponent() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisallowMultipleComponent", modifiers: " const&", def_value: None }]
constexpr DisallowMultipleComponent(DisallowMultipleComponent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisallowMultipleComponent", modifiers: "&&", def_value: None }]
constexpr DisallowMultipleComponent(DisallowMultipleComponent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisallowMultipleComponent(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DisallowMultipleComponent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisallowMultipleComponent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisallowMultipleComponent& operator=(DisallowMultipleComponent&& o) noexcept = default;
  constexpr DisallowMultipleComponent& operator=(DisallowMultipleComponent const& o) noexcept = default;
                


// Methods

static UnityEngine::DisallowMultipleComponent New_ctor() ;

/// @brief Method .ctor addr 0x2b5b1d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::DisallowMultipleComponent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DisallowMultipleComponent, "UnityEngine", "DisallowMultipleComponent");
