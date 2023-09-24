#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class GlobalNamespace__NoteLineConnectionController__Pool;
}
namespace UnityEngine {
class LineRenderer;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class NoteController;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class ColorManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__NoteLineConnectionController__Pool;
}
namespace GlobalNamespace {
class NoteLineConnectionController;
}
// Type: ::NoteLineConnectionController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4897))
// CS Name: NoteLineConnectionController
class CORDL_TYPE NoteLineConnectionController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__NoteLineConnectionController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NoteLineConnectionController() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteLineConnectionController", modifiers: " const&", def_value: None }]
constexpr NoteLineConnectionController(NoteLineConnectionController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteLineConnectionController", modifiers: "&&", def_value: None }]
constexpr NoteLineConnectionController(NoteLineConnectionController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteLineConnectionController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteLineConnectionController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteLineConnectionController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteLineConnectionController& operator=(NoteLineConnectionController&& o) noexcept = default;
  constexpr NoteLineConnectionController& operator=(NoteLineConnectionController const& o) noexcept = default;
                


// Fields

 UnityEngine::LineRenderer __declspec(property(get=__get__lineRenderer, put=__set__lineRenderer))  _lineRenderer;

constexpr void __set__lineRenderer(UnityEngine::LineRenderer value) ;

constexpr UnityEngine::LineRenderer __get__lineRenderer() const;

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 System::Action_1<GlobalNamespace::NoteLineConnectionController> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<GlobalNamespace::NoteLineConnectionController> value) ;

constexpr System::Action_1<GlobalNamespace::NoteLineConnectionController> __get_didFinishEvent() const;

 GlobalNamespace::NoteController __declspec(property(get=__get__noteController0, put=__set__noteController0))  _noteController0;

constexpr void __set__noteController0(GlobalNamespace::NoteController value) ;

constexpr GlobalNamespace::NoteController __get__noteController0() const;

 GlobalNamespace::NoteController __declspec(property(get=__get__noteController1, put=__set__noteController1))  _noteController1;

constexpr void __set__noteController1(GlobalNamespace::NoteController value) ;

constexpr GlobalNamespace::NoteController __get__noteController1() const;

 UnityEngine::Color __declspec(property(get=__get__color0, put=__set__color0))  _color0;

constexpr void __set__color0(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color0() const;

 UnityEngine::Color __declspec(property(get=__get__color1, put=__set__color1))  _color1;

constexpr void __set__color1(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color1() const;

 float_t __declspec(property(get=__get__fadeOutStartDistance, put=__set__fadeOutStartDistance))  _fadeOutStartDistance;

constexpr void __set__fadeOutStartDistance(float_t value) ;

constexpr float_t __get__fadeOutStartDistance() const;

 float_t __declspec(property(get=__get__fadeOutEndDistance, put=__set__fadeOutEndDistance))  _fadeOutEndDistance;

constexpr void __set__fadeOutEndDistance(float_t value) ;

constexpr float_t __get__fadeOutEndDistance() const;

 float_t __declspec(property(get=__get__noteTime, put=__set__noteTime))  _noteTime;

constexpr void __set__noteTime(float_t value) ;

constexpr float_t __get__noteTime() const;

 bool __declspec(property(get=__get__didFinish, put=__set__didFinish))  _didFinish;

constexpr void __set__didFinish(bool value) ;

constexpr bool __get__didFinish() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x224263c size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_1<GlobalNamespace::NoteLineConnectionController> value) ;

/// @brief Method remove_didFinishEvent addr 0x22426ec size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_1<GlobalNamespace::NoteLineConnectionController> value) ;

/// @brief Method Setup addr 0x224279c size 0xa4 virtual false final false
 void Setup(GlobalNamespace::NoteController noteController0, GlobalNamespace::NoteController noteController1, float_t fadeOutStartDistance, float_t fadeOutEndDistance, float_t noteTime) ;

/// @brief Method Update addr 0x22429fc size 0x64 virtual false final false
 void Update() ;

/// @brief Method UpdatePositionsAndColors addr 0x2242840 size 0x1bc virtual false final false
 void UpdatePositionsAndColors() ;

static GlobalNamespace::NoteLineConnectionController New_ctor() ;

/// @brief Method .ctor addr 0x2242a60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4897)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 350 }), TypeDefinitionIndex(TypeDefinitionIndex(10992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4896))
// CS Name: NoteLineConnectionController::Pool
class CORDL_TYPE GlobalNamespace__NoteLineConnectionController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::NoteLineConnectionController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__NoteLineConnectionController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteLineConnectionController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NoteLineConnectionController__Pool(GlobalNamespace__NoteLineConnectionController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteLineConnectionController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NoteLineConnectionController__Pool(GlobalNamespace__NoteLineConnectionController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteLineConnectionController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::NoteLineConnectionController>(ptr) {
}


  constexpr GlobalNamespace__NoteLineConnectionController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NoteLineConnectionController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NoteLineConnectionController__Pool& operator=(GlobalNamespace__NoteLineConnectionController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__NoteLineConnectionController__Pool& operator=(GlobalNamespace__NoteLineConnectionController__Pool const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__NoteLineConnectionController__Pool New_ctor() ;

/// @brief Method .ctor addr 0x2242a68 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NoteLineConnectionController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteLineConnectionController__Pool, "", "NoteLineConnectionController/Pool");
NEED_NO_BOX(GlobalNamespace::NoteLineConnectionController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteLineConnectionController, "", "NoteLineConnectionController");
