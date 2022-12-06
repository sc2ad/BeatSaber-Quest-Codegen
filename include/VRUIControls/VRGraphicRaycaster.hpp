// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: PhysicsRaycasterWithCache
  class PhysicsRaycasterWithCache;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRGraphicRaycaster
  class VRGraphicRaycaster;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VRUIControls::VRGraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRGraphicRaycaster*, "VRUIControls", "VRGraphicRaycaster");
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.VRGraphicRaycaster
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 11091E4
  class VRGraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
    public:
    // Nested type: ::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult
    struct VRGraphicRaycastResult;
    // Nested type: ::VRUIControls::VRGraphicRaycaster::$$c
    class $$c;
    // Size: 0x20
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: VRUIControls.VRGraphicRaycaster/VRUIControls.VRGraphicRaycastResult
    // [TokenAttribute] Offset: FFFFFFFF
    struct VRGraphicRaycastResult/*, public ::System::ValueType*/ {
      public:
      public:
      // public readonly UnityEngine.UI.Graphic graphic
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::UI::Graphic* graphic;
      // Field size check
      static_assert(sizeof(::UnityEngine::UI::Graphic*) == 0x8);
      // public readonly System.Single distance
      // Size: 0x4
      // Offset: 0x8
      float distance;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public readonly UnityEngine.Vector3 position
      // Size: 0xC
      // Offset: 0xC
      ::UnityEngine::Vector3 position;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public readonly UnityEngine.Vector2 insideRootCanvasPosition
      // Size: 0x8
      // Offset: 0x18
      ::UnityEngine::Vector2 insideRootCanvasPosition;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
      public:
      // Creating value type constructor for type: VRGraphicRaycastResult
      constexpr VRGraphicRaycastResult(::UnityEngine::UI::Graphic* graphic_ = {}, float distance_ = {}, ::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Vector2 insideRootCanvasPosition_ = {}) noexcept : graphic{graphic_}, distance{distance_}, position{position_}, insideRootCanvasPosition{insideRootCanvasPosition_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public readonly UnityEngine.UI.Graphic graphic
      [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Graphic*& dyn_graphic();
      // Get instance field reference: public readonly System.Single distance
      [[deprecated("Use field access instead!")]] float& dyn_distance();
      // Get instance field reference: public readonly UnityEngine.Vector3 position
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
      // Get instance field reference: public readonly UnityEngine.Vector2 insideRootCanvasPosition
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_insideRootCanvasPosition();
      // public System.Void .ctor(UnityEngine.UI.Graphic graphic, System.Single distance, UnityEngine.Vector3 position, UnityEngine.Vector2 insideRootCanvasPosition)
      // Offset: 0x2AE8080
      // ABORTED: conflicts with another method.  VRGraphicRaycastResult(::UnityEngine::UI::Graphic* graphic, float distance, ::UnityEngine::Vector3 position, ::UnityEngine::Vector2 insideRootCanvasPosition);
    }; // VRUIControls.VRGraphicRaycaster/VRUIControls.VRGraphicRaycastResult
    #pragma pack(pop)
    static check_size<sizeof(VRGraphicRaycaster::VRGraphicRaycastResult), 24 + sizeof(::UnityEngine::Vector2)> __VRUIControls_VRGraphicRaycaster_VRGraphicRaycastResultSizeCheck;
    static_assert(sizeof(VRGraphicRaycaster::VRGraphicRaycastResult) == 0x20);
    public:
    // private UnityEngine.LayerMask _blockingMask
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::LayerMask blockingMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // Padding between fields: blockingMask and: physicsRaycaster
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0x11092DC
    // private readonly VRUIControls.PhysicsRaycasterWithCache _physicsRaycaster
    // Size: 0x8
    // Offset: 0x28
    ::VRUIControls::PhysicsRaycasterWithCache* physicsRaycaster;
    // Field size check
    static_assert(sizeof(::VRUIControls::PhysicsRaycasterWithCache*) == 0x8);
    // private UnityEngine.Canvas _canvas
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Canvas* canvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    // private readonly System.Collections.Generic.List`1<VRUIControls.VRGraphicRaycaster/VRUIControls.VRGraphicRaycastResult> _raycastResults
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>* raycastResults;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>*) == 0x8);
    // private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    // Size: 0x8
    // Offset: 0x40
    ::HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper;
    // Field size check
    static_assert(sizeof(::HMUI::CurvedCanvasSettingsHelper*) == 0x8);
    public:
    // static field const value: static private System.Single kPhysics3DRaycastDistance
    static constexpr const float kPhysics3DRaycastDistance = 6;
    // Get static field: static private System.Single kPhysics3DRaycastDistance
    static float _get_kPhysics3DRaycastDistance();
    // Set static field: static private System.Single kPhysics3DRaycastDistance
    static void _set_kPhysics3DRaycastDistance(float value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11092EC
    // Get static field: static private readonly System.Single[] _ray2DCircleIntersectionDistances
    static ::ArrayW<float> _get__ray2DCircleIntersectionDistances();
    // Set static field: static private readonly System.Single[] _ray2DCircleIntersectionDistances
    static void _set__ray2DCircleIntersectionDistances(::ArrayW<float> value);
    // Get instance field reference: private UnityEngine.LayerMask _blockingMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn__blockingMask();
    // Get instance field reference: private readonly VRUIControls.PhysicsRaycasterWithCache _physicsRaycaster
    [[deprecated("Use field access instead!")]] ::VRUIControls::PhysicsRaycasterWithCache*& dyn__physicsRaycaster();
    // Get instance field reference: private UnityEngine.Canvas _canvas
    [[deprecated("Use field access instead!")]] ::UnityEngine::Canvas*& dyn__canvas();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<VRUIControls.VRGraphicRaycaster/VRUIControls.VRGraphicRaycastResult> _raycastResults
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>*& dyn__raycastResults();
    // Get instance field reference: private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    [[deprecated("Use field access instead!")]] ::HMUI::CurvedCanvasSettingsHelper*& dyn__curvedCanvasSettingsHelper();
    // public System.Void .ctor()
    // Offset: 0x2AE8094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRGraphicRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VRUIControls::VRGraphicRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRGraphicRaycaster*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2AE8134
    static void _cctor();
    // static private System.Void RaycastCanvas(UnityEngine.Canvas canvas, UnityEngine.Ray ray, System.Single hitDistance, System.Single curvedUIRadius, System.Collections.Generic.List`1<VRUIControls.VRGraphicRaycaster/VRUIControls.VRGraphicRaycastResult> results)
    // Offset: 0x2AE74B4
    static void RaycastCanvas(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, float hitDistance, float curvedUIRadius, ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>* results);
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x2AE6E50
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: UnityEngine.Camera BaseRaycaster::get_eventCamera()
    ::UnityEngine::Camera* get_eventCamera();
    // protected override System.Void OnEnable()
    // Offset: 0x2AE6E58
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::OnEnable()
    void OnEnable();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x2AE6ED0
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);
  }; // VRUIControls.VRGraphicRaycaster
  #pragma pack(pop)
  static check_size<sizeof(VRGraphicRaycaster), 64 + sizeof(::HMUI::CurvedCanvasSettingsHelper*)> __VRUIControls_VRGraphicRaycasterSizeCheck;
  static_assert(sizeof(VRGraphicRaycaster) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult, "VRUIControls", "VRGraphicRaycaster/VRGraphicRaycastResult");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VRUIControls::VRGraphicRaycaster::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRGraphicRaycaster*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::RaycastCanvas
// Il2CppName: RaycastCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Ray, float, float, ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>*)>(&VRUIControls::VRGraphicRaycaster::RaycastCanvas)> {
  static const MethodInfo* get() {
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* hitDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VRUIControls", "VRGraphicRaycaster/VRGraphicRaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRGraphicRaycaster*), "RaycastCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvas, ray, hitDistance, curvedUIRadius, results});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::get_eventCamera
// Il2CppName: get_eventCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (VRUIControls::VRGraphicRaycaster::*)()>(&VRUIControls::VRGraphicRaycaster::get_eventCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRGraphicRaycaster*), "get_eventCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRGraphicRaycaster::*)()>(&VRUIControls::VRGraphicRaycaster::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRGraphicRaycaster*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRGraphicRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&VRUIControls::VRGraphicRaycaster::Raycast)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* resultAppendList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRGraphicRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, resultAppendList});
  }
};
