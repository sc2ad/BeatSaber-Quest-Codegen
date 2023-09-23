#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class EventDispatcher;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RuntimeEventDispatcher;
}
// Type: UnityEngine.UIElements::RuntimeEventDispatcher
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7112))
// CS Name: UnityEngine.UIElements.RuntimeEventDispatcher
class CORDL_TYPE RuntimeEventDispatcher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RuntimeEventDispatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeEventDispatcher", modifiers: " const&", def_value: None }]
constexpr RuntimeEventDispatcher(RuntimeEventDispatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeEventDispatcher", modifiers: "&&", def_value: None }]
constexpr RuntimeEventDispatcher(RuntimeEventDispatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeEventDispatcher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RuntimeEventDispatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeEventDispatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeEventDispatcher& operator=(RuntimeEventDispatcher&& o) noexcept = default;
  constexpr RuntimeEventDispatcher& operator=(RuntimeEventDispatcher const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2ca00c4 size 0x3cc virtual false final false
static UnityEngine::UIElements::EventDispatcher Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::RuntimeEventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::RuntimeEventDispatcher, "UnityEngine.UIElements", "RuntimeEventDispatcher");
