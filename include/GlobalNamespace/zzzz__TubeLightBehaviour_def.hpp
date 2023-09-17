#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__TubeLightBehaviour__ParameterType;
}
namespace GlobalNamespace {
class TubeLightBehaviour;
}
// Type: ::ParameterType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6074))
// CS Name: TubeLightBehaviour::ParameterType
struct CORDL_TYPE ____GlobalNamespace__TubeLightBehaviour__ParameterType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__TubeLightBehaviour__ParameterType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__TubeLightBehaviour__ParameterType(____GlobalNamespace__TubeLightBehaviour__ParameterType const&) = default;
                    constexpr ____GlobalNamespace__TubeLightBehaviour__ParameterType(____GlobalNamespace__TubeLightBehaviour__ParameterType&&) = default;
                    constexpr ____GlobalNamespace__TubeLightBehaviour__ParameterType& operator=(____GlobalNamespace__TubeLightBehaviour__ParameterType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__TubeLightBehaviour__ParameterType& operator=(____GlobalNamespace__TubeLightBehaviour__ParameterType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TubeLightBehaviour__ParameterType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__TubeLightBehaviour__ParameterType_Unwrapped : int32_t {
__Values = 0,
__References = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__TubeLightBehaviour__ParameterType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__TubeLightBehaviour__ParameterType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Values offset 0
static ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType const Values;

/// @brief Field References offset 0
static ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType const References;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TubeLightBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6075))
// CS Name: TubeLightBehaviour
class CORDL_TYPE TubeLightBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using ParameterType = ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~TubeLightBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightBehaviour", modifiers: " const&", def_value: None }]
constexpr TubeLightBehaviour(TubeLightBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightBehaviour", modifiers: "&&", def_value: None }]
constexpr TubeLightBehaviour(TubeLightBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TubeLightBehaviour(void* ptr) noexcept : ::UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr TubeLightBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TubeLightBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TubeLightBehaviour& operator=(TubeLightBehaviour&& o) noexcept = default;
  constexpr TubeLightBehaviour& operator=(TubeLightBehaviour const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__noPredefinedStartValue, put=__set__noPredefinedStartValue))  _noPredefinedStartValue;

constexpr void __set__noPredefinedStartValue(bool value) ;

constexpr bool __get__noPredefinedStartValue() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get_startColor, put=__set_startColor))  startColor;

constexpr void __set_startColor(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get_startColor() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get_endColor, put=__set_endColor))  endColor;

constexpr void __set_endColor(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get_endColor() const;

 float_t __declspec(property(get=__get_blend, put=__set_blend))  blend;

constexpr void __set_blend(float_t value) ;

constexpr float_t __get_blend() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 ::UnityEngine::Color __declspec(property(get=__get__originalColor, put=__set__originalColor))  _originalColor;

constexpr void __set__originalColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__originalColor() const;

 ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=__get__tubeLights, put=__set__tubeLights))  _tubeLights;

constexpr void __set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> value) ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> __get__tubeLights() const;

 ::ArrayW<::GlobalNamespace::DirectionalLight> __declspec(property(get=__get__directionalLights, put=__set__directionalLights))  _directionalLights;

constexpr void __set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight> value) ;

constexpr ::ArrayW<::GlobalNamespace::DirectionalLight> __get__directionalLights() const;

 bool __declspec(property(get=__get_started, put=__set_started))  started;

constexpr void __set_started(bool value) ;

constexpr bool __get_started() const;

 ::UnityEngine::Color __declspec(property(get=__get__firstFrameColor, put=__set__firstFrameColor))  _firstFrameColor;

constexpr void __set__firstFrameColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__firstFrameColor() const;


// Methods

/// @brief Method ProcessFrame addr 0x21b32c8 size 0x408 virtual true final false
 void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

/// @brief Method OnPlayableDestroy addr 0x21b36d0 size 0xcc virtual true final false
 void OnPlayableDestroy(::UnityEngine::Playables::Playable playable) ;

// Ctor Parameters []
explicit TubeLightBehaviour() ;

/// @brief Method .ctor addr 0x21b379c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType, "", "TubeLightBehaviour/ParameterType");
NEED_NO_BOX(::GlobalNamespace::TubeLightBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightBehaviour, "", "TubeLightBehaviour");
