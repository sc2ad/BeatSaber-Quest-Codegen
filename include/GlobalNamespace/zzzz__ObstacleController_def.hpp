#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
class StretchableObstacle;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ObstacleController__Pool;
}
namespace GlobalNamespace {
class GlobalNamespace__ObstacleController___DissolveCoroutine_d__65;
}
namespace GlobalNamespace {
class ObstacleController;
}
// Type: ::ObstacleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4908))
// CS Name: ObstacleController
class CORDL_TYPE ObstacleController : public GlobalNamespace::ObstacleControllerBase {
public:
// Declarations
using _DissolveCoroutine_d__65 = GlobalNamespace::GlobalNamespace__ObstacleController___DissolveCoroutine_d__65;

using Pool = GlobalNamespace::GlobalNamespace__ObstacleController__Pool;

/// @brief Convert operator to GlobalNamespace::IBeatmapObjectController
constexpr operator  GlobalNamespace::IBeatmapObjectController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~ObstacleController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: " const&", def_value: None }]
constexpr ObstacleController(ObstacleController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: "&&", def_value: None }]
constexpr ObstacleController(ObstacleController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleController(void* ptr) noexcept : GlobalNamespace::ObstacleControllerBase(ptr) {
}


  constexpr ObstacleController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleController& operator=(ObstacleController&& o) noexcept = default;
  constexpr ObstacleController& operator=(ObstacleController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::StretchableObstacle __declspec(property(get=__get__stretchableObstacle, put=__set__stretchableObstacle))  _stretchableObstacle;

constexpr void __set__stretchableObstacle(GlobalNamespace::StretchableObstacle value) ;

constexpr GlobalNamespace::StretchableObstacle __get__stretchableObstacle() const;

 float_t __declspec(property(get=__get__endDistanceOffset, put=__set__endDistanceOffset))  _endDistanceOffset;

constexpr void __set__endDistanceOffset(float_t value) ;

constexpr float_t __get__endDistanceOffset() const;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__visualWrappers, put=__set__visualWrappers))  _visualWrappers;

constexpr void __set__visualWrappers(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__visualWrappers() const;

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSyncController() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 System::Action_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get_finishedMovementEvent, put=__set_finishedMovementEvent))  finishedMovementEvent;

constexpr void __set_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleController> __get_finishedMovementEvent() const;

 System::Action_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get_passedThreeQuartersOfMove2Event, put=__set_passedThreeQuartersOfMove2Event))  passedThreeQuartersOfMove2Event;

constexpr void __set_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleController> __get_passedThreeQuartersOfMove2Event() const;

 System::Action_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get_passedAvoidedMarkEvent, put=__set_passedAvoidedMarkEvent))  passedAvoidedMarkEvent;

constexpr void __set_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleController> __get_passedAvoidedMarkEvent() const;

 System::Action_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get_didDissolveEvent, put=__set_didDissolveEvent))  didDissolveEvent;

constexpr void __set_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleController> __get_didDissolveEvent() const;

 System::Action_2<GlobalNamespace::ObstacleController,float_t> __declspec(property(get=__get_didUpdateProgress, put=__set_didUpdateProgress))  didUpdateProgress;

constexpr void __set_didUpdateProgress(System::Action_2<GlobalNamespace::ObstacleController,float_t> value) ;

constexpr System::Action_2<GlobalNamespace::ObstacleController,float_t> __get_didUpdateProgress() const;

/// @brief Field kAvoidMarkTimeOffset offset 0
static constexpr float_t  kAvoidMarkTimeOffset{0.15};

 float_t __declspec(property(get=__get__width, put=__set__width))  _width;

constexpr void __set__width(float_t value) ;

constexpr float_t __get__width() const;

 float_t __declspec(property(get=__get__height, put=__set__height))  _height;

constexpr void __set__height(float_t value) ;

constexpr float_t __get__height() const;

 float_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(float_t value) ;

constexpr float_t __get__length() const;

 UnityEngine::Vector3 __declspec(property(get=__get__startPos, put=__set__startPos))  _startPos;

constexpr void __set__startPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__startPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__midPos, put=__set__midPos))  _midPos;

constexpr void __set__midPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__midPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__endPos, put=__set__endPos))  _endPos;

constexpr void __set__endPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__endPos() const;

 float_t __declspec(property(get=__get__move1Duration, put=__set__move1Duration))  _move1Duration;

constexpr void __set__move1Duration(float_t value) ;

constexpr float_t __get__move1Duration() const;

 float_t __declspec(property(get=__get__move2Duration, put=__set__move2Duration))  _move2Duration;

constexpr void __set__move2Duration(float_t value) ;

constexpr float_t __get__move2Duration() const;

 float_t __declspec(property(get=__get__startTimeOffset, put=__set__startTimeOffset))  _startTimeOffset;

