#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Fovf;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Media__PlatformCameraMode;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20;
}
namespace GlobalNamespace {
class OVRSpectatorModeDomeTest;
}
// Type: ::<TimerCoroutine>d__20
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8969))
// CS Name: OVRSpectatorModeDomeTest::<TimerCoroutine>d__20
class CORDL_TYPE GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20(GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20(GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20& operator=(GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20& operator=(GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRSpectatorModeDomeTest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRSpectatorModeDomeTest value) ;

constexpr GlobalNamespace::OVRSpectatorModeDomeTest __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x263587c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2635a48 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2635a4c size 0xb4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2635b00 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2635b08 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2635b48 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSpectatorModeDomeTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8970))
// CS Name: OVRSpectatorModeDomeTest
class CORDL_TYPE OVRSpectatorModeDomeTest : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _TimerCoroutine_d__20 = GlobalNamespace::GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~OVRSpectatorModeDomeTest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpectatorModeDomeTest", modifiers: " const&", def_value: None }]
constexpr OVRSpectatorModeDomeTest(OVRSpectatorModeDomeTest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpectatorModeDomeTest", modifiers: "&&", def_value: None }]
constexpr OVRSpectatorModeDomeTest(OVRSpectatorModeDomeTest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSpectatorModeDomeTest(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSpectatorModeDomeTest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSpectatorModeDomeTest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSpectatorModeDomeTest& operator=(OVRSpectatorModeDomeTest&& o) noexcept = default;
  constexpr OVRSpectatorModeDomeTest& operator=(OVRSpectatorModeDomeTest const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_inited, put=__set_inited))  inited;

constexpr void __set_inited(bool value) ;

constexpr bool __get_inited() const;

 UnityEngine::Camera __declspec(property(get=__get_defaultExternalCamera, put=__set_defaultExternalCamera))  defaultExternalCamera;

constexpr void __set_defaultExternalCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get_defaultExternalCamera() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Fovf __declspec(property(get=__get_defaultFov, put=__set_defaultFov))  defaultFov;

constexpr void __set_defaultFov(GlobalNamespace::GlobalNamespace__OVRPlugin__Fovf value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__Fovf __get_defaultFov() const;

 UnityEngine::Transform __declspec(property(get=__get_SpectatorAnchor, put=__set_SpectatorAnchor))  SpectatorAnchor;

constexpr void __set_SpectatorAnchor(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_SpectatorAnchor() const;

 UnityEngine::Transform __declspec(property(get=__get_Head, put=__set_Head))  Head;

constexpr void __set_Head(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_Head() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Media__PlatformCameraMode __declspec(property(get=__get_camMode, put=__set_camMode))  camMode;

constexpr void __set_camMode(GlobalNamespace::GlobalNamespace__OVRPlugin__Media__PlatformCameraMode value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__Media__PlatformCameraMode __get_camMode() const;

 bool __declspec(property(get=__get_readyToSwitch, put=__set_readyToSwitch))  readyToSwitch;

constexpr void __set_readyToSwitch(bool value) ;

constexpr bool __get_readyToSwitch() const;

 UnityEngine::Transform __declspec(property(get=__get_SpectatorCamera, put=__set_SpectatorCamera))  SpectatorCamera;

constexpr void __set_SpectatorCamera(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_SpectatorCamera() const;

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 float_t __declspec(property(get=__get_elevation, put=__set_elevation))  elevation;

constexpr void __set_elevation(float_t value) ;

constexpr float_t __get_elevation() const;

 float_t __declspec(property(get=__get_polar, put=__set_polar))  polar;

constexpr void __set_polar(float_t value) ;

constexpr float_t __get_polar() const;

/// @brief Field distance_near offset 0
static constexpr float_t  distance_near{0.5};

/// @brief Field distance_far offset 0
static constexpr float_t  distance_far{1.2};

/// @brief Field elevationLimit offset 0
static constexpr float_t  elevationLimit{30};


// Methods

/// @brief Method Awake addr 0x2634ce0 size 0x3c virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2634d1c size 0xb0 virtual false final false
 void Start() ;

/// @brief Method Initialize addr 0x2634dcc size 0x228 virtual false final false
 void Initialize() ;

/// @brief Method UpdateDefaultExternalCamera addr 0x2634ff4 size 0x428 virtual false final false
 void UpdateDefaultExternalCamera() ;

/// @brief Method UpdateSpectatorCameraStatus addr 0x263541c size 0x364 virtual false final false
 void UpdateSpectatorCameraStatus() ;

/// @brief Method SpectatorCameraDomePosition addr 0x26357e8 size 0x94 virtual false final false
 UnityEngine::Vector3 SpectatorCameraDomePosition(UnityEngine::Vector3 spectatorAnchorPosition, float_t d, float_t e, float_t p) ;

/// @brief Method TimerCoroutine addr 0x2635780 size 0x68 virtual false final false
 System::Collections::IEnumerator TimerCoroutine() ;

/// @brief Method Update addr 0x26358a4 size 0x140 virtual false final false
 void Update() ;

/// @brief Method OnApplicationPause addr 0x26359e4 size 0x20 virtual false final false
 void OnApplicationPause() ;

/// @brief Method OnApplicationQuit addr 0x2635a04 size 0x20 virtual false final false
 void OnApplicationQuit() ;

static GlobalNamespace::OVRSpectatorModeDomeTest New_ctor() ;

/// @brief Method .ctor addr 0x2635a24 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpectatorModeDomeTest___TimerCoroutine_d__20, "", "OVRSpectatorModeDomeTest/<TimerCoroutine>d__20");
NEED_NO_BOX(GlobalNamespace::OVRSpectatorModeDomeTest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSpectatorModeDomeTest, "", "OVRSpectatorModeDomeTest");
