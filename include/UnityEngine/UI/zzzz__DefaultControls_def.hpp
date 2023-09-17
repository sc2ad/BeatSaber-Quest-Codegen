#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::UI {
class DefaultControls;
}
namespace UnityEngine::UI {
class ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory;
}
namespace UnityEngine::UI {
class ____UnityEngine__UI__DefaultControls__IFactoryControls;
}
namespace UnityEngine::UI {
struct ____UnityEngine__UI__DefaultControls__Resources;
}
// Type: ::IFactoryControls
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12968))
// CS Name: UnityEngine.UI.DefaultControls::IFactoryControls
class CORDL_TYPE ____UnityEngine__UI__DefaultControls__IFactoryControls : public ::cordl_internals::InterfaceW {
public:
// Declarations
~____UnityEngine__UI__DefaultControls__IFactoryControls() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__DefaultControls__IFactoryControls(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject CreateGameObject(::StringW name, ::ArrayW<::System::Type> components) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::DefaultRuntimeFactory
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12969))
// CS Name: UnityEngine.UI.DefaultControls::DefaultRuntimeFactory
class CORDL_TYPE ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls
constexpr operator  ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory(____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory(____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory& operator=(____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory& operator=(____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls value) ;

static ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls __get_Default() ;


// Methods

/// @brief Method CreateGameObject addr 0x2bdee98 size 0x74 virtual true final true
 ::UnityEngine::GameObject CreateGameObject(::StringW name, ::ArrayW<::System::Type> components) ;

// Ctor Parameters []
explicit ____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory() ;

/// @brief Method .ctor addr 0x2bdef0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Resources
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12970))
// CS Name: UnityEngine.UI.DefaultControls::Resources
struct CORDL_TYPE ____UnityEngine__UI__DefaultControls__Resources : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "standard", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "background", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "inputField", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "knob", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "checkmark", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "dropdown", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "mask", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__DefaultControls__Resources(::UnityEngine::Sprite standard, ::UnityEngine::Sprite background, ::UnityEngine::Sprite inputField, ::UnityEngine::Sprite knob, ::UnityEngine::Sprite checkmark, ::UnityEngine::Sprite dropdown, ::UnityEngine::Sprite mask) noexcept;


                    constexpr ____UnityEngine__UI__DefaultControls__Resources(____UnityEngine__UI__DefaultControls__Resources const&) = default;
                    constexpr ____UnityEngine__UI__DefaultControls__Resources(____UnityEngine__UI__DefaultControls__Resources&&) = default;
                    constexpr ____UnityEngine__UI__DefaultControls__Resources& operator=(____UnityEngine__UI__DefaultControls__Resources const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__DefaultControls__Resources& operator=(____UnityEngine__UI__DefaultControls__Resources&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__DefaultControls__Resources(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Sprite __declspec(property(get=__get_standard, put=__set_standard))  standard;

constexpr void __set_standard(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_standard() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_background, put=__set_background))  background;

constexpr void __set_background(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_background() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_inputField, put=__set_inputField))  inputField;

constexpr void __set_inputField(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_inputField() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_knob, put=__set_knob))  knob;

constexpr void __set_knob(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_knob() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_checkmark, put=__set_checkmark))  checkmark;

constexpr void __set_checkmark(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_checkmark() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_dropdown, put=__set_dropdown))  dropdown;

constexpr void __set_dropdown(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_dropdown() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_mask, put=__set_mask))  mask;

constexpr void __set_mask(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_mask() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::DefaultControls
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12971))
// CS Name: UnityEngine.UI.DefaultControls
class CORDL_TYPE DefaultControls : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Resources = ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources;

using DefaultRuntimeFactory = ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory;

