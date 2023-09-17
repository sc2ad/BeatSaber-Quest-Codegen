#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__GhostEffectBehaviour__EndBehavior;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__GhostEffectBehaviour__GhostEffectType;
}
namespace GlobalNamespace {
class GhostEffectBehaviour;
}
// Type: ::EndBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6067))
// CS Name: GhostEffectBehaviour::EndBehavior
struct CORDL_TYPE ____GlobalNamespace__GhostEffectBehaviour__EndBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__GhostEffectBehaviour__EndBehavior(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__GhostEffectBehaviour__EndBehavior(____GlobalNamespace__GhostEffectBehaviour__EndBehavior const&) = default;
                    constexpr ____GlobalNamespace__GhostEffectBehaviour__EndBehavior(____GlobalNamespace__GhostEffectBehaviour__EndBehavior&&) = default;
                    constexpr ____GlobalNamespace__GhostEffectBehaviour__EndBehavior& operator=(____GlobalNamespace__GhostEffectBehaviour__EndBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__GhostEffectBehaviour__EndBehavior& operator=(____GlobalNamespace__GhostEffectBehaviour__EndBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GhostEffectBehaviour__EndBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__GhostEffectBehaviour__EndBehavior_Unwrapped : int32_t {
__DisableAll = 0,
__DisableCopies = 1,
__Nothing = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__GhostEffectBehaviour__EndBehavior_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__GhostEffectBehaviour__EndBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DisableAll offset 0
static ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__EndBehavior const DisableAll;

/// @brief Field DisableCopies offset 0
static ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__EndBehavior const DisableCopies;

/// @brief Field Nothing offset 0
static ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__EndBehavior const Nothing;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GhostEffectType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6068))
// CS Name: GhostEffectBehaviour::GhostEffectType
struct CORDL_TYPE ____GlobalNamespace__GhostEffectBehaviour__GhostEffectType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__GhostEffectBehaviour__GhostEffectType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__GhostEffectBehaviour__GhostEffectType(____GlobalNamespace__GhostEffectBehaviour__GhostEffectType const&) = default;
                    constexpr ____GlobalNamespace__GhostEffectBehaviour__GhostEffectType(____GlobalNamespace__GhostEffectBehaviour__GhostEffectType&&) = default;
                    constexpr ____GlobalNamespace__GhostEffectBehaviour__GhostEffectType& operator=(____GlobalNamespace__GhostEffectBehaviour__GhostEffectType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__GhostEffectBehaviour__GhostEffectType& operator=(____GlobalNamespace__GhostEffectBehaviour__GhostEffectType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GhostEffectBehaviour__GhostEffectType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__GhostEffectBehaviour__GhostEffectType_Unwrapped : int32_t {
__TextMeshPro = 0,
__Canvas = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__GhostEffectBehaviour__GhostEffectType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__GhostEffectBehaviour__GhostEffectType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TextMeshPro offset 0
static ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType const TextMeshPro;

/// @brief Field Canvas offset 0
static ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType const Canvas;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GhostEffectBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6069))
// CS Name: GhostEffectBehaviour
class CORDL_TYPE GhostEffectBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using GhostEffectType = ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType;

using EndBehavior = ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__EndBehavior;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~GhostEffectBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectBehaviour", modifiers: " const&", def_value: None }]
constexpr GhostEffectBehaviour(GhostEffectBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectBehaviour", modifiers: "&&", def_value: None }]
constexpr GhostEffectBehaviour(GhostEffectBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GhostEffectBehaviour(void* ptr) noexcept : ::UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr GhostEffectBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GhostEffectBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GhostEffectBehaviour& operator=(GhostEffectBehaviour&& o) noexcept = default;
  constexpr GhostEffectBehaviour& operator=(GhostEffectBehaviour const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_alphaCurve, put=__set_alphaCurve))  alphaCurve;

constexpr void __set_alphaCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_alphaCurve() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_sizeCurve, put=__set_sizeCurve))  sizeCurve;

constexpr void __set_sizeCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_sizeCurve() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_distanceCurve, put=__set_distanceCurve))  distanceCurve;

