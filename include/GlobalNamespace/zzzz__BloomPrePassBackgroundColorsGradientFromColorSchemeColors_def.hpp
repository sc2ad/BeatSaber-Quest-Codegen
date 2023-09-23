#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace GlobalNamespace {
class EnvironmentColorManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientFromColorSchemeColors;
}
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element;
}
// Type: ::Element
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5912))
// CS Name: BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element
class CORDL_TYPE GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element(GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element(GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element& operator=(GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element&& o) noexcept = default;
  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element& operator=(GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_loadFromColorScheme, put=__set_loadFromColorScheme))  loadFromColorScheme;

constexpr void __set_loadFromColorScheme(bool value) ;

constexpr bool __get_loadFromColorScheme() const;

 GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor __declspec(property(get=__get_environmentColor, put=__set_environmentColor))  environmentColor;

constexpr void __set_environmentColor(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor __get_environmentColor() const;

 float_t __declspec(property(get=__get_intensity, put=__set_intensity))  intensity;

constexpr void __set_intensity(float_t value) ;

constexpr float_t __get_intensity() const;

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element() ;

/// @brief Method .ctor addr 0x2191a54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnvironmentColor
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5913))
// CS Name: BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor
struct CORDL_TYPE GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor(int32_t value__) noexcept;


                    constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor(GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const&) = default;
                    constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor(GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor&&) = default;
                    constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor& operator=(GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor& operator=(GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor_Unwrapped : int32_t {
__Color0 = 0,
__Color1 = 1,
__Color0Boost = 2,
__Color1Boost = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Color0 offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color0;

/// @brief Field Color1 offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color1;

/// @brief Field Color0Boost offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color0Boost;

/// @brief Field Color1Boost offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color1Boost;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradientFromColorSchemeColors
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5914))
// CS Name: BloomPrePassBackgroundColorsGradientFromColorSchemeColors
class CORDL_TYPE BloomPrePassBackgroundColorsGradientFromColorSchemeColors : public UnityEngine::MonoBehaviour {
public:
// Declarations
using EnvironmentColor = GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor;

using Element = GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BloomPrePassBackgroundColorsGradientFromColorSchemeColors() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientFromColorSchemeColors", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors(BloomPrePassBackgroundColorsGradientFromColorSchemeColors const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientFromColorSchemeColors", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors(BloomPrePassBackgroundColorsGradientFromColorSchemeColors&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundColorsGradientFromColorSchemeColors(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors& operator=(BloomPrePassBackgroundColorsGradientFromColorSchemeColors&& o) noexcept = default;
  constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors& operator=(BloomPrePassBackgroundColorsGradientFromColorSchemeColors const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassBackgroundColorsGradient __declspec(property(get=__get__bloomPrePassBackgroundColorsGradient, put=__set__bloomPrePassBackgroundColorsGradient))  _bloomPrePassBackgroundColorsGradient;

constexpr void __set__bloomPrePassBackgroundColorsGradient(GlobalNamespace::BloomPrePassBackgroundColorsGradient value) ;

constexpr GlobalNamespace::BloomPrePassBackgroundColorsGradient __get__bloomPrePassBackgroundColorsGradient() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element> __declspec(property(get=__get__elements, put=__set__elements))  _elements;

constexpr void __set__elements(::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element> __get__elements() const;

 GlobalNamespace::EnvironmentColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::EnvironmentColorManager value) ;

constexpr GlobalNamespace::EnvironmentColorManager __get__colorManager() const;


// Methods

// Ctor Parameters []
explicit BloomPrePassBackgroundColorsGradientFromColorSchemeColors() ;

/// @brief Method .ctor addr 0x2191778 size 0x2dc virtual false final false
 void _ctor() ;

/// @brief Method Start addr 0x2191a5c size 0x194 virtual false final false
 void Start() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor");
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element");
