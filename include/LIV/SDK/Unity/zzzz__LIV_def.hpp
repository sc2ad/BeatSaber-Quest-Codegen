#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections {
class IEnumerator;
}
namespace LIV::SDK::Unity {
class SDKRender;
}
namespace UnityEngine {
struct LayerMask;
}
namespace LIV::SDK::Unity {
struct INVALIDATION_FLAGS;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class LIV;
}
namespace LIV::SDK::Unity {
class LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68;
}
// Type: ::<WaitForUnityEndOfFrame>d__68
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15141))
// CS Name: LIV.SDK.Unity.LIV::<WaitForUnityEndOfFrame>d__68
class CORDL_TYPE LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68() = default;

// Ctor Parameters [CppParam { name: "", ty: "LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68", modifiers: " const&", def_value: None }]
constexpr LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68(LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68", modifiers: "&&", def_value: None }]
constexpr LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68(LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68& operator=(LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68&& o) noexcept = default;
  constexpr LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68& operator=(LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 LIV::SDK::Unity::LIV __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(LIV::SDK::Unity::LIV value) ;

constexpr LIV::SDK::Unity::LIV __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68(int32_t __1__state) ;

/// @brief Method .ctor addr 0x209b6d4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x209c0b4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x209c0b8 size 0xd0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x209c24c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x209c254 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x209c294 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
// Type: LIV.SDK.Unity::LIV
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15142))
// CS Name: LIV.SDK.Unity.LIV
class CORDL_TYPE LIV : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _WaitForUnityEndOfFrame_d__68 = LIV::SDK::Unity::LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~LIV() = default;

// Ctor Parameters [CppParam { name: "", ty: "LIV", modifiers: " const&", def_value: None }]
constexpr LIV(LIV const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LIV", modifiers: "&&", def_value: None }]
constexpr LIV(LIV&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LIV(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LIV& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LIV& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LIV& operator=(LIV&& o) noexcept = default;
  constexpr LIV& operator=(LIV const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_onActivate, put=__set_onActivate))  onActivate;

constexpr void __set_onActivate(System::Action value) ;

constexpr System::Action __get_onActivate() const;

 System::Action_1<LIV::SDK::Unity::SDKRender> __declspec(property(get=__get_onPreRender, put=__set_onPreRender))  onPreRender;

constexpr void __set_onPreRender(System::Action_1<LIV::SDK::Unity::SDKRender> value) ;

constexpr System::Action_1<LIV::SDK::Unity::SDKRender> __get_onPreRender() const;

 System::Action_1<LIV::SDK::Unity::SDKRender> __declspec(property(get=__get_onPreRenderBackground, put=__set_onPreRenderBackground))  onPreRenderBackground;

constexpr void __set_onPreRenderBackground(System::Action_1<LIV::SDK::Unity::SDKRender> value) ;

constexpr System::Action_1<LIV::SDK::Unity::SDKRender> __get_onPreRenderBackground() const;

 System::Action_1<LIV::SDK::Unity::SDKRender> __declspec(property(get=__get_onPostRenderBackground, put=__set_onPostRenderBackground))  onPostRenderBackground;

constexpr void __set_onPostRenderBackground(System::Action_1<LIV::SDK::Unity::SDKRender> value) ;

constexpr System::Action_1<LIV::SDK::Unity::SDKRender> __get_onPostRenderBackground() const;

 System::Action_1<LIV::SDK::Unity::SDKRender> __declspec(property(get=__get_onPreRenderForeground, put=__set_onPreRenderForeground))  onPreRenderForeground;

constexpr void __set_onPreRenderForeground(System::Action_1<LIV::SDK::Unity::SDKRender> value) ;

constexpr System::Action_1<LIV::SDK::Unity::SDKRender> __get_onPreRenderForeground() const;

 System::Action_1<LIV::SDK::Unity::SDKRender> __declspec(property(get=__get_onPostRenderForeground, put=__set_onPostRenderForeground))  onPostRenderForeground;

constexpr void __set_onPostRenderForeground(System::Action_1<LIV::SDK::Unity::SDKRender> value) ;

constexpr System::Action_1<LIV::SDK::Unity::SDKRender> __get_onPostRenderForeground() const;

 System::Action_1<LIV::SDK::Unity::SDKRender> __declspec(property(get=__get_onPostRender, put=__set_onPostRender))  onPostRender;

constexpr void __set_onPostRender(System::Action_1<LIV::SDK::Unity::SDKRender> value) ;

constexpr System::Action_1<LIV::SDK::Unity::SDKRender> __get_onPostRender() const;

 System::Action __declspec(property(get=__get_onDeactivate, put=__set_onDeactivate))  onDeactivate;

constexpr void __set_onDeactivate(System::Action value) ;

constexpr System::Action __get_onDeactivate() const;

 UnityEngine::Transform __declspec(property(get=__get__stage, put=__set__stage))  _stage;

constexpr void __set__stage(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__stage() const;

 UnityEngine::Transform __declspec(property(get=__get__stageTransform, put=__set__stageTransform))  _stageTransform;

constexpr void __set__stageTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__stageTransform() const;

 UnityEngine::Camera __declspec(property(get=__get__HMDCamera, put=__set__HMDCamera))  _HMDCamera;

constexpr void __set__HMDCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__HMDCamera() const;

 UnityEngine::Camera __declspec(property(get=__get__MRCameraPrefab, put=__set__MRCameraPrefab))  _MRCameraPrefab;

constexpr void __set__MRCameraPrefab(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__MRCameraPrefab() const;

 bool __declspec(property(get=__get__disableStandardAssets, put=__set__disableStandardAssets))  _disableStandardAssets;

constexpr void __set__disableStandardAssets(bool value) ;

constexpr bool __get__disableStandardAssets() const;

 UnityEngine::LayerMask __declspec(property(get=__get__spectatorLayerMask, put=__set__spectatorLayerMask))  _spectatorLayerMask;

constexpr void __set__spectatorLayerMask(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get__spectatorLayerMask() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__excludeBehaviours, put=__set__excludeBehaviours))  _excludeBehaviours;

constexpr void __set__excludeBehaviours(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__excludeBehaviours() const;

 bool __declspec(property(get=__get__fixPostEffectsAlpha, put=__set__fixPostEffectsAlpha))  _fixPostEffectsAlpha;

constexpr void __set__fixPostEffectsAlpha(bool value) ;

constexpr bool __get__fixPostEffectsAlpha() const;

 bool __declspec(property(get=__get__isActive, put=__set__isActive))  _isActive;

constexpr void __set__isActive(bool value) ;

constexpr bool __get__isActive() const;

 LIV::SDK::Unity::SDKRender __declspec(property(get=__get__render, put=__set__render))  _render;

constexpr void __set__render(LIV::SDK::Unity::SDKRender value) ;

constexpr LIV::SDK::Unity::SDKRender __get__render() const;

 bool __declspec(property(get=__get__wasReady, put=__set__wasReady))  _wasReady;

constexpr void __set__wasReady(bool value) ;

constexpr bool __get__wasReady() const;

 LIV::SDK::Unity::INVALIDATION_FLAGS __declspec(property(get=__get__invalidate, put=__set__invalidate))  _invalidate;

constexpr void __set__invalidate(LIV::SDK::Unity::INVALIDATION_FLAGS value) ;

constexpr LIV::SDK::Unity::INVALIDATION_FLAGS __get__invalidate() const;

 UnityEngine::Transform __declspec(property(get=__get__stageCandidate, put=__set__stageCandidate))  _stageCandidate;

constexpr void __set__stageCandidate(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__stageCandidate() const;

 UnityEngine::Camera __declspec(property(get=__get__HMDCameraCandidate, put=__set__HMDCameraCandidate))  _HMDCameraCandidate;

constexpr void __set__HMDCameraCandidate(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__HMDCameraCandidate() const;

 UnityEngine::Camera __declspec(property(get=__get__MRCameraPrefabCandidate, put=__set__MRCameraPrefabCandidate))  _MRCameraPrefabCandidate;

constexpr void __set__MRCameraPrefabCandidate(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__MRCameraPrefabCandidate() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__excludeBehavioursCandidate, put=__set__excludeBehavioursCandidate))  _excludeBehavioursCandidate;

constexpr void __set__excludeBehavioursCandidate(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__excludeBehavioursCandidate() const;

 bool __declspec(property(get=__get__enabled, put=__set__enabled))  _enabled;

constexpr void __set__enabled(bool value) ;

constexpr bool __get__enabled() const;

 UnityEngine::Coroutine __declspec(property(get=__get__waitForEndOfFrameCoroutine, put=__set__waitForEndOfFrameCoroutine))  _waitForEndOfFrameCoroutine;

constexpr void __set__waitForEndOfFrameCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get__waitForEndOfFrameCoroutine() const;


// Properties

 UnityEngine::Transform __declspec(property(get=get_stage, put=set_stage))  stage;

 UnityEngine::Transform __declspec(property(get=get_trackedSpaceOrigin, put=set_trackedSpaceOrigin))  trackedSpaceOrigin;

 UnityEngine::Matrix4x4 __declspec(property(get=get_stageLocalToWorldMatrix))  stageLocalToWorldMatrix;

 UnityEngine::Matrix4x4 __declspec(property(get=get_stageWorldToLocalMatrix))  stageWorldToLocalMatrix;

 UnityEngine::Transform __declspec(property(get=get_stageTransform, put=set_stageTransform))  stageTransform;

 UnityEngine::Camera __declspec(property(get=get_HMDCamera, put=set_HMDCamera))  HMDCamera;

 UnityEngine::Camera __declspec(property(get=get_MRCameraPrefab, put=set_MRCameraPrefab))  MRCameraPrefab;

 bool __declspec(property(get=get_disableStandardAssets, put=set_disableStandardAssets))  disableStandardAssets;

 UnityEngine::LayerMask __declspec(property(get=get_spectatorLayerMask, put=set_spectatorLayerMask))  spectatorLayerMask;

 ::ArrayW<::StringW> __declspec(property(get=get_excludeBehaviours, put=set_excludeBehaviours))  excludeBehaviours;

 bool __declspec(property(get=get_fixPostEffectsAlpha, put=set_fixPostEffectsAlpha))  fixPostEffectsAlpha;

 bool __declspec(property(get=get_isValid))  isValid;

 bool __declspec(property(get=get_isActive))  isActive;

 bool __declspec(property(get=get__isReady))  _isReady;

 LIV::SDK::Unity::SDKRender __declspec(property(get=get_render))  render;


// Methods

/// @brief Method get_stage addr 0x209ae58 size 0x90 virtual false final false
 UnityEngine::Transform get_stage() ;

/// @brief Method set_stage addr 0x209aee8 size 0x90 virtual false final false
 void set_stage(UnityEngine::Transform value) ;

/// @brief Method get_trackedSpaceOrigin addr 0x209af8c size 0x4 virtual false final false
 UnityEngine::Transform get_trackedSpaceOrigin() ;

/// @brief Method set_trackedSpaceOrigin addr 0x209af90 size 0x4 virtual false final false
 void set_trackedSpaceOrigin(UnityEngine::Transform value) ;

/// @brief Method get_stageLocalToWorldMatrix addr 0x209af94 size 0xf8 virtual false final false
 UnityEngine::Matrix4x4 get_stageLocalToWorldMatrix() ;

/// @brief Method get_stageWorldToLocalMatrix addr 0x209b08c size 0xf8 virtual false final false
 UnityEngine::Matrix4x4 get_stageWorldToLocalMatrix() ;

/// @brief Method get_stageTransform addr 0x209b184 size 0x8 virtual false final false
 UnityEngine::Transform get_stageTransform() ;

/// @brief Method set_stageTransform addr 0x209b18c size 0x8 virtual false final false
 void set_stageTransform(UnityEngine::Transform value) ;

/// @brief Method get_HMDCamera addr 0x209b194 size 0x8 virtual false final false
 UnityEngine::Camera get_HMDCamera() ;

/// @brief Method set_HMDCamera addr 0x209b19c size 0xec virtual false final false
 void set_HMDCamera(UnityEngine::Camera value) ;

/// @brief Method get_MRCameraPrefab addr 0x209b288 size 0x8 virtual false final false
 UnityEngine::Camera get_MRCameraPrefab() ;

/// @brief Method set_MRCameraPrefab addr 0x209b290 size 0x84 virtual false final false
 void set_MRCameraPrefab(UnityEngine::Camera value) ;

/// @brief Method get_disableStandardAssets addr 0x209b314 size 0x8 virtual false final false
 bool get_disableStandardAssets() ;

/// @brief Method set_disableStandardAssets addr 0x209b31c size 0xc virtual false final false
 void set_disableStandardAssets(bool value) ;

/// @brief Method get_spectatorLayerMask addr 0x209b328 size 0x8 virtual false final false
 UnityEngine::LayerMask get_spectatorLayerMask() ;

/// @brief Method set_spectatorLayerMask addr 0x209b330 size 0x8 virtual false final false
 void set_spectatorLayerMask(UnityEngine::LayerMask value) ;

/// @brief Method get_excludeBehaviours addr 0x209b338 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_excludeBehaviours() ;

/// @brief Method set_excludeBehaviours addr 0x209b340 size 0x20 virtual false final false
 void set_excludeBehaviours(::ArrayW<::StringW> value) ;

/// @brief Method get_fixPostEffectsAlpha addr 0x209b360 size 0x8 virtual false final false
 bool get_fixPostEffectsAlpha() ;

/// @brief Method set_fixPostEffectsAlpha addr 0x209b368 size 0xc virtual false final false
 void set_fixPostEffectsAlpha(bool value) ;

/// @brief Method get_isValid addr 0x209b374 size 0xf4 virtual false final false
 bool get_isValid() ;

/// @brief Method get_isActive addr 0x209b468 size 0x8 virtual false final false
 bool get_isActive() ;

/// @brief Method get__isReady addr 0x209b470 size 0x74 virtual false final false
 bool get__isReady() ;

/// @brief Method get_render addr 0x209b57c size 0x8 virtual false final false
 LIV::SDK::Unity::SDKRender get_render() ;

/// @brief Method OnEnable addr 0x209b584 size 0xc virtual false final false
 void OnEnable() ;

/// @brief Method Update addr 0x209b5d4 size 0x18 virtual false final false
 void Update() ;

/// @brief Method OnDisable addr 0x209b664 size 0x8 virtual false final false
 void OnDisable() ;

/// @brief Method WaitForUnityEndOfFrame addr 0x209b66c size 0x68 virtual false final false
 System::Collections::IEnumerator WaitForUnityEndOfFrame() ;

/// @brief Method Activate addr 0x209b6fc size 0x18 virtual false final false
 void Activate() ;

/// @brief Method UpdateSDKReady addr 0x209b590 size 0x44 virtual false final false
 void UpdateSDKReady() ;

/// @brief Method OnSDKReadyChanged addr 0x209b714 size 0xc virtual false final false
 void OnSDKReadyChanged(bool value) ;

/// @brief Method OnSDKActivate addr 0x209b720 size 0xac virtual false final false
 void OnSDKActivate() ;

/// @brief Method OnSDKDeactivate addr 0x209b7cc size 0xb4 virtual false final false
 void OnSDKDeactivate() ;

/// @brief Method CreateAssets addr 0x209b9cc size 0x70 virtual false final false
 void CreateAssets() ;

/// @brief Method DestroyAssets addr 0x209baa4 size 0x20 virtual false final false
 void DestroyAssets() ;

/// @brief Method StartRenderCoroutine addr 0x209ba3c size 0x44 virtual false final false
 void StartRenderCoroutine() ;

/// @brief Method StopRenderCoroutine addr 0x209ba80 size 0x24 virtual false final false
 void StopRenderCoroutine() ;

/// @brief Method SubmitSDKOutput addr 0x209b880 size 0x14c virtual false final false
 void SubmitSDKOutput() ;

/// @brief Method Invalidate addr 0x209b5ec size 0x78 virtual false final false
 void Invalidate() ;

// Ctor Parameters []
explicit LIV() ;

/// @brief Method .ctor addr 0x209bef4 size 0x1c0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
NEED_NO_BOX(LIV::SDK::Unity::LIV);
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::LIV, "LIV.SDK.Unity", "LIV");
NEED_NO_BOX(LIV::SDK::Unity::LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68);
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::LIV__SDK__Unity__LIV___WaitForUnityEndOfFrame_d__68, "LIV.SDK.Unity", "LIV/<WaitForUnityEndOfFrame>d__68");
