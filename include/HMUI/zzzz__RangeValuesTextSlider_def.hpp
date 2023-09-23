#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class TextSlider;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace HMUI {
class RangeValuesTextSlider;
}
// Type: HMUI::RangeValuesTextSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13611))
// CS Name: HMUI.RangeValuesTextSlider
class CORDL_TYPE RangeValuesTextSlider : public HMUI::TextSlider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x168};

virtual ~RangeValuesTextSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeValuesTextSlider", modifiers: " const&", def_value: None }]
constexpr RangeValuesTextSlider(RangeValuesTextSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeValuesTextSlider", modifiers: "&&", def_value: None }]
constexpr RangeValuesTextSlider(RangeValuesTextSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RangeValuesTextSlider(void* ptr) noexcept : HMUI::TextSlider(ptr) {
}


  constexpr RangeValuesTextSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RangeValuesTextSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RangeValuesTextSlider& operator=(RangeValuesTextSlider&& o) noexcept = default;
  constexpr RangeValuesTextSlider& operator=(RangeValuesTextSlider const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__minValue, put=__set__minValue))  _minValue;

constexpr void __set__minValue(float_t value) ;

constexpr float_t __get__minValue() const;

 float_t __declspec(property(get=__get__maxValue, put=__set__maxValue))  _maxValue;

constexpr void __set__maxValue(float_t value) ;

constexpr float_t __get__maxValue() const;

 UnityEngine::UI::Button __declspec(property(get=__get__decButton, put=__set__decButton))  _decButton;

constexpr void __set__decButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__decButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__incButton, put=__set__incButton))  _incButton;

constexpr void __set__incButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__incButton() const;

 System::Action_2<HMUI::RangeValuesTextSlider,float_t> __declspec(property(get=__get_valueDidChangeEvent, put=__set_valueDidChangeEvent))  valueDidChangeEvent;

constexpr void __set_valueDidChangeEvent(System::Action_2<HMUI::RangeValuesTextSlider,float_t> value) ;

constexpr System::Action_2<HMUI::RangeValuesTextSlider,float_t> __get_valueDidChangeEvent() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;


// Properties

 float_t __declspec(property(get=get_minValue, put=set_minValue))  minValue;

 float_t __declspec(property(get=get_maxValue, put=set_maxValue))  maxValue;

 float_t __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_minValue addr 0x1faf3b4 size 0x8 virtual false final false
 float_t get_minValue() ;

/// @brief Method set_minValue addr 0x1faf3bc size 0x80 virtual false final false
 void set_minValue(float_t value) ;

/// @brief Method get_maxValue addr 0x1faf43c size 0x8 virtual false final false
 float_t get_maxValue() ;

/// @brief Method set_maxValue addr 0x1faf444 size 0x80 virtual false final false
 void set_maxValue(float_t value) ;

/// @brief Method set_value addr 0x1faf4c4 size 0x1c virtual false final false
 void set_value(float_t value) ;

/// @brief Method get_value addr 0x1faf500 size 0x28 virtual false final false
 float_t get_value() ;

/// @brief Method add_valueDidChangeEvent addr 0x1faf540 size 0xb4 virtual false final false
 void add_valueDidChangeEvent(System::Action_2<HMUI::RangeValuesTextSlider,float_t> value) ;

/// @brief Method remove_valueDidChangeEvent addr 0x1faf5f4 size 0xb4 virtual false final false
 void remove_valueDidChangeEvent(System::Action_2<HMUI::RangeValuesTextSlider,float_t> value) ;

/// @brief Method Awake addr 0x1faf6a8 size 0x1ec virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x1faf894 size 0x98 virtual true final false
 void OnDestroy() ;

/// @brief Method HandleNormalizedValueDidChange addr 0x1faf92c size 0x34 virtual false final false
 void HandleNormalizedValueDidChange(HMUI::TextSlider slider, float_t normalizedValue) ;

/// @brief Method ConvertFromNormalizedValue addr 0x1faf528 size 0x18 virtual false final false
 float_t ConvertFromNormalizedValue(float_t normalizedValue) ;

/// @brief Method NormalizeValue addr 0x1faf4e0 size 0x18 virtual false final false
 float_t NormalizeValue(float_t rangeValue) ;

/// @brief Method TextForNormalizedValue addr 0x1faf960 size 0x24 virtual true final false
 ::StringW TextForNormalizedValue(float_t normalizedValue) ;

/// @brief Method TextForValue addr 0x1faf984 size 0x68 virtual true final false
 ::StringW TextForValue(float_t value) ;

// Ctor Parameters []
explicit RangeValuesTextSlider() ;

/// @brief Method .ctor addr 0x1faf310 size 0xc virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__17_0 addr 0x1faf9ec size 0x44 virtual false final false
 void _Awake_b__17_0() ;

/// @brief Method <Awake>b__17_1 addr 0x1fafa38 size 0x44 virtual false final false
 void _Awake_b__17_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::RangeValuesTextSlider);
DEFINE_IL2CPP_ARG_TYPE(HMUI::RangeValuesTextSlider, "HMUI", "RangeValuesTextSlider");
