#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
template<typename T>
class SimpleMemoryPool_1;
}
namespace Ice {
class FloorLightTilesGrid;
}
namespace Ice {
class Ice__FloorLightStreakTileEffect__Element;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Ice {
class FloorLightStreakTileEffect;
}
namespace Ice {
class Ice__FloorLightStreakTileEffect__Element;
}
// Type: ::Element
namespace Ice {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15997))
// CS Name: Ice.FloorLightStreakTileEffect::Element
class CORDL_TYPE Ice__FloorLightStreakTileEffect__Element : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Ice__FloorLightStreakTileEffect__Element() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ice__FloorLightStreakTileEffect__Element", modifiers: " const&", def_value: None }]
constexpr Ice__FloorLightStreakTileEffect__Element(Ice__FloorLightStreakTileEffect__Element const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ice__FloorLightStreakTileEffect__Element", modifiers: "&&", def_value: None }]
constexpr Ice__FloorLightStreakTileEffect__Element(Ice__FloorLightStreakTileEffect__Element&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ice__FloorLightStreakTileEffect__Element(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ice__FloorLightStreakTileEffect__Element& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ice__FloorLightStreakTileEffect__Element& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ice__FloorLightStreakTileEffect__Element& operator=(Ice__FloorLightStreakTileEffect__Element&& o) noexcept = default;
  constexpr Ice__FloorLightStreakTileEffect__Element& operator=(Ice__FloorLightStreakTileEffect__Element const& o) noexcept = default;
                


// Fields

 System::Action_1<Ice::Ice__FloorLightStreakTileEffect__Element> __declspec(property(get=__get_didMoveToNextTile, put=__set_didMoveToNextTile))  didMoveToNextTile;

constexpr void __set_didMoveToNextTile(System::Action_1<Ice::Ice__FloorLightStreakTileEffect__Element> value) ;

constexpr System::Action_1<Ice::Ice__FloorLightStreakTileEffect__Element> __get_didMoveToNextTile() const;

 int32_t __declspec(property(get=__get__currentTileY, put=__set__currentTileY))  _currentTileY;

constexpr void __set__currentTileY(int32_t value) ;

constexpr int32_t __get__currentTileY() const;

 int32_t __declspec(property(get=__get__lineIndex, put=__set__lineIndex))  _lineIndex;

constexpr void __set__lineIndex(int32_t value) ;

constexpr int32_t __get__lineIndex() const;

 float_t __declspec(property(get=__get__nextTileRemainingTime, put=__set__nextTileRemainingTime))  _nextTileRemainingTime;

constexpr void __set__nextTileRemainingTime(float_t value) ;

constexpr float_t __get__nextTileRemainingTime() const;

 float_t __declspec(property(get=__get__stayOnTileDuration, put=__set__stayOnTileDuration))  _stayOnTileDuration;

constexpr void __set__stayOnTileDuration(float_t value) ;

constexpr float_t __get__stayOnTileDuration() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;


// Properties

 int32_t __declspec(property(get=get_lineIndex))  lineIndex;

 int32_t __declspec(property(get=get_currentTileY))  currentTileY;

 UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_lineIndex addr 0x12115e8 size 0x8 virtual false final false
 int32_t get_lineIndex() ;

/// @brief Method get_currentTileY addr 0x12115f0 size 0x8 virtual false final false
 int32_t get_currentTileY() ;

/// @brief Method get_color addr 0x12115f8 size 0xc virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method Setup addr 0x121117c size 0x14 virtual false final false
 void Setup(UnityEngine::Color color, int32_t lineIndex, float_t stayOnTileDuration) ;

/// @brief Method ManualUpdate addr 0x1211054 size 0x68 virtual false final false
 void ManualUpdate(float_t deltaTime) ;

static Ice::Ice__FloorLightStreakTileEffect__Element New_ctor() ;

/// @brief Method .ctor addr 0x1211530 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Ice
// Type: Ice::FloorLightStreakTileEffect
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15998))
// CS Name: Ice.FloorLightStreakTileEffect
class CORDL_TYPE FloorLightStreakTileEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Element = Ice::Ice__FloorLightStreakTileEffect__Element;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FloorLightStreakTileEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightStreakTileEffect", modifiers: " const&", def_value: None }]
constexpr FloorLightStreakTileEffect(FloorLightStreakTileEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightStreakTileEffect", modifiers: "&&", def_value: None }]
constexpr FloorLightStreakTileEffect(FloorLightStreakTileEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloorLightStreakTileEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FloorLightStreakTileEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloorLightStreakTileEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloorLightStreakTileEffect& operator=(FloorLightStreakTileEffect&& o) noexcept = default;
  constexpr FloorLightStreakTileEffect& operator=(FloorLightStreakTileEffect const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__stayOnTileDuration, put=__set__stayOnTileDuration))  _stayOnTileDuration;

constexpr void __set__stayOnTileDuration(float_t value) ;

constexpr float_t __get__stayOnTileDuration() const;

 Ice::FloorLightTilesGrid __declspec(property(get=__get__floorLightTilesGrid, put=__set__floorLightTilesGrid))  _floorLightTilesGrid;

constexpr void __set__floorLightTilesGrid(Ice::FloorLightTilesGrid value) ;

constexpr Ice::FloorLightTilesGrid __get__floorLightTilesGrid() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

/// @brief Field kFadeInDuration offset 0
static constexpr float_t  kFadeInDuration{0.1};

/// @brief Field kFadeOutDuration offset 0
static constexpr float_t  kFadeOutDuration{0.4};

 GlobalNamespace::SimpleMemoryPool_1<Ice::Ice__FloorLightStreakTileEffect__Element> __declspec(property(get=__get__elementsPool, put=__set__elementsPool))  _elementsPool;

constexpr void __set__elementsPool(GlobalNamespace::SimpleMemoryPool_1<Ice::Ice__FloorLightStreakTileEffect__Element> value) ;

constexpr GlobalNamespace::SimpleMemoryPool_1<Ice::Ice__FloorLightStreakTileEffect__Element> __get__elementsPool() const;


// Methods

/// @brief Method Start addr 0x1210da0 size 0xc4 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x1210e64 size 0x1f0 virtual false final false
 void Update() ;

/// @brief Method SpawnEffect addr 0x12110bc size 0xc0 virtual false final false
 void SpawnEffect(int32_t x, UnityEngine::Color color) ;

/// @brief Method DespawnAllEffects addr 0x1211348 size 0xe4 virtual false final false
 void DespawnAllEffects() ;

/// @brief Method CreateNewElement addr 0x121142c size 0x104 virtual false final false
 Ice::Ice__FloorLightStreakTileEffect__Element CreateNewElement() ;

/// @brief Method HandleElementDidMoveToNextTile addr 0x1211538 size 0x9c virtual false final false
 void HandleElementDidMoveToNextTile(Ice::Ice__FloorLightStreakTileEffect__Element element) ;

static Ice::FloorLightStreakTileEffect New_ctor() ;

/// @brief Method .ctor addr 0x12115d4 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Ice
NEED_NO_BOX(Ice::FloorLightStreakTileEffect);
DEFINE_IL2CPP_ARG_TYPE(Ice::FloorLightStreakTileEffect, "Ice", "FloorLightStreakTileEffect");
NEED_NO_BOX(Ice::Ice__FloorLightStreakTileEffect__Element);
DEFINE_IL2CPP_ARG_TYPE(Ice::Ice__FloorLightStreakTileEffect__Element, "Ice", "FloorLightStreakTileEffect/Element");
