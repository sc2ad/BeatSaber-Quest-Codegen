#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class DropdownMenu;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuManager;
}
// Type: UnityEngine.UIElements::ContextualMenuManager
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6860))
// CS Name: UnityEngine.UIElements.ContextualMenuManager
class CORDL_TYPE ContextualMenuManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ContextualMenuManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManager", modifiers: " const&", def_value: None }]
constexpr ContextualMenuManager(ContextualMenuManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManager", modifiers: "&&", def_value: None }]
constexpr ContextualMenuManager(ContextualMenuManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextualMenuManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContextualMenuManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextualMenuManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextualMenuManager& operator=(ContextualMenuManager&& o) noexcept = default;
  constexpr ContextualMenuManager& operator=(ContextualMenuManager const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__displayMenuHandledOSX_k__BackingField, put=__set__displayMenuHandledOSX_k__BackingField))  _displayMenuHandledOSX_k__BackingField;

constexpr void __set__displayMenuHandledOSX_k__BackingField(bool value) ;

constexpr bool __get__displayMenuHandledOSX_k__BackingField() const;


// Methods

/// @brief Method DisplayMenuIfEventMatches addr 0x0 size 0xffffffffffffffff virtual true final false
 void DisplayMenuIfEventMatches(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IEventHandler eventHandler) ;

/// @brief Method DoDisplayMenu addr 0x0 size 0xffffffffffffffff virtual true final false
 void DoDisplayMenu(UnityEngine::UIElements::DropdownMenu menu, UnityEngine::UIElements::EventBase triggerEvent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ContextualMenuManager);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ContextualMenuManager, "UnityEngine.UIElements", "ContextualMenuManager");
