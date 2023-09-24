#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
#include <cstddef>
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatLine__HighlightData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatLine__Pool;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatLine;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatLine__Pool;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatLine__HighlightData;
}
// Type: ::BeatLine
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4816))
// CS Name: BeatLine
class CORDL_TYPE BeatLine : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
using HighlightData = GlobalNamespace::GlobalNamespace__BeatLine__HighlightData;

using Pool = GlobalNamespace::GlobalNamespace__BeatLine__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~BeatLine() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatLine", modifiers: " const&", def_value: None }]
constexpr BeatLine(BeatLine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatLine", modifiers: "&&", def_value: None }]
constexpr BeatLine(BeatLine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatLine(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr BeatLine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatLine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatLine& operator=(BeatLine&& o) noexcept = default;
  constexpr BeatLine& operator=(BeatLine const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__tubeBloomPrePassLight, put=__set__tubeBloomPrePassLight))  _tubeBloomPrePassLight;

constexpr void __set__tubeBloomPrePassLight(GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr GlobalNamespace::TubeBloomPrePassLight __get__tubeBloomPrePassLight() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__arriveFadeCurve, put=__set__arriveFadeCurve))  _arriveFadeCurve;

constexpr void __set__arriveFadeCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__arriveFadeCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__jumpFadeCurve, put=__set__jumpFadeCurve))  _jumpFadeCurve;

constexpr void __set__jumpFadeCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__jumpFadeCurve() const;

 float_t __declspec(property(get=__get__alphaMul, put=__set__alphaMul))  _alphaMul;

constexpr void __set__alphaMul(float_t value) ;

constexpr float_t __get__alphaMul() const;

 float_t __declspec(property(get=__get__maxAlpha, put=__set__maxAlpha))  _maxAlpha;

constexpr void __set__maxAlpha(float_t value) ;

constexpr float_t __get__maxAlpha() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatLine__HighlightData> __declspec(property(get=__get__highlights, put=__set__highlights))  _highlights;

constexpr void __set__highlights(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatLine__HighlightData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatLine__HighlightData> __get__highlights() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 float_t __declspec(property(get=__get__rotation, put=__set__rotation))  _rotation;

constexpr void __set__rotation(float_t value) ;

constexpr float_t __get__rotation() const;


// Properties

 bool __declspec(property(get=get_isFinished))  isFinished;

 float_t __declspec(property(get=get_rotation))  rotation;


// Methods

/// @brief Method get_isFinished addr 0x222d0b0 size 0x50 virtual false final false
 bool get_isFinished() ;

/// @brief Method get_rotation addr 0x222d100 size 0x8 virtual false final false
 float_t get_rotation() ;

/// @brief Method Init addr 0x222d108 size 0xcc virtual false final false
 void Init(UnityEngine::Vector3 position, float_t rotation) ;

/// @brief Method ColorWasSet addr 0x222d1d4 size 0xc virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

/// @brief Method AddHighlight addr 0x222d1e0 size 0xdc virtual false final false
 void AddHighlight(float_t startTime, float_t arriveDuration, float_t jumpDuration) ;

/// @brief Method ManualUpdate addr 0x222d2bc size 0x14c virtual false final false
 void ManualUpdate(float_t songTime) ;

static GlobalNamespace::BeatLine New_ctor() ;

/// @brief Method .ctor addr 0x222d408 size 0xcc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4816)), TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2705 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4814))
// CS Name: BeatLine::Pool
class CORDL_TYPE GlobalNamespace__BeatLine__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::BeatLine> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__BeatLine__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatLine__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatLine__Pool(GlobalNamespace__BeatLine__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatLine__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatLine__Pool(GlobalNamespace__BeatLine__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatLine__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::BeatLine>(ptr) {
}


  constexpr GlobalNamespace__BeatLine__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatLine__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatLine__Pool& operator=(GlobalNamespace__BeatLine__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__BeatLine__Pool& operator=(GlobalNamespace__BeatLine__Pool const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__BeatLine__Pool New_ctor() ;

/// @brief Method .ctor addr 0x222d4d4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HighlightData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4815))
// CS Name: BeatLine::HighlightData
struct CORDL_TYPE GlobalNamespace__BeatLine__HighlightData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "arriveDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "halfJumpDuration", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatLine__HighlightData(float_t startTime, float_t arriveDuration, float_t halfJumpDuration) noexcept;


                    constexpr GlobalNamespace__BeatLine__HighlightData(GlobalNamespace__BeatLine__HighlightData const&) = default;
                    constexpr GlobalNamespace__BeatLine__HighlightData(GlobalNamespace__BeatLine__HighlightData&&) = default;
                    constexpr GlobalNamespace__BeatLine__HighlightData& operator=(GlobalNamespace__BeatLine__HighlightData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatLine__HighlightData& operator=(GlobalNamespace__BeatLine__HighlightData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatLine__HighlightData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_startTime, put=__set_startTime))  startTime;

constexpr void __set_startTime(float_t value) ;

constexpr float_t __get_startTime() const;

 float_t __declspec(property(get=__get_arriveDuration, put=__set_arriveDuration))  arriveDuration;

constexpr void __set_arriveDuration(float_t value) ;

constexpr float_t __get_arriveDuration() const;

 float_t __declspec(property(get=__get_halfJumpDuration, put=__set_halfJumpDuration))  halfJumpDuration;

constexpr void __set_halfJumpDuration(float_t value) ;

constexpr float_t __get_halfJumpDuration() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatLine);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLine, "", "BeatLine");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatLine__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatLine__Pool, "", "BeatLine/Pool");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatLine__HighlightData, "", "BeatLine/HighlightData");
