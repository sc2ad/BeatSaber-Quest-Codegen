#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UI {
struct ColorBlock;
}
// Type: UnityEngine.UI::ColorBlock
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12962))
// CS Name: UnityEngine.UI.ColorBlock
struct CORDL_TYPE ColorBlock : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UI::ColorBlock>
constexpr operator  System::IEquatable_1<UnityEngine::UI::ColorBlock>() const;

// Ctor Parameters [CppParam { name: "m_NormalColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_HighlightedColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_PressedColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_SelectedColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_DisabledColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_ColorMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_FadeDuration", ty: "float_t", modifiers: "", def_value: None }]
constexpr ColorBlock(UnityEngine::Color m_NormalColor, UnityEngine::Color m_HighlightedColor, UnityEngine::Color m_PressedColor, UnityEngine::Color m_SelectedColor, UnityEngine::Color m_DisabledColor, float_t m_ColorMultiplier, float_t m_FadeDuration) noexcept;


                    constexpr ColorBlock(ColorBlock const&) = default;
                    constexpr ColorBlock(ColorBlock&&) = default;
                    constexpr ColorBlock& operator=(ColorBlock const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ColorBlock& operator=(ColorBlock&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ColorBlock(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Color __declspec(property(get=__get_m_NormalColor, put=__set_m_NormalColor))  m_NormalColor;

constexpr void __set_m_NormalColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_NormalColor() const;

 UnityEngine::Color __declspec(property(get=__get_m_HighlightedColor, put=__set_m_HighlightedColor))  m_HighlightedColor;

constexpr void __set_m_HighlightedColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_HighlightedColor() const;

 UnityEngine::Color __declspec(property(get=__get_m_PressedColor, put=__set_m_PressedColor))  m_PressedColor;

constexpr void __set_m_PressedColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_PressedColor() const;

 UnityEngine::Color __declspec(property(get=__get_m_SelectedColor, put=__set_m_SelectedColor))  m_SelectedColor;

constexpr void __set_m_SelectedColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_SelectedColor() const;

 UnityEngine::Color __declspec(property(get=__get_m_DisabledColor, put=__set_m_DisabledColor))  m_DisabledColor;

constexpr void __set_m_DisabledColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_DisabledColor() const;

 float_t __declspec(property(get=__get_m_ColorMultiplier, put=__set_m_ColorMultiplier))  m_ColorMultiplier;

constexpr void __set_m_ColorMultiplier(float_t value) ;

constexpr float_t __get_m_ColorMultiplier() const;

 float_t __declspec(property(get=__get_m_FadeDuration, put=__set_m_FadeDuration))  m_FadeDuration;

constexpr void __set_m_FadeDuration(float_t value) ;

constexpr float_t __get_m_FadeDuration() const;

static UnityEngine::UI::ColorBlock __declspec(property(get=__get_defaultColorBlock, put=__set_defaultColorBlock))  defaultColorBlock;

static void __set_defaultColorBlock(UnityEngine::UI::ColorBlock value) ;

static UnityEngine::UI::ColorBlock __get_defaultColorBlock() ;


// Properties

 UnityEngine::Color __declspec(property(get=get_normalColor, put=set_normalColor))  normalColor;

 UnityEngine::Color __declspec(property(get=get_highlightedColor, put=set_highlightedColor))  highlightedColor;

 UnityEngine::Color __declspec(property(get=get_pressedColor, put=set_pressedColor))  pressedColor;

 UnityEngine::Color __declspec(property(get=get_selectedColor, put=set_selectedColor))  selectedColor;

 UnityEngine::Color __declspec(property(get=get_disabledColor, put=set_disabledColor))  disabledColor;

 float_t __declspec(property(get=get_colorMultiplier, put=set_colorMultiplier))  colorMultiplier;

 float_t __declspec(property(get=get_fadeDuration, put=set_fadeDuration))  fadeDuration;


// Methods

/// @brief Method get_normalColor addr 0x2bd9c54 size 0xc virtual false final false
 UnityEngine::Color get_normalColor() ;

/// @brief Method set_normalColor addr 0x2bd9c60 size 0xc virtual false final false
 void set_normalColor(UnityEngine::Color value) ;

/// @brief Method get_highlightedColor addr 0x2bd9c6c size 0xc virtual false final false
 UnityEngine::Color get_highlightedColor() ;

/// @brief Method set_highlightedColor addr 0x2bd9c78 size 0xc virtual false final false
 void set_highlightedColor(UnityEngine::Color value) ;

/// @brief Method get_pressedColor addr 0x2bd9c84 size 0xc virtual false final false
 UnityEngine::Color get_pressedColor() ;

/// @brief Method set_pressedColor addr 0x2bd9c90 size 0xc virtual false final false
 void set_pressedColor(UnityEngine::Color value) ;

/// @brief Method get_selectedColor addr 0x2bd9c9c size 0xc virtual false final false
 UnityEngine::Color get_selectedColor() ;

/// @brief Method set_selectedColor addr 0x2bd9ca8 size 0xc virtual false final false
 void set_selectedColor(UnityEngine::Color value) ;

/// @brief Method get_disabledColor addr 0x2bd9cb4 size 0xc virtual false final false
 UnityEngine::Color get_disabledColor() ;

/// @brief Method set_disabledColor addr 0x2bd9cc0 size 0xc virtual false final false
 void set_disabledColor(UnityEngine::Color value) ;

/// @brief Method get_colorMultiplier addr 0x2bd9ccc size 0x8 virtual false final false
 float_t get_colorMultiplier() ;

/// @brief Method set_colorMultiplier addr 0x2bd9cd4 size 0x8 virtual false final false
 void set_colorMultiplier(float_t value) ;

/// @brief Method get_fadeDuration addr 0x2bd9cdc size 0x8 virtual false final false
 float_t get_fadeDuration() ;

/// @brief Method set_fadeDuration addr 0x2bd9ce4 size 0x8 virtual false final false
 void set_fadeDuration(float_t value) ;

/// @brief Method Equals addr 0x2bd9d68 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2bd9df8 size 0x124 virtual true final true
 bool Equals(UnityEngine::UI::ColorBlock other) ;

/// @brief Method op_Equality addr 0x2bd9f1c size 0x34 virtual false final false
static bool op_Equality(UnityEngine::UI::ColorBlock point1, UnityEngine::UI::ColorBlock point2) ;

/// @brief Method op_Inequality addr 0x2bd9f50 size 0x38 virtual false final false
static bool op_Inequality(UnityEngine::UI::ColorBlock point1, UnityEngine::UI::ColorBlock point2) ;

/// @brief Method GetHashCode addr 0x2bd9f88 size 0x6c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ColorBlock, "UnityEngine.UI", "ColorBlock");