using IFactoryControls = ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultControls() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultControls", modifiers: " const&", def_value: None }]
constexpr DefaultControls(DefaultControls const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultControls", modifiers: "&&", def_value: None }]
constexpr DefaultControls(DefaultControls&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultControls(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultControls& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultControls& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultControls& operator=(DefaultControls&& o) noexcept = default;
  constexpr DefaultControls& operator=(DefaultControls const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls __declspec(property(get=__get_m_CurrentFactory, put=__set_m_CurrentFactory))  m_CurrentFactory;

static void __set_m_CurrentFactory(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls value) ;

static ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls __get_m_CurrentFactory() ;

/// @brief Field kWidth offset 0
static constexpr float_t  kWidth{160};

/// @brief Field kThickHeight offset 0
static constexpr float_t  kThickHeight{30};

/// @brief Field kThinHeight offset 0
static constexpr float_t  kThinHeight{20};

static ::UnityEngine::Vector2 __declspec(property(get=__get_s_ThickElementSize, put=__set_s_ThickElementSize))  s_ThickElementSize;

static void __set_s_ThickElementSize(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_s_ThickElementSize() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_s_ThinElementSize, put=__set_s_ThinElementSize))  s_ThinElementSize;

static void __set_s_ThinElementSize(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_s_ThinElementSize() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_s_ImageElementSize, put=__set_s_ImageElementSize))  s_ImageElementSize;

static void __set_s_ImageElementSize(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_s_ImageElementSize() ;

static ::UnityEngine::Color __declspec(property(get=__get_s_DefaultSelectableColor, put=__set_s_DefaultSelectableColor))  s_DefaultSelectableColor;

static void __set_s_DefaultSelectableColor(::UnityEngine::Color value) ;

static ::UnityEngine::Color __get_s_DefaultSelectableColor() ;

static ::UnityEngine::Color __declspec(property(get=__get_s_PanelColor, put=__set_s_PanelColor))  s_PanelColor;

static void __set_s_PanelColor(::UnityEngine::Color value) ;

static ::UnityEngine::Color __get_s_PanelColor() ;

static ::UnityEngine::Color __declspec(property(get=__get_s_TextColor, put=__set_s_TextColor))  s_TextColor;

static void __set_s_TextColor(::UnityEngine::Color value) ;

static ::UnityEngine::Color __get_s_TextColor() ;


// Properties

static ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls __declspec(property(get=get_factory))  factory;


// Methods

/// @brief Method get_factory addr 0x2bda5d0 size 0x58 virtual false final false
static ::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls get_factory() ;

/// @brief Method CreateUIElementRoot addr 0x2bda628 size 0x160 virtual false final false
static ::UnityEngine::GameObject CreateUIElementRoot(::StringW name, ::UnityEngine::Vector2 size, ::ArrayW<::System::Type> components) ;

/// @brief Method CreateUIObject addr 0x2bda788 size 0x128 virtual false final false
static ::UnityEngine::GameObject CreateUIObject(::StringW name, ::UnityEngine::GameObject parent, ::ArrayW<::System::Type> components) ;

/// @brief Method SetDefaultTextValues addr 0x2bda9b0 size 0xdc virtual false final false
static void SetDefaultTextValues(::UnityEngine::UI::Text lbl) ;

/// @brief Method SetDefaultColorTransitionValues addr 0x2bdaa8c size 0x10 virtual false final false
static void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable slider) ;

/// @brief Method SetParentAndAlign addr 0x2bda8b0 size 0x100 virtual false final false
static void SetParentAndAlign(::UnityEngine::GameObject child, ::UnityEngine::GameObject parent) ;

/// @brief Method SetLayerRecursively addr 0x2bdaa9c size 0xe4 virtual false final false
static void SetLayerRecursively(::UnityEngine::GameObject go, int32_t layer) ;

/// @brief Method CreatePanel addr 0x2bdab80 size 0x2bc virtual false final false
static ::UnityEngine::GameObject CreatePanel(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateButton addr 0x2bdb1a4 size 0x3ec virtual false final false
static ::UnityEngine::GameObject CreateButton(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateText addr 0x2bdb590 size 0x1a0 virtual false final false
static ::UnityEngine::GameObject CreateText(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateImage addr 0x2bdb730 size 0x13c virtual false final false
static ::UnityEngine::GameObject CreateImage(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateRawImage addr 0x2bdb86c size 0x13c virtual false final false
static ::UnityEngine::GameObject CreateRawImage(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateSlider addr 0x2bdb9a8 size 0x6b4 virtual false final false
static ::UnityEngine::GameObject CreateSlider(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateScrollbar addr 0x2bdc05c size 0x474 virtual false final false
static ::UnityEngine::GameObject CreateScrollbar(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateToggle addr 0x2bdc4d0 size 0x578 virtual false final false
static ::UnityEngine::GameObject CreateToggle(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateInputField addr 0x2bdca48 size 0x620 virtual false final false
static ::UnityEngine::GameObject CreateInputField(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateDropdown addr 0x2bdd068 size 0x1258 virtual false final false
static ::UnityEngine::GameObject CreateDropdown(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

/// @brief Method CreateScrollView addr 0x2bde4d8 size 0x8e8 virtual false final false
static ::UnityEngine::GameObject CreateScrollView(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources resources) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::DefaultControls);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::DefaultControls, "UnityEngine.UI", "DefaultControls");
NEED_NO_BOX(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__DefaultRuntimeFactory, "UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory");
NEED_NO_BOX(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__IFactoryControls, "UnityEngine.UI", "DefaultControls/IFactoryControls");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__DefaultControls__Resources, "UnityEngine.UI", "DefaultControls/Resources");
