#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType;
}
namespace GlobalNamespace {
class SpriteLightWithId;
}
// Type: ::MultiplyColorByAlphaType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14717))
// CS Name: SpriteLightWithId::MultiplyColorByAlphaType
struct CORDL_TYPE GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType(GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType const&) = default;
                    constexpr GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType(GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType&&) = default;
                    constexpr GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType& operator=(GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType& operator=(GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped : int32_t {
__None = 0,
__BeforeApplyingMinAlpha = 1,
__AfterApplyingMinAlpha = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType const None;

/// @brief Field BeforeApplyingMinAlpha offset 0
static GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType const BeforeApplyingMinAlpha;

/// @brief Field AfterApplyingMinAlpha offset 0
static GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType const AfterApplyingMinAlpha;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpriteLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14718))
// CS Name: SpriteLightWithId
class CORDL_TYPE SpriteLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
using MultiplyColorByAlphaType = GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SpriteLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteLightWithId", modifiers: " const&", def_value: None }]
constexpr SpriteLightWithId(SpriteLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteLightWithId", modifiers: "&&", def_value: None }]
constexpr SpriteLightWithId(SpriteLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteLightWithId(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr SpriteLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteLightWithId& operator=(SpriteLightWithId&& o) noexcept = default;
  constexpr SpriteLightWithId& operator=(SpriteLightWithId const& o) noexcept = default;
                


// Fields

 UnityEngine::SpriteRenderer __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer))  _spriteRenderer;

constexpr void __set__spriteRenderer(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__spriteRenderer() const;

 bool __declspec(property(get=__get__hideIfAlphaOutOfRange, put=__set__hideIfAlphaOutOfRange))  _hideIfAlphaOutOfRange;

constexpr void __set__hideIfAlphaOutOfRange(bool value) ;

constexpr bool __get__hideIfAlphaOutOfRange() const;

 float_t __declspec(property(get=__get__hideAlphaRangeMin, put=__set__hideAlphaRangeMin))  _hideAlphaRangeMin;

constexpr void __set__hideAlphaRangeMin(float_t value) ;

constexpr float_t __get__hideAlphaRangeMin() const;

 float_t __declspec(property(get=__get__hideAlphaRangeMax, put=__set__hideAlphaRangeMax))  _hideAlphaRangeMax;

constexpr void __set__hideAlphaRangeMax(float_t value) ;

constexpr float_t __get__hideAlphaRangeMax() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__minAlpha, put=__set__minAlpha))  _minAlpha;

constexpr void __set__minAlpha(float_t value) ;

constexpr float_t __get__minAlpha() const;

 GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType __declspec(property(get=__get__multiplyColorByAlpha, put=__set__multiplyColorByAlpha))  _multiplyColorByAlpha;

constexpr void __set__multiplyColorByAlpha(GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType value) ;

constexpr GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType __get__multiplyColorByAlpha() const;

 bool __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly))  _setColorOnly;

constexpr void __set__setColorOnly(bool value) ;

constexpr bool __get__setColorOnly() const;

 bool __declspec(property(get=__get__setAlphaOnly, put=__set__setAlphaOnly))  _setAlphaOnly;

constexpr void __set__setAlphaOnly(bool value) ;

constexpr bool __get__setAlphaOnly() const;

 bool __declspec(property(get=__get__setOnlyOnce, put=__set__setOnlyOnce))  _setOnlyOnce;

constexpr void __set__setOnlyOnce(bool value) ;

constexpr bool __get__setOnlyOnce() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x1fa0560 size 0x1c virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method ColorWasSet addr 0x1fa057c size 0x144 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

// Ctor Parameters []
explicit SpriteLightWithId() ;

/// @brief Method .ctor addr 0x1fa06c0 size 0x1024 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType, "", "SpriteLightWithId/MultiplyColorByAlphaType");
NEED_NO_BOX(GlobalNamespace::SpriteLightWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpriteLightWithId, "", "SpriteLightWithId");
