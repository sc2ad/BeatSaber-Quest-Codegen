#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__OVRCursor_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class OVRProgressIndicator;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGazePointer;
}
// Type: ::OVRGazePointer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8887))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8904))
// CS Name: OVRGazePointer
class CORDL_TYPE OVRGazePointer : public GlobalNamespace::OVRCursor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~OVRGazePointer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGazePointer", modifiers: " const&", def_value: None }]
constexpr OVRGazePointer(OVRGazePointer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGazePointer", modifiers: "&&", def_value: None }]
constexpr OVRGazePointer(OVRGazePointer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRGazePointer(void* ptr) noexcept : GlobalNamespace::OVRCursor(ptr) {
}


  constexpr OVRGazePointer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRGazePointer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRGazePointer& operator=(OVRGazePointer&& o) noexcept = default;
  constexpr OVRGazePointer& operator=(OVRGazePointer const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_gazeIcon, put=__set_gazeIcon))  gazeIcon;

constexpr void __set_gazeIcon(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_gazeIcon() const;

 bool __declspec(property(get=__get_hideByDefault, put=__set_hideByDefault))  hideByDefault;

constexpr void __set_hideByDefault(bool value) ;

constexpr bool __get_hideByDefault() const;

 float_t __declspec(property(get=__get_showTimeoutPeriod, put=__set_showTimeoutPeriod))  showTimeoutPeriod;

constexpr void __set_showTimeoutPeriod(float_t value) ;

constexpr float_t __get_showTimeoutPeriod() const;

 float_t __declspec(property(get=__get_hideTimeoutPeriod, put=__set_hideTimeoutPeriod))  hideTimeoutPeriod;

constexpr void __set_hideTimeoutPeriod(float_t value) ;

constexpr float_t __get_hideTimeoutPeriod() const;

 bool __declspec(property(get=__get_dimOnHideRequest, put=__set_dimOnHideRequest))  dimOnHideRequest;

constexpr void __set_dimOnHideRequest(bool value) ;

constexpr bool __get_dimOnHideRequest() const;

 float_t __declspec(property(get=__get_depthScaleMultiplier, put=__set_depthScaleMultiplier))  depthScaleMultiplier;

constexpr void __set_depthScaleMultiplier(float_t value) ;

constexpr float_t __get_depthScaleMultiplier() const;

 bool __declspec(property(get=__get_matchNormalOnPhysicsColliders, put=__set_matchNormalOnPhysicsColliders))  matchNormalOnPhysicsColliders;

constexpr void __set_matchNormalOnPhysicsColliders(bool value) ;

constexpr bool __get_matchNormalOnPhysicsColliders() const;

 UnityEngine::Transform __declspec(property(get=__get_rayTransform, put=__set_rayTransform))  rayTransform;

constexpr void __set_rayTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rayTransform() const;

 bool __declspec(property(get=__get__hidden_k__BackingField, put=__set__hidden_k__BackingField))  _hidden_k__BackingField;

constexpr void __set__hidden_k__BackingField(bool value) ;

constexpr bool __get__hidden_k__BackingField() const;

 float_t __declspec(property(get=__get__currentScale_k__BackingField, put=__set__currentScale_k__BackingField))  _currentScale_k__BackingField;

constexpr void __set__currentScale_k__BackingField(float_t value) ;

constexpr float_t __get__currentScale_k__BackingField() const;

 float_t __declspec(property(get=__get_depth, put=__set_depth))  depth;

constexpr void __set_depth(float_t value) ;

constexpr float_t __get_depth() const;

 float_t __declspec(property(get=__get_hideUntilTime, put=__set_hideUntilTime))  hideUntilTime;

constexpr void __set_hideUntilTime(float_t value) ;

constexpr float_t __get_hideUntilTime() const;

 int32_t __declspec(property(get=__get_positionSetsThisFrame, put=__set_positionSetsThisFrame))  positionSetsThisFrame;

constexpr void __set_positionSetsThisFrame(int32_t value) ;

constexpr int32_t __get_positionSetsThisFrame() const;

 float_t __declspec(property(get=__get_lastShowRequestTime, put=__set_lastShowRequestTime))  lastShowRequestTime;

constexpr void __set_lastShowRequestTime(float_t value) ;

constexpr float_t __get_lastShowRequestTime() const;

 float_t __declspec(property(get=__get_lastHideRequestTime, put=__set_lastHideRequestTime))  lastHideRequestTime;

constexpr void __set_lastHideRequestTime(float_t value) ;

constexpr float_t __get_lastHideRequestTime() const;

 GlobalNamespace::OVRProgressIndicator __declspec(property(get=__get_progressIndicator, put=__set_progressIndicator))  progressIndicator;

constexpr void __set_progressIndicator(GlobalNamespace::OVRProgressIndicator value) ;

constexpr GlobalNamespace::OVRProgressIndicator __get_progressIndicator() const;

static GlobalNamespace::OVRGazePointer __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(GlobalNamespace::OVRGazePointer value) ;

static GlobalNamespace::OVRGazePointer __get__instance() ;


// Properties

 bool __declspec(property(get=get_hidden, put=set_hidden))  hidden;

 float_t __declspec(property(get=get_currentScale, put=set_currentScale))  currentScale;

static GlobalNamespace::OVRGazePointer __declspec(property(get=get_instance))  instance;

 float_t __declspec(property(get=get_visibilityStrength))  visibilityStrength;

 float_t __declspec(property(get=get_SelectionProgress, put=set_SelectionProgress))  SelectionProgress;


// Methods

/// @brief Method get_hidden addr 0x262055c size 0x8 virtual false final false
 bool get_hidden() ;

/// @brief Method set_hidden addr 0x2620564 size 0xc virtual false final false
 void set_hidden(bool value) ;

/// @brief Method get_currentScale addr 0x2620570 size 0x8 virtual false final false
 float_t get_currentScale() ;

/// @brief Method set_currentScale addr 0x2620578 size 0x8 virtual false final false
 void set_currentScale(float_t value) ;

/// @brief Method get_instance addr 0x2620580 size 0x214 virtual false final false
static GlobalNamespace::OVRGazePointer get_instance() ;

/// @brief Method get_visibilityStrength addr 0x2620794 size 0x9c virtual false final false
 float_t get_visibilityStrength() ;

/// @brief Method get_SelectionProgress addr 0x2620830 size 0x78 virtual false final false
 float_t get_SelectionProgress() ;

/// @brief Method set_SelectionProgress addr 0x26208a8 size 0x80 virtual false final false
 void set_SelectionProgress(float_t value) ;

/// @brief Method Awake addr 0x2620928 size 0x170 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x2620a98 size 0x194 virtual false final false
 void Update() ;

/// @brief Method SetCursorStartDest addr 0x2620e60 size 0x1e0 virtual true final false
 void SetCursorStartDest(UnityEngine::Vector3 _, UnityEngine::Vector3 pos, UnityEngine::Vector3 normal) ;

/// @brief Method SetCursorRay addr 0x2621060 size 0x4 virtual true final false
 void SetCursorRay(UnityEngine::Transform ray) ;

/// @brief Method LateUpdate addr 0x2621064 size 0x178 virtual false final false
 void LateUpdate() ;

/// @brief Method RequestHide addr 0x26211dc size 0x2c virtual false final false
 void RequestHide() ;

/// @brief Method RequestShow addr 0x2621040 size 0x20 virtual false final false
 void RequestShow() ;

/// @brief Method Hide addr 0x2620c2c size 0x11c virtual false final false
 void Hide() ;

/// @brief Method Show addr 0x2620d48 size 0x118 virtual false final false
 void Show() ;

static GlobalNamespace::OVRGazePointer New_ctor() ;

/// @brief Method .ctor addr 0x2621208 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRGazePointer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGazePointer, "", "OVRGazePointer");
