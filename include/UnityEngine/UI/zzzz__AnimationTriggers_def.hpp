#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::UI {
class AnimationTriggers;
}
// Type: UnityEngine.UI::AnimationTriggers
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12955))
// CS Name: UnityEngine.UI.AnimationTriggers
class CORDL_TYPE AnimationTriggers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AnimationTriggers() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTriggers", modifiers: " const&", def_value: None }]
constexpr AnimationTriggers(AnimationTriggers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTriggers", modifiers: "&&", def_value: None }]
constexpr AnimationTriggers(AnimationTriggers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationTriggers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnimationTriggers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationTriggers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationTriggers& operator=(AnimationTriggers&& o) noexcept = default;
  constexpr AnimationTriggers& operator=(AnimationTriggers const& o) noexcept = default;
                


// Fields

/// @brief Field kDefaultNormalAnimName offset 0
static constexpr ::ConstString  kDefaultNormalAnimName{u"Normal"};

/// @brief Field kDefaultHighlightedAnimName offset 0
static constexpr ::ConstString  kDefaultHighlightedAnimName{u"Highlighted"};

/// @brief Field kDefaultPressedAnimName offset 0
static constexpr ::ConstString  kDefaultPressedAnimName{u"Pressed"};

/// @brief Field kDefaultSelectedAnimName offset 0
static constexpr ::ConstString  kDefaultSelectedAnimName{u"Selected"};

/// @brief Field kDefaultDisabledAnimName offset 0
static constexpr ::ConstString  kDefaultDisabledAnimName{u"Disabled"};

 ::StringW __declspec(property(get=__get_m_NormalTrigger, put=__set_m_NormalTrigger))  m_NormalTrigger;

constexpr void __set_m_NormalTrigger(::StringW value) ;

constexpr ::StringW __get_m_NormalTrigger() const;

 ::StringW __declspec(property(get=__get_m_HighlightedTrigger, put=__set_m_HighlightedTrigger))  m_HighlightedTrigger;

constexpr void __set_m_HighlightedTrigger(::StringW value) ;

constexpr ::StringW __get_m_HighlightedTrigger() const;

 ::StringW __declspec(property(get=__get_m_PressedTrigger, put=__set_m_PressedTrigger))  m_PressedTrigger;

constexpr void __set_m_PressedTrigger(::StringW value) ;

constexpr ::StringW __get_m_PressedTrigger() const;

 ::StringW __declspec(property(get=__get_m_SelectedTrigger, put=__set_m_SelectedTrigger))  m_SelectedTrigger;

constexpr void __set_m_SelectedTrigger(::StringW value) ;

constexpr ::StringW __get_m_SelectedTrigger() const;

 ::StringW __declspec(property(get=__get_m_DisabledTrigger, put=__set_m_DisabledTrigger))  m_DisabledTrigger;

constexpr void __set_m_DisabledTrigger(::StringW value) ;

constexpr ::StringW __get_m_DisabledTrigger() const;


// Properties

 ::StringW __declspec(property(get=get_normalTrigger, put=set_normalTrigger))  normalTrigger;

 ::StringW __declspec(property(get=get_highlightedTrigger, put=set_highlightedTrigger))  highlightedTrigger;

 ::StringW __declspec(property(get=get_pressedTrigger, put=set_pressedTrigger))  pressedTrigger;

 ::StringW __declspec(property(get=get_selectedTrigger, put=set_selectedTrigger))  selectedTrigger;

 ::StringW __declspec(property(get=get_disabledTrigger, put=set_disabledTrigger))  disabledTrigger;


// Methods

/// @brief Method get_normalTrigger addr 0x2bd7c78 size 0x8 virtual false final false
 ::StringW get_normalTrigger() ;

/// @brief Method set_normalTrigger addr 0x2bd7c80 size 0x8 virtual false final false
 void set_normalTrigger(::StringW value) ;

/// @brief Method get_highlightedTrigger addr 0x2bd7c88 size 0x8 virtual false final false
 ::StringW get_highlightedTrigger() ;

/// @brief Method set_highlightedTrigger addr 0x2bd7c90 size 0x8 virtual false final false
 void set_highlightedTrigger(::StringW value) ;

/// @brief Method get_pressedTrigger addr 0x2bd7c98 size 0x8 virtual false final false
 ::StringW get_pressedTrigger() ;

/// @brief Method set_pressedTrigger addr 0x2bd7ca0 size 0x8 virtual false final false
 void set_pressedTrigger(::StringW value) ;

/// @brief Method get_selectedTrigger addr 0x2bd7ca8 size 0x8 virtual false final false
 ::StringW get_selectedTrigger() ;

/// @brief Method set_selectedTrigger addr 0x2bd7cb0 size 0x8 virtual false final false
 void set_selectedTrigger(::StringW value) ;

/// @brief Method get_disabledTrigger addr 0x2bd7cb8 size 0x8 virtual false final false
 ::StringW get_disabledTrigger() ;

/// @brief Method set_disabledTrigger addr 0x2bd7cc0 size 0x8 virtual false final false
 void set_disabledTrigger(::StringW value) ;

// Ctor Parameters []
explicit AnimationTriggers() ;

/// @brief Method .ctor addr 0x2bd7cc8 size 0xd0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::AnimationTriggers);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::AnimationTriggers, "UnityEngine.UI", "AnimationTriggers");
