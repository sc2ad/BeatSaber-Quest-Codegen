#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace Ice {
class Ice__FloorLightTile__Pool;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace Tweening {
class ColorTween;
}
// Forward declare root types
namespace Ice {
class FloorLightTile;
}
namespace Ice {
class Ice__FloorLightTile__Pool;
}
// Type: Ice::FloorLightTile
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16000))
// CS Name: Ice.FloorLightTile
class CORDL_TYPE FloorLightTile : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = Ice::Ice__FloorLightTile__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FloorLightTile() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTile", modifiers: " const&", def_value: None }]
constexpr FloorLightTile(FloorLightTile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTile", modifiers: "&&", def_value: None }]
constexpr FloorLightTile(FloorLightTile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloorLightTile(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FloorLightTile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloorLightTile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloorLightTile& operator=(FloorLightTile&& o) noexcept = default;
  constexpr FloorLightTile& operator=(FloorLightTile const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MaterialPropertyBlockColorSetter __declspec(property(get=__get__colorSetter, put=__set__colorSetter))  _colorSetter;

constexpr void __set__colorSetter(GlobalNamespace::MaterialPropertyBlockColorSetter value) ;

constexpr GlobalNamespace::MaterialPropertyBlockColorSetter __get__colorSetter() const;

 GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__tubeBloomPrePassLight, put=__set__tubeBloomPrePassLight))  _tubeBloomPrePassLight;

constexpr void __set__tubeBloomPrePassLight(GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr GlobalNamespace::TubeBloomPrePassLight __get__tubeBloomPrePassLight() const;

 Tweening::SongTimeTweeningManager __declspec(property(get=__get__songTimeTweeningManager, put=__set__songTimeTweeningManager))  _songTimeTweeningManager;

constexpr void __set__songTimeTweeningManager(Tweening::SongTimeTweeningManager value) ;

constexpr Tweening::SongTimeTweeningManager __get__songTimeTweeningManager() const;

 System::Action_1<Ice::FloorLightTile> __declspec(property(get=__get_didFinish, put=__set_didFinish))  didFinish;

constexpr void __set_didFinish(System::Action_1<Ice::FloorLightTile> value) ;

constexpr System::Action_1<Ice::FloorLightTile> __get_didFinish() const;

 Tweening::ColorTween __declspec(property(get=__get__fadeInTween, put=__set__fadeInTween))  _fadeInTween;

constexpr void __set__fadeInTween(Tweening::ColorTween value) ;

constexpr Tweening::ColorTween __get__fadeInTween() const;

 Tweening::ColorTween __declspec(property(get=__get__fadeOutTween, put=__set__fadeOutTween))  _fadeOutTween;

constexpr void __set__fadeOutTween(Tweening::ColorTween value) ;

constexpr Tweening::ColorTween __get__fadeOutTween() const;


// Methods

/// @brief Method Awake addr 0x1211604 size 0x1f0 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x12117f4 size 0xa0 virtual false final false
 void OnDestroy() ;

/// @brief Method HighlightWithColor addr 0x1211894 size 0xcc virtual false final false
 void HighlightWithColor(UnityEngine::Color color, float_t fadeInDuration, float_t fadeOutDuration) ;

/// @brief Method HandleFadeInTweenOnCompleted addr 0x1211960 size 0x24 virtual false final false
 void HandleFadeInTweenOnCompleted() ;

/// @brief Method HandleFadeOutTweenOnCompleted addr 0x1211984 size 0x20 virtual false final false
 void HandleFadeOutTweenOnCompleted() ;

/// @brief Method SetColor addr 0x12119a4 size 0x64 virtual false final false
 void SetColor(UnityEngine::Color color) ;

static Ice::FloorLightTile New_ctor() ;

/// @brief Method .ctor addr 0x1211a08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Ice
// Type: ::Pool
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 295 }), TypeDefinitionIndex(TypeDefinitionIndex(16000))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15999))
// CS Name: Ice.FloorLightTile::Pool
class CORDL_TYPE Ice__FloorLightTile__Pool : public Zenject::MonoMemoryPool_1<Ice::FloorLightTile> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Ice__FloorLightTile__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ice__FloorLightTile__Pool", modifiers: " const&", def_value: None }]
constexpr Ice__FloorLightTile__Pool(Ice__FloorLightTile__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ice__FloorLightTile__Pool", modifiers: "&&", def_value: None }]
constexpr Ice__FloorLightTile__Pool(Ice__FloorLightTile__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ice__FloorLightTile__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<Ice::FloorLightTile>(ptr) {
}


  constexpr Ice__FloorLightTile__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ice__FloorLightTile__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ice__FloorLightTile__Pool& operator=(Ice__FloorLightTile__Pool&& o) noexcept = default;
  constexpr Ice__FloorLightTile__Pool& operator=(Ice__FloorLightTile__Pool const& o) noexcept = default;
                


// Methods

static Ice::Ice__FloorLightTile__Pool New_ctor() ;

/// @brief Method .ctor addr 0x1211a10 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Ice
NEED_NO_BOX(Ice::FloorLightTile);
DEFINE_IL2CPP_ARG_TYPE(Ice::FloorLightTile, "Ice", "FloorLightTile");
NEED_NO_BOX(Ice::Ice__FloorLightTile__Pool);
DEFINE_IL2CPP_ARG_TYPE(Ice::Ice__FloorLightTile__Pool, "Ice", "FloorLightTile/Pool");
