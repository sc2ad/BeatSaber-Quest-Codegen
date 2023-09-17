#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class HoverHintPanel;
}
// Type: HMUI::HoverHintPanel
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13589))
// CS Name: HMUI.HoverHintPanel
class CORDL_TYPE HoverHintPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HoverHintPanel() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverHintPanel", modifiers: " const&", def_value: None }]
constexpr HoverHintPanel(HoverHintPanel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverHintPanel", modifiers: "&&", def_value: None }]
constexpr HoverHintPanel(HoverHintPanel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoverHintPanel(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HoverHintPanel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoverHintPanel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoverHintPanel& operator=(HoverHintPanel&& o) noexcept = default;
  constexpr HoverHintPanel& operator=(HoverHintPanel const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__padding, put=__set__padding))  _padding;

constexpr void __set__padding(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__padding() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__containerPadding, put=__set__containerPadding))  _containerPadding;

constexpr void __set__containerPadding(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__containerPadding() const;

 float_t __declspec(property(get=__get__separator, put=__set__separator))  _separator;

constexpr void __set__separator(float_t value) ;

constexpr float_t __get__separator() const;

 float_t __declspec(property(get=__get__zOffset, put=__set__zOffset))  _zOffset;

constexpr void __set__zOffset(float_t value) ;

constexpr float_t __get__zOffset() const;

 bool __declspec(property(get=__get__isShown_k__BackingField, put=__set__isShown_k__BackingField))  _isShown_k__BackingField;

constexpr void __set__isShown_k__BackingField(bool value) ;

constexpr bool __get__isShown_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isShown, put=set_isShown))  isShown;


// Methods

/// @brief Method get_isShown addr 0x1faa670 size 0x8 virtual false final false
 bool get_isShown() ;

/// @brief Method set_isShown addr 0x1faa678 size 0xc virtual false final false
 void set_isShown(bool value) ;

/// @brief Method Awake addr 0x1faa684 size 0xb4 virtual false final false
 void Awake() ;

/// @brief Method Show addr 0x1faa194 size 0x274 virtual false final false
 void Show(::StringW text, ::UnityEngine::Transform parent, ::UnityEngine::Vector2 containerSize, ::UnityEngine::Rect spawnRect) ;

/// @brief Method Hide addr 0x1fa9d58 size 0x28 virtual false final false
 void Hide() ;

/// @brief Method CalculatePanelPosition addr 0x1faa738 size 0x10c virtual false final false
 ::UnityEngine::Vector2 CalculatePanelPosition(::UnityEngine::Vector2 containerSize, ::UnityEngine::Rect spawnRect, ::UnityEngine::Vector2 panelSize) ;

// Ctor Parameters []
explicit HoverHintPanel() ;

/// @brief Method .ctor addr 0x1faa844 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::HoverHintPanel);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHintPanel, "HMUI", "HoverHintPanel");
