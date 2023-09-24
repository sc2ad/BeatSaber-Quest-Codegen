#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class ToggleableCanvasGroup;
}
// Type: ::ToggleableCanvasGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13559))
// CS Name: ToggleableCanvasGroup
class CORDL_TYPE ToggleableCanvasGroup : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ToggleableCanvasGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "ToggleableCanvasGroup", modifiers: " const&", def_value: None }]
constexpr ToggleableCanvasGroup(ToggleableCanvasGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ToggleableCanvasGroup", modifiers: "&&", def_value: None }]
constexpr ToggleableCanvasGroup(ToggleableCanvasGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ToggleableCanvasGroup(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ToggleableCanvasGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ToggleableCanvasGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ToggleableCanvasGroup& operator=(ToggleableCanvasGroup&& o) noexcept = default;
  constexpr ToggleableCanvasGroup& operator=(ToggleableCanvasGroup const& o) noexcept = default;
                


// Fields

 UnityEngine::CanvasGroup __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup))  _canvasGroup;

constexpr void __set__canvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__canvasGroup() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__toggle, put=__set__toggle))  _toggle;

constexpr void __set__toggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__toggle() const;

 bool __declspec(property(get=__get__invertToggle, put=__set__invertToggle))  _invertToggle;

constexpr void __set__invertToggle(bool value) ;

constexpr bool __get__invertToggle() const;


// Methods

/// @brief Method OnEnable addr 0x1fa40b4 size 0xbc virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1fa41a0 size 0xa8 virtual false final false
 void OnDisable() ;

/// @brief Method HandleToggleValueChanged addr 0x1fa4248 size 0x8 virtual false final false
 void HandleToggleValueChanged(bool isOn) ;

/// @brief Method SetCanvasGroupData addr 0x1fa4170 size 0x30 virtual false final false
 void SetCanvasGroupData(bool isOn) ;

static GlobalNamespace::ToggleableCanvasGroup New_ctor() ;

/// @brief Method .ctor addr 0x1fa4250 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ToggleableCanvasGroup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ToggleableCanvasGroup, "", "ToggleableCanvasGroup");