constexpr void __set_distanceCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_distanceCurve() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__distanceMultiplier, put=__set__distanceMultiplier))  _distanceMultiplier;

constexpr void __set__distanceMultiplier(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__distanceMultiplier() const;

 bool __declspec(property(get=__get__useStartTransform, put=__set__useStartTransform))  _useStartTransform;

constexpr void __set__useStartTransform(bool value) ;

constexpr bool __get__useStartTransform() const;

 bool __declspec(property(get=__get__useEndTransform, put=__set__useEndTransform))  _useEndTransform;

constexpr void __set__useEndTransform(bool value) ;

constexpr bool __get__useEndTransform() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__startLocalPosition, put=__set__startLocalPosition))  _startLocalPosition;

constexpr void __set__startLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__startLocalPosition() const;

 ::UnityEngine::Transform __declspec(property(get=__get__startTransform, put=__set__startTransform))  _startTransform;

constexpr void __set__startTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__startTransform() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__endLocalPosition, put=__set__endLocalPosition))  _endLocalPosition;

constexpr void __set__endLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__endLocalPosition() const;

 ::UnityEngine::Transform __declspec(property(get=__get__endTransform, put=__set__endTransform))  _endTransform;

constexpr void __set__endTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__endTransform() const;

 ::GlobalNamespace::EaseType __declspec(property(get=__get__positionEasing, put=__set__positionEasing))  _positionEasing;

constexpr void __set__positionEasing(::GlobalNamespace::EaseType value) ;

constexpr ::GlobalNamespace::EaseType __get__positionEasing() const;

 ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__EndBehavior __declspec(property(get=__get__endBehavior, put=__set__endBehavior))  _endBehavior;

constexpr void __set__endBehavior(::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__EndBehavior value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__EndBehavior __get__endBehavior() const;

 float_t __declspec(property(get=__get_progress, put=__set_progress))  progress;

constexpr void __set_progress(float_t value) ;

constexpr float_t __get_progress() const;

 ::ArrayW<::TMPro::TextMeshPro> __declspec(property(get=__get_textMeshPros, put=__set_textMeshPros))  textMeshPros;

constexpr void __set_textMeshPros(::ArrayW<::TMPro::TextMeshPro> value) ;

constexpr ::ArrayW<::TMPro::TextMeshPro> __get_textMeshPros() const;

 ::ArrayW<::UnityEngine::CanvasGroup> __declspec(property(get=__get__canvasGroups, put=__set__canvasGroups))  _canvasGroups;

constexpr void __set__canvasGroups(::ArrayW<::UnityEngine::CanvasGroup> value) ;

constexpr ::ArrayW<::UnityEngine::CanvasGroup> __get__canvasGroups() const;

 ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType __declspec(property(get=__get__ghostEffectType, put=__set__ghostEffectType))  _ghostEffectType;

constexpr void __set__ghostEffectType(::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType __get__ghostEffectType() const;

 ::UnityEngine::Transform __declspec(property(get=__get__ghostEffectTransform, put=__set__ghostEffectTransform))  _ghostEffectTransform;

constexpr void __set__ghostEffectTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__ghostEffectTransform() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__direction, put=__set__direction))  _direction;

constexpr void __set__direction(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__direction() const;

 bool __declspec(property(get=__get__finished, put=__set__finished))  _finished;

constexpr void __set__finished(bool value) ;

constexpr bool __get__finished() const;


// Methods

/// @brief Method OnBehaviourPlay addr 0x21b2888 size 0x190 virtual true final false
 void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) ;

/// @brief Method ProcessFrame addr 0x21b2b2c size 0x438 virtual true final false
 void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

/// @brief Method EnableObjects addr 0x21b2a18 size 0x114 virtual false final false
 void EnableObjects(bool on) ;

// Ctor Parameters []
explicit GhostEffectBehaviour() ;

/// @brief Method .ctor addr 0x21b2f64 size 0xd0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__EndBehavior, "", "GhostEffectBehaviour/EndBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType, "", "GhostEffectBehaviour/GhostEffectType");
NEED_NO_BOX(::GlobalNamespace::GhostEffectBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostEffectBehaviour, "", "GhostEffectBehaviour");
