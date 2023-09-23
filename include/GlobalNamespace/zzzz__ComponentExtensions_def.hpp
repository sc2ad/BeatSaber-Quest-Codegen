#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace GlobalNamespace {
class ComponentExtensions;
}
// Type: ::ComponentExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13754))
// CS Name: ComponentExtensions
class CORDL_TYPE ComponentExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ComponentExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComponentExtensions", modifiers: " const&", def_value: None }]
constexpr ComponentExtensions(ComponentExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComponentExtensions", modifiers: "&&", def_value: None }]
constexpr ComponentExtensions(ComponentExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComponentExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ComponentExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComponentExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComponentExtensions& operator=(ComponentExtensions&& o) noexcept = default;
  constexpr ComponentExtensions& operator=(ComponentExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method GetComponentInParentOnly addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetComponentInParentOnly(UnityEngine::Component c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ComponentExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ComponentExtensions, "", "ComponentExtensions");