constexpr void __set__startTimeOffset(float_t value) ;

constexpr float_t __get__startTimeOffset() const;

 float_t __declspec(property(get=__get__obstacleDuration, put=__set__obstacleDuration))  _obstacleDuration;

constexpr void __set__obstacleDuration(float_t value) ;

constexpr float_t __get__obstacleDuration() const;

 bool __declspec(property(get=__get__passedThreeQuartersOfMove2Reported, put=__set__passedThreeQuartersOfMove2Reported))  _passedThreeQuartersOfMove2Reported;

constexpr void __set__passedThreeQuartersOfMove2Reported(bool value) ;

constexpr bool __get__passedThreeQuartersOfMove2Reported() const;

 bool __declspec(property(get=__get__passedAvoidedMarkReported, put=__set__passedAvoidedMarkReported))  _passedAvoidedMarkReported;

constexpr void __set__passedAvoidedMarkReported(bool value) ;

constexpr bool __get__passedAvoidedMarkReported() const;

 float_t __declspec(property(get=__get__passedAvoidedMarkTime, put=__set__passedAvoidedMarkTime))  _passedAvoidedMarkTime;

constexpr void __set__passedAvoidedMarkTime(float_t value) ;

constexpr float_t __get__passedAvoidedMarkTime() const;

 float_t __declspec(property(get=__get__finishMovementTime, put=__set__finishMovementTime))  _finishMovementTime;

constexpr void __set__finishMovementTime(float_t value) ;

constexpr float_t __get__finishMovementTime() const;

 UnityEngine::Bounds __declspec(property(get=__get__bounds, put=__set__bounds))  _bounds;

constexpr void __set__bounds(UnityEngine::Bounds value) ;

constexpr UnityEngine::Bounds __get__bounds() const;

 bool __declspec(property(get=__get__dissolving, put=__set__dissolving))  _dissolving;

constexpr void __set__dissolving(bool value) ;

constexpr bool __get__dissolving() const;

 GlobalNamespace::ObstacleData __declspec(property(get=__get__obstacleData, put=__set__obstacleData))  _obstacleData;

constexpr void __set__obstacleData(GlobalNamespace::ObstacleData value) ;

constexpr GlobalNamespace::ObstacleData __get__obstacleData() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 UnityEngine::Quaternion __declspec(property(get=__get__worldRotation, put=__set__worldRotation))  _worldRotation;

constexpr void __set__worldRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__worldRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get__inverseWorldRotation, put=__set__inverseWorldRotation))  _inverseWorldRotation;

constexpr void __set__inverseWorldRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__inverseWorldRotation() const;


// Properties

 UnityEngine::Bounds __declspec(property(get=get_bounds))  bounds;

 GlobalNamespace::ObstacleData __declspec(property(get=get_obstacleData))  obstacleData;

 bool __declspec(property(get=get_hasPassedAvoidedMark))  hasPassedAvoidedMark;

 float_t __declspec(property(get=get_move1Duration))  move1Duration;

 float_t __declspec(property(get=get_move2Duration))  move2Duration;

 float_t __declspec(property(get=get_width))  width;

 float_t __declspec(property(get=get_height))  height;

 float_t __declspec(property(get=get_length))  length;

 UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method add_finishedMovementEvent addr 0x2244aa0 size 0xb0 virtual false final false
 void add_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method remove_finishedMovementEvent addr 0x2244b50 size 0xb0 virtual false final false
 void remove_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method add_passedThreeQuartersOfMove2Event addr 0x2244c00 size 0xb0 virtual false final false
 void add_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method remove_passedThreeQuartersOfMove2Event addr 0x2244cb0 size 0xb0 virtual false final false
 void remove_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method add_passedAvoidedMarkEvent addr 0x2244d60 size 0xb0 virtual false final false
 void add_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method remove_passedAvoidedMarkEvent addr 0x2244e10 size 0xb0 virtual false final false
 void remove_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method add_didDissolveEvent addr 0x2244ec0 size 0xb0 virtual false final false
 void add_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method remove_didDissolveEvent addr 0x2244f70 size 0xb0 virtual false final false
 void remove_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method add_didUpdateProgress addr 0x2245020 size 0xb0 virtual false final false
 void add_didUpdateProgress(System::Action_2<GlobalNamespace::ObstacleController,float_t> value) ;

/// @brief Method remove_didUpdateProgress addr 0x22450d0 size 0xb0 virtual false final false
 void remove_didUpdateProgress(System::Action_2<GlobalNamespace::ObstacleController,float_t> value) ;

/// @brief Method get_bounds addr 0x2245180 size 0x14 virtual false final false
 UnityEngine::Bounds get_bounds() ;

/// @brief Method get_obstacleData addr 0x2245194 size 0x8 virtual false final false
 GlobalNamespace::ObstacleData get_obstacleData() ;

