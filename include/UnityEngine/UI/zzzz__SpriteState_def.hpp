#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::UI {
struct SpriteState;
}
// Type: UnityEngine.UI::SpriteState
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13064))
// CS Name: UnityEngine.UI.SpriteState
struct CORDL_TYPE SpriteState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UI::SpriteState>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UI::SpriteState>() const;

// Ctor Parameters [CppParam { name: "m_HighlightedSprite", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "m_PressedSprite", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "m_SelectedSprite", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "m_DisabledSprite", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }]
constexpr SpriteState(::UnityEngine::Sprite m_HighlightedSprite, ::UnityEngine::Sprite m_PressedSprite, ::UnityEngine::Sprite m_SelectedSprite, ::UnityEngine::Sprite m_DisabledSprite) noexcept;


                    constexpr SpriteState(SpriteState const&) = default;
                    constexpr SpriteState(SpriteState&&) = default;
                    constexpr SpriteState& operator=(SpriteState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpriteState& operator=(SpriteState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpriteState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Sprite __declspec(property(get=__get_m_HighlightedSprite, put=__set_m_HighlightedSprite))  m_HighlightedSprite;

constexpr void __set_m_HighlightedSprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_m_HighlightedSprite() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_m_PressedSprite, put=__set_m_PressedSprite))  m_PressedSprite;

constexpr void __set_m_PressedSprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_m_PressedSprite() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_m_SelectedSprite, put=__set_m_SelectedSprite))  m_SelectedSprite;

constexpr void __set_m_SelectedSprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_m_SelectedSprite() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_m_DisabledSprite, put=__set_m_DisabledSprite))  m_DisabledSprite;

constexpr void __set_m_DisabledSprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_m_DisabledSprite() const;


// Properties

 ::UnityEngine::Sprite __declspec(property(get=get_highlightedSprite, put=set_highlightedSprite))  highlightedSprite;

 ::UnityEngine::Sprite __declspec(property(get=get_pressedSprite, put=set_pressedSprite))  pressedSprite;

 ::UnityEngine::Sprite __declspec(property(get=get_selectedSprite, put=set_selectedSprite))  selectedSprite;

 ::UnityEngine::Sprite __declspec(property(get=get_disabledSprite, put=set_disabledSprite))  disabledSprite;


// Methods

/// @brief Method get_highlightedSprite addr 0x2c10a9c size 0x8 virtual false final false
 ::UnityEngine::Sprite get_highlightedSprite() ;

/// @brief Method set_highlightedSprite addr 0x2c10aa4 size 0x8 virtual false final false
 void set_highlightedSprite(::UnityEngine::Sprite value) ;

/// @brief Method get_pressedSprite addr 0x2c10aac size 0x8 virtual false final false
 ::UnityEngine::Sprite get_pressedSprite() ;

/// @brief Method set_pressedSprite addr 0x2c10ab4 size 0x8 virtual false final false
 void set_pressedSprite(::UnityEngine::Sprite value) ;

/// @brief Method get_selectedSprite addr 0x2c10abc size 0x8 virtual false final false
 ::UnityEngine::Sprite get_selectedSprite() ;

/// @brief Method set_selectedSprite addr 0x2c10ac4 size 0x8 virtual false final false
 void set_selectedSprite(::UnityEngine::Sprite value) ;

/// @brief Method get_disabledSprite addr 0x2c10acc size 0x8 virtual false final false
 ::UnityEngine::Sprite get_disabledSprite() ;

/// @brief Method set_disabledSprite addr 0x2c10ad4 size 0x8 virtual false final false
 void set_disabledSprite(::UnityEngine::Sprite value) ;

/// @brief Method Equals addr 0x2c10adc size 0x108 virtual true final true
 bool Equals(::UnityEngine::UI::SpriteState other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::SpriteState, "UnityEngine.UI", "SpriteState");
