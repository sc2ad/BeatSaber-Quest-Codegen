#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTime;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngineInternal {
class GenericStack;
}
// Forward declare root types
namespace UnityEngine {
class GUI;
}
namespace UnityEngine {
class UnityEngine__GUI__WindowFunction;
}
// Type: ::WindowFunction
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14754))
// CS Name: UnityEngine.GUI::WindowFunction
class CORDL_TYPE UnityEngine__GUI__WindowFunction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__GUI__WindowFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__GUI__WindowFunction", modifiers: " const&", def_value: None }]
constexpr UnityEngine__GUI__WindowFunction(UnityEngine__GUI__WindowFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__GUI__WindowFunction", modifiers: "&&", def_value: None }]
constexpr UnityEngine__GUI__WindowFunction(UnityEngine__GUI__WindowFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__GUI__WindowFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__GUI__WindowFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__GUI__WindowFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__GUI__WindowFunction& operator=(UnityEngine__GUI__WindowFunction&& o) noexcept = default;
  constexpr UnityEngine__GUI__WindowFunction& operator=(UnityEngine__GUI__WindowFunction const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__GUI__WindowFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b85f70 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b86034 size 0x14 virtual true final false
 void Invoke(int32_t id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::GUI
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14755))
// CS Name: UnityEngine.GUI
class CORDL_TYPE GUI : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using WindowFunction = UnityEngine::UnityEngine__GUI__WindowFunction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GUI() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: " const&", def_value: None }]
constexpr GUI(GUI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: "&&", def_value: None }]
constexpr GUI(GUI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUI(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUI& operator=(GUI&& o) noexcept = default;
  constexpr GUI& operator=(GUI const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_s_HotTextField, put=__set_s_HotTextField))  s_HotTextField;

static void __set_s_HotTextField(int32_t value) ;

static int32_t __get_s_HotTextField() ;

static int32_t __declspec(property(get=__get_s_BoxHash, put=__set_s_BoxHash))  s_BoxHash;

static void __set_s_BoxHash(int32_t value) ;

static int32_t __get_s_BoxHash() ;

static int32_t __declspec(property(get=__get_s_ButonHash, put=__set_s_ButonHash))  s_ButonHash;

static void __set_s_ButonHash(int32_t value) ;

static int32_t __get_s_ButonHash() ;

static int32_t __declspec(property(get=__get_s_RepeatButtonHash, put=__set_s_RepeatButtonHash))  s_RepeatButtonHash;

static void __set_s_RepeatButtonHash(int32_t value) ;

static int32_t __get_s_RepeatButtonHash() ;

static int32_t __declspec(property(get=__get_s_ToggleHash, put=__set_s_ToggleHash))  s_ToggleHash;

static void __set_s_ToggleHash(int32_t value) ;

static int32_t __get_s_ToggleHash() ;

static int32_t __declspec(property(get=__get_s_ButtonGridHash, put=__set_s_ButtonGridHash))  s_ButtonGridHash;

static void __set_s_ButtonGridHash(int32_t value) ;

static int32_t __get_s_ButtonGridHash() ;

static int32_t __declspec(property(get=__get_s_SliderHash, put=__set_s_SliderHash))  s_SliderHash;

static void __set_s_SliderHash(int32_t value) ;

static int32_t __get_s_SliderHash() ;

static int32_t __declspec(property(get=__get_s_BeginGroupHash, put=__set_s_BeginGroupHash))  s_BeginGroupHash;

static void __set_s_BeginGroupHash(int32_t value) ;

static int32_t __get_s_BeginGroupHash() ;

static int32_t __declspec(property(get=__get_s_ScrollviewHash, put=__set_s_ScrollviewHash))  s_ScrollviewHash;

static void __set_s_ScrollviewHash(int32_t value) ;

static int32_t __get_s_ScrollviewHash() ;

static System::DateTime __declspec(property(get=__get__nextScrollStepTime_k__BackingField, put=__set__nextScrollStepTime_k__BackingField))  _nextScrollStepTime_k__BackingField;

static void __set__nextScrollStepTime_k__BackingField(System::DateTime value) ;

static System::DateTime __get__nextScrollStepTime_k__BackingField() ;

static UnityEngine::GUISkin __declspec(property(get=__get_s_Skin, put=__set_s_Skin))  s_Skin;

static void __set_s_Skin(UnityEngine::GUISkin value) ;

static UnityEngine::GUISkin __get_s_Skin() ;

static UnityEngine::Rect __declspec(property(get=__get_s_ToolTipRect, put=__set_s_ToolTipRect))  s_ToolTipRect;

static void __set_s_ToolTipRect(UnityEngine::Rect value) ;

static UnityEngine::Rect __get_s_ToolTipRect() ;

static UnityEngineInternal::GenericStack __declspec(property(get=__get__scrollViewStates_k__BackingField, put=__set__scrollViewStates_k__BackingField))  _scrollViewStates_k__BackingField;

static void __set__scrollViewStates_k__BackingField(UnityEngineInternal::GenericStack value) ;

static UnityEngineInternal::GenericStack __get__scrollViewStates_k__BackingField() ;


// Properties

static System::DateTime __declspec(property(put=set_nextScrollStepTime))  nextScrollStepTime;

static UnityEngine::GUISkin __declspec(property(get=get_skin, put=set_skin))  skin;

static UnityEngine::Matrix4x4 __declspec(property(get=get_matrix, put=set_matrix))  matrix;

static UnityEngineInternal::GenericStack __declspec(property(get=get_scrollViewStates))  scrollViewStates;

static UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

static UnityEngine::Color __declspec(property(get=get_backgroundColor, put=set_backgroundColor))  backgroundColor;

static UnityEngine::Color __declspec(property(get=get_contentColor, put=set_contentColor))  contentColor;

static bool __declspec(property(get=get_changed, put=set_changed))  changed;

static bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;


// Methods

/// @brief Method set_nextScrollStepTime addr 0x2b842d4 size 0x5c virtual false final false
static void set_nextScrollStepTime(System::DateTime value) ;

/// @brief Method set_skin addr 0x2b84330 size 0x58 virtual false final false
static void set_skin(UnityEngine::GUISkin value) ;

/// @brief Method get_skin addr 0x2b844b0 size 0x5c virtual false final false
static UnityEngine::GUISkin get_skin() ;

/// @brief Method DoSetSkin addr 0x2b8440c size 0xa4 virtual false final false
static void DoSetSkin(UnityEngine::GUISkin newSkin) ;

/// @brief Method get_matrix addr 0x2b84658 size 0x74 virtual false final false
static UnityEngine::Matrix4x4 get_matrix() ;

/// @brief Method set_matrix addr 0x2b84730 size 0x4c virtual false final false
static void set_matrix(UnityEngine::Matrix4x4 value) ;

/// @brief Method Label addr 0x2b847b8 size 0xd0 virtual false final false
static void Label(UnityEngine::Rect position, ::StringW text) ;

/// @brief Method Label addr 0x2b8491c size 0x98 virtual false final false
static void Label(UnityEngine::Rect position, UnityEngine::GUIContent content, UnityEngine::GUIStyle style) ;

/// @brief Method Box addr 0x2b84c18 size 0xd0 virtual false final false
static void Box(UnityEngine::Rect position, ::StringW text) ;

/// @brief Method Box addr 0x2b84cf0 size 0x188 virtual false final false
static void Box(UnityEngine::Rect position, UnityEngine::GUIContent content, UnityEngine::GUIStyle style) ;

/// @brief Method DoLabel addr 0x2b849b4 size 0x264 virtual false final false
static void DoLabel(UnityEngine::Rect position, UnityEngine::GUIContent content, UnityEngine::GUIStyle style) ;

/// @brief Method get_scrollViewStates addr 0x2b84fc4 size 0x58 virtual false final false
static UnityEngineInternal::GenericStack get_scrollViewStates() ;

/// @brief Method CallWindowDelegate addr 0x2b8501c size 0x310 virtual false final false
static void CallWindowDelegate(UnityEngine::UnityEngine__GUI__WindowFunction func, int32_t id, int32_t instanceID, UnityEngine::GUISkin _skin, int32_t forceRect, float_t width, float_t height, UnityEngine::GUIStyle style) ;

/// @brief Method get_color addr 0x2b85a1c size 0x88 virtual false final false
static UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2b85ae0 size 0x84 virtual false final false
static void set_color(UnityEngine::Color value) ;

/// @brief Method get_backgroundColor addr 0x2b85ba0 size 0x88 virtual false final false
static UnityEngine::Color get_backgroundColor() ;

/// @brief Method set_backgroundColor addr 0x2b85c64 size 0x84 virtual false final false
static void set_backgroundColor(UnityEngine::Color value) ;

/// @brief Method get_contentColor addr 0x2b85d24 size 0x88 virtual false final false
static UnityEngine::Color get_contentColor() ;

/// @brief Method set_contentColor addr 0x2b85de8 size 0x84 virtual false final false
static void set_contentColor(UnityEngine::Color value) ;

/// @brief Method get_changed addr 0x2b85ea8 size 0x28 virtual false final false
static bool get_changed() ;

/// @brief Method set_changed addr 0x2b85ed0 size 0x3c virtual false final false
static void set_changed(bool value) ;

/// @brief Method get_enabled addr 0x2b85f0c size 0x28 virtual false final false
static bool get_enabled() ;

/// @brief Method set_enabled addr 0x2b85f34 size 0x3c virtual false final false
static void set_enabled(bool value) ;

/// @brief Method get_color_Injected addr 0x2b85aa4 size 0x3c virtual false final false
static void get_color_Injected(ByRef<UnityEngine::Color> ret) ;

/// @brief Method set_color_Injected addr 0x2b85b64 size 0x3c virtual false final false
static void set_color_Injected(ByRef<UnityEngine::Color> value) ;

/// @brief Method get_backgroundColor_Injected addr 0x2b85c28 size 0x3c virtual false final false
static void get_backgroundColor_Injected(ByRef<UnityEngine::Color> ret) ;

/// @brief Method set_backgroundColor_Injected addr 0x2b85ce8 size 0x3c virtual false final false
static void set_backgroundColor_Injected(ByRef<UnityEngine::Color> value) ;

/// @brief Method get_contentColor_Injected addr 0x2b85dac size 0x3c virtual false final false
static void get_contentColor_Injected(ByRef<UnityEngine::Color> ret) ;

/// @brief Method set_contentColor_Injected addr 0x2b85e6c size 0x3c virtual false final false
static void set_contentColor_Injected(ByRef<UnityEngine::Color> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUI);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUI, "UnityEngine", "GUI");
NEED_NO_BOX(UnityEngine::UnityEngine__GUI__WindowFunction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__GUI__WindowFunction, "UnityEngine", "GUI/WindowFunction");
