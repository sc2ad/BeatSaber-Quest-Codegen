#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
namespace TMPro {
struct TMPro__TMP_DefaultControls__Resources;
}
namespace UnityEngine {
struct Color;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace TMPro {
class TMP_DefaultControls;
}
namespace TMPro {
struct TMPro__TMP_DefaultControls__Resources;
}
// Type: ::Resources
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12287))
// CS Name: TMPro.TMP_DefaultControls::Resources
struct CORDL_TYPE TMPro__TMP_DefaultControls__Resources : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "standard", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "background", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "inputField", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "knob", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "checkmark", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "dropdown", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "mask", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }]
constexpr TMPro__TMP_DefaultControls__Resources(UnityEngine::Sprite standard, UnityEngine::Sprite background, UnityEngine::Sprite inputField, UnityEngine::Sprite knob, UnityEngine::Sprite checkmark, UnityEngine::Sprite dropdown, UnityEngine::Sprite mask) noexcept;


                    constexpr TMPro__TMP_DefaultControls__Resources(TMPro__TMP_DefaultControls__Resources const&) = default;
                    constexpr TMPro__TMP_DefaultControls__Resources(TMPro__TMP_DefaultControls__Resources&&) = default;
                    constexpr TMPro__TMP_DefaultControls__Resources& operator=(TMPro__TMP_DefaultControls__Resources const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_DefaultControls__Resources& operator=(TMPro__TMP_DefaultControls__Resources&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_DefaultControls__Resources(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Sprite __declspec(property(get=__get_standard, put=__set_standard))  standard;

constexpr void __set_standard(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_standard() const;

 UnityEngine::Sprite __declspec(property(get=__get_background, put=__set_background))  background;

constexpr void __set_background(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_background() const;

 UnityEngine::Sprite __declspec(property(get=__get_inputField, put=__set_inputField))  inputField;

constexpr void __set_inputField(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_inputField() const;

 UnityEngine::Sprite __declspec(property(get=__get_knob, put=__set_knob))  knob;

constexpr void __set_knob(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_knob() const;

 UnityEngine::Sprite __declspec(property(get=__get_checkmark, put=__set_checkmark))  checkmark;

constexpr void __set_checkmark(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_checkmark() const;

 UnityEngine::Sprite __declspec(property(get=__get_dropdown, put=__set_dropdown))  dropdown;

constexpr void __set_dropdown(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_dropdown() const;

 UnityEngine::Sprite __declspec(property(get=__get_mask, put=__set_mask))  mask;

constexpr void __set_mask(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_mask() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_DefaultControls
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12288))
// CS Name: TMPro.TMP_DefaultControls
class CORDL_TYPE TMP_DefaultControls : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Resources = TMPro::TMPro__TMP_DefaultControls__Resources;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_DefaultControls() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_DefaultControls", modifiers: " const&", def_value: None }]
constexpr TMP_DefaultControls(TMP_DefaultControls const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_DefaultControls", modifiers: "&&", def_value: None }]
constexpr TMP_DefaultControls(TMP_DefaultControls&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_DefaultControls(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_DefaultControls& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_DefaultControls& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_DefaultControls& operator=(TMP_DefaultControls&& o) noexcept = default;
  constexpr TMP_DefaultControls& operator=(TMP_DefaultControls const& o) noexcept = default;
                


// Fields

/// @brief Field kWidth offset 0
static constexpr float_t  kWidth{160};

/// @brief Field kThickHeight offset 0
static constexpr float_t  kThickHeight{30};

/// @brief Field kThinHeight offset 0
static constexpr float_t  kThinHeight{20};

static UnityEngine::Vector2 __declspec(property(get=__get_s_TextElementSize, put=__set_s_TextElementSize))  s_TextElementSize;

static void __set_s_TextElementSize(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_s_TextElementSize() ;

static UnityEngine::Vector2 __declspec(property(get=__get_s_ThickElementSize, put=__set_s_ThickElementSize))  s_ThickElementSize;

static void __set_s_ThickElementSize(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_s_ThickElementSize() ;

static UnityEngine::Vector2 __declspec(property(get=__get_s_ThinElementSize, put=__set_s_ThinElementSize))  s_ThinElementSize;

static void __set_s_ThinElementSize(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_s_ThinElementSize() ;

static UnityEngine::Color __declspec(property(get=__get_s_DefaultSelectableColor, put=__set_s_DefaultSelectableColor))  s_DefaultSelectableColor;

static void __set_s_DefaultSelectableColor(UnityEngine::Color value) ;

static UnityEngine::Color __get_s_DefaultSelectableColor() ;

static UnityEngine::Color __declspec(property(get=__get_s_TextColor, put=__set_s_TextColor))  s_TextColor;

static void __set_s_TextColor(UnityEngine::Color value) ;

static UnityEngine::Color __get_s_TextColor() ;


// Methods

/// @brief Method CreateUIElementRoot addr 0x2a6ab48 size 0xa8 virtual false final false
static UnityEngine::GameObject CreateUIElementRoot(::StringW name, UnityEngine::Vector2 size) ;

/// @brief Method CreateUIObject addr 0x2a6abf0 size 0xc0 virtual false final false
static UnityEngine::GameObject CreateUIObject(::StringW name, UnityEngine::GameObject parent) ;

/// @brief Method SetDefaultTextValues addr 0x2a6adb0 size 0x88 virtual false final false
static void SetDefaultTextValues(TMPro::TMP_Text lbl) ;

/// @brief Method SetDefaultColorTransitionValues addr 0x2a6ae38 size 0x10 virtual false final false
static void SetDefaultColorTransitionValues(UnityEngine::UI::Selectable slider) ;

/// @brief Method SetParentAndAlign addr 0x2a6acb0 size 0x100 virtual false final false
static void SetParentAndAlign(UnityEngine::GameObject child, UnityEngine::GameObject parent) ;

/// @brief Method SetLayerRecursively addr 0x2a6ae48 size 0xe4 virtual false final false
static void SetLayerRecursively(UnityEngine::GameObject go, int32_t layer) ;

/// @brief Method CreateScrollbar addr 0x2a6af2c size 0x2c4 virtual false final false
static UnityEngine::GameObject CreateScrollbar(TMPro::TMPro__TMP_DefaultControls__Resources resources) ;

/// @brief Method CreateButton addr 0x2a6b1f0 size 0x2c0 virtual false final false
static UnityEngine::GameObject CreateButton(TMPro::TMPro__TMP_DefaultControls__Resources resources) ;

/// @brief Method CreateText addr 0x2a6b4b0 size 0xa0 virtual false final false
static UnityEngine::GameObject CreateText(TMPro::TMPro__TMP_DefaultControls__Resources resources) ;

/// @brief Method CreateInputField addr 0x2a6b550 size 0x65c virtual false final false
static UnityEngine::GameObject CreateInputField(TMPro::TMPro__TMP_DefaultControls__Resources resources) ;

/// @brief Method CreateDropdown addr 0x2a6bd50 size 0xdf4 virtual false final false
static UnityEngine::GameObject CreateDropdown(TMPro::TMPro__TMP_DefaultControls__Resources resources) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_DefaultControls);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_DefaultControls, "TMPro", "TMP_DefaultControls");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_DefaultControls__Resources, "TMPro", "TMP_DefaultControls/Resources");