/// @brief Method get_hasPassedAvoidedMark addr 0x224519c size 0x8 virtual false final false
 bool get_hasPassedAvoidedMark() ;

/// @brief Method get_move1Duration addr 0x22451a4 size 0x8 virtual false final false
 float_t get_move1Duration() ;

/// @brief Method get_move2Duration addr 0x22451ac size 0x8 virtual false final false
 float_t get_move2Duration() ;

/// @brief Method get_width addr 0x22451b4 size 0x8 virtual false final false
 float_t get_width() ;

/// @brief Method get_height addr 0x22451bc size 0x8 virtual false final false
 float_t get_height() ;

/// @brief Method get_length addr 0x22451c4 size 0x8 virtual false final false
 float_t get_length() ;

/// @brief Method get_color addr 0x22451cc size 0xc virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method Init addr 0x22451d8 size 0x2d4 virtual true final false
 void Init(GlobalNamespace::ObstacleData obstacleData, float_t worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 midPos, UnityEngine::Vector3 endPos, float_t move1Duration, float_t move2Duration, float_t singleLineWidth, float_t height) ;

/// @brief Method Update addr 0x22454ac size 0xc virtual false final false
 void Update() ;

/// @brief Method ManualUpdate addr 0x22454b8 size 0x1ec virtual true final false
 void ManualUpdate() ;

/// @brief Method GetPosForTime addr 0x22456a4 size 0x124 virtual false final false
 UnityEngine::Vector3 GetPosForTime(float_t time) ;

/// @brief Method DissolveCoroutine addr 0x22457c8 size 0x78 virtual false final false
 System::Collections::IEnumerator DissolveCoroutine(float_t duration) ;

/// @brief Method Dissolve addr 0x2245868 size 0x38 virtual true final true
 void Dissolve(float_t duration) ;

/// @brief Method Hide addr 0x22458a0 size 0x6c virtual true final true
 void Hide(bool hide) ;

/// @brief Method Pause addr 0x224590c size 0x10 virtual true final true
 void Pause(bool pause) ;

// Ctor Parameters []
explicit ObstacleController() ;

/// @brief Method .ctor addr 0x224591c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4908)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 356 }), TypeDefinitionIndex(TypeDefinitionIndex(10992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4906))
// CS Name: ObstacleController::Pool
class CORDL_TYPE GlobalNamespace__ObstacleController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::ObstacleController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__ObstacleController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ObstacleController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ObstacleController__Pool(GlobalNamespace__ObstacleController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ObstacleController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ObstacleController__Pool(GlobalNamespace__ObstacleController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ObstacleController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::ObstacleController>(ptr) {
}


  constexpr GlobalNamespace__ObstacleController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ObstacleController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ObstacleController__Pool& operator=(GlobalNamespace__ObstacleController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__ObstacleController__Pool& operator=(GlobalNamespace__ObstacleController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__ObstacleController__Pool() ;

/// @brief Method .ctor addr 0x224592c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DissolveCoroutine>d__65
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4907))
// CS Name: ObstacleController::<DissolveCoroutine>d__65
class CORDL_TYPE GlobalNamespace__ObstacleController___DissolveCoroutine_d__65 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__ObstacleController___DissolveCoroutine_d__65() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ObstacleController___DissolveCoroutine_d__65", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ObstacleController___DissolveCoroutine_d__65(GlobalNamespace__ObstacleController___DissolveCoroutine_d__65 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ObstacleController___DissolveCoroutine_d__65", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ObstacleController___DissolveCoroutine_d__65(GlobalNamespace__ObstacleController___DissolveCoroutine_d__65&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ObstacleController___DissolveCoroutine_d__65(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ObstacleController___DissolveCoroutine_d__65& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ObstacleController___DissolveCoroutine_d__65& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ObstacleController___DissolveCoroutine_d__65& operator=(GlobalNamespace__ObstacleController___DissolveCoroutine_d__65&& o) noexcept = default;
  constexpr GlobalNamespace__ObstacleController___DissolveCoroutine_d__65& operator=(GlobalNamespace__ObstacleController___DissolveCoroutine_d__65 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::ObstacleController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::ObstacleController value) ;

constexpr GlobalNamespace::ObstacleController __get___4__this() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__ObstacleController___DissolveCoroutine_d__65(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2245840 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2245974 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2245978 size 0xe8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2245a60 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2245a68 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2245aa8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ObstacleController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ObstacleController__Pool, "", "ObstacleController/Pool");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ObstacleController___DissolveCoroutine_d__65);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ObstacleController___DissolveCoroutine_d__65, "", "ObstacleController/<DissolveCoroutine>d__65");
NEED_NO_BOX(GlobalNamespace::ObstacleController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleController, "", "ObstacleController");
