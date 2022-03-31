// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRController
  class VRController;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRLaserPointer
  class VRLaserPointer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRPointer
  class VRPointer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VRUIControls::VRPointer);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRPointer*, "VRUIControls", "VRPointer");
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.VRPointer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 124409C
  class VRPointer : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VRController _leftVRController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::VRController* leftVRController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRController*) == 0x8);
    // private VRController _rightVRController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::VRController* rightVRController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRController*) == 0x8);
    // private VRUIControls.VRLaserPointer _laserPointerPrefab
    // Size: 0x8
    // Offset: 0x28
    ::VRUIControls::VRLaserPointer* laserPointerPrefab;
    // Field size check
    static_assert(sizeof(::VRUIControls::VRLaserPointer*) == 0x8);
    // private UnityEngine.Transform _cursorPrefab
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* cursorPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single _defaultLaserPointerLength
    // Size: 0x4
    // Offset: 0x38
    float defaultLaserPointerLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _laserPointerWidth
    // Size: 0x4
    // Offset: 0x3C
    float laserPointerWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private VRUIControls.VRLaserPointer _laserPointer
    // Size: 0x8
    // Offset: 0x40
    ::VRUIControls::VRLaserPointer* laserPointer;
    // Field size check
    static_assert(sizeof(::VRUIControls::VRLaserPointer*) == 0x8);
    // private UnityEngine.Transform _cursorTransform
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* cursorTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.EventSystems.EventSystem _eventSystem
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::EventSystems::EventSystem* eventSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::EventSystem*) == 0x8);
    // private VRController _vrController
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::VRController* vrController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRController*) == 0x8);
    // private UnityEngine.EventSystems.PointerEventData _pointerData
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::EventSystems::PointerEventData* pointerData;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::PointerEventData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kScrollMultiplier
    static constexpr const float kScrollMultiplier = 1;
    // Get static field: static public System.Single kScrollMultiplier
    static float _get_kScrollMultiplier();
    // Set static field: static public System.Single kScrollMultiplier
    static void _set_kScrollMultiplier(float value);
    // Get static field: static private System.Boolean _lastControllerUsedWasRight
    static bool _get__lastControllerUsedWasRight();
    // Set static field: static private System.Boolean _lastControllerUsedWasRight
    static void _set__lastControllerUsedWasRight(bool value);
    // Get static field: static private System.Boolean _rightControllerWasReleased
    static bool _get__rightControllerWasReleased();
    // Set static field: static private System.Boolean _rightControllerWasReleased
    static void _set__rightControllerWasReleased(bool value);
    // Get static field: static private System.Boolean _leftControllerWasReleased
    static bool _get__leftControllerWasReleased();
    // Set static field: static private System.Boolean _leftControllerWasReleased
    static void _set__leftControllerWasReleased(bool value);
    // Get instance field reference: private VRController _leftVRController
    ::GlobalNamespace::VRController*& dyn__leftVRController();
    // Get instance field reference: private VRController _rightVRController
    ::GlobalNamespace::VRController*& dyn__rightVRController();
    // Get instance field reference: private VRUIControls.VRLaserPointer _laserPointerPrefab
    ::VRUIControls::VRLaserPointer*& dyn__laserPointerPrefab();
    // Get instance field reference: private UnityEngine.Transform _cursorPrefab
    ::UnityEngine::Transform*& dyn__cursorPrefab();
    // Get instance field reference: private System.Single _defaultLaserPointerLength
    float& dyn__defaultLaserPointerLength();
    // Get instance field reference: private System.Single _laserPointerWidth
    float& dyn__laserPointerWidth();
    // Get instance field reference: private VRUIControls.VRLaserPointer _laserPointer
    ::VRUIControls::VRLaserPointer*& dyn__laserPointer();
    // Get instance field reference: private UnityEngine.Transform _cursorTransform
    ::UnityEngine::Transform*& dyn__cursorTransform();
    // Get instance field reference: private UnityEngine.EventSystems.EventSystem _eventSystem
    ::UnityEngine::EventSystems::EventSystem*& dyn__eventSystem();
    // Get instance field reference: private VRController _vrController
    ::GlobalNamespace::VRController*& dyn__vrController();
    // Get instance field reference: private UnityEngine.EventSystems.PointerEventData _pointerData
    ::UnityEngine::EventSystems::PointerEventData*& dyn__pointerData();
    // public VRController get_vrController()
    // Offset: 0x2A08110
    ::GlobalNamespace::VRController* get_vrController();
    // public UnityEngine.Vector3 get_cursorPosition()
    // Offset: 0x2A08118
    ::UnityEngine::Vector3 get_cursorPosition();
    // private UnityEngine.EventSystems.EventSystem get_eventSystem()
    // Offset: 0x2A081D0
    ::UnityEngine::EventSystems::EventSystem* get_eventSystem();
    // public System.String get_state()
    // Offset: 0x2A08E5C
    ::StringW get_state();
    // protected System.Void Awake()
    // Offset: 0x2A08268
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x2A08300
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x2A08570
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0x2A086E8
    void LateUpdate();
    // private System.Void CreateLaserPointerAndLaserHit()
    // Offset: 0x2A08304
    void CreateLaserPointerAndLaserHit();
    // private System.Void RefreshLaserPointerAndLaserHit(UnityEngine.EventSystems.PointerEventData pointerData)
    // Offset: 0x2A08AD8
    void RefreshLaserPointerAndLaserHit(::UnityEngine::EventSystems::PointerEventData* pointerData);
    // private System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x2A08DA4
    void OnApplicationFocus(bool hasFocus);
    // private System.Void DestroyLaserAndHit()
    // Offset: 0x2A08574
    void DestroyLaserAndHit();
    // public System.Void Process(UnityEngine.EventSystems.PointerEventData pointerEventData)
    // Offset: 0x2A0782C
    void Process(::UnityEngine::EventSystems::PointerEventData* pointerEventData);
    // public System.Void .ctor()
    // Offset: 0x2A09144
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRPointer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VRUIControls::VRPointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRPointer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2A09158
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // VRUIControls.VRPointer
  #pragma pack(pop)
  static check_size<sizeof(VRPointer), 96 + sizeof(::UnityEngine::EventSystems::PointerEventData*)> __VRUIControls_VRPointerSizeCheck;
  static_assert(sizeof(VRPointer) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRUIControls::VRPointer::get_vrController
// Il2CppName: get_vrController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRController* (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::get_vrController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "get_vrController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::get_cursorPosition
// Il2CppName: get_cursorPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::get_cursorPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "get_cursorPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::get_eventSystem
// Il2CppName: get_eventSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::EventSystem* (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::get_eventSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "get_eventSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::get_state
// Il2CppName: get_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::get_state)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "get_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::CreateLaserPointerAndLaserHit
// Il2CppName: CreateLaserPointerAndLaserHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::CreateLaserPointerAndLaserHit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "CreateLaserPointerAndLaserHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::RefreshLaserPointerAndLaserHit
// Il2CppName: RefreshLaserPointerAndLaserHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRPointer::*)(::UnityEngine::EventSystems::PointerEventData*)>(&VRUIControls::VRPointer::RefreshLaserPointerAndLaserHit)> {
  static const MethodInfo* get() {
    static auto* pointerData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "RefreshLaserPointerAndLaserHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerData});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRPointer::*)(bool)>(&VRUIControls::VRPointer::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::DestroyLaserAndHit
// Il2CppName: DestroyLaserAndHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRPointer::*)()>(&VRUIControls::VRPointer::DestroyLaserAndHit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "DestroyLaserAndHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRPointer::*)(::UnityEngine::EventSystems::PointerEventData*)>(&VRUIControls::VRPointer::Process)> {
  static const MethodInfo* get() {
    static auto* pointerEventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEventData});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRPointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VRUIControls::VRPointer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VRUIControls::VRPointer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRPointer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
