// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.IntegratedSubsystem`1
#include "UnityEngine/IntegratedSubsystem_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRInputSubsystemDescriptor
  class XRInputSubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: XRInputSubsystem
  class XRInputSubsystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::XRInputSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRInputSubsystem*, "UnityEngine.XR", "XRInputSubsystem");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRInputSubsystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: 109505C
  // [NativeTypeAttribute] Offset: 109505C
  // [UsedByNativeCodeAttribute] Offset: 109505C
  class XRInputSubsystem : public ::UnityEngine::IntegratedSubsystem_1<::UnityEngine::XR::XRInputSubsystemDescriptor*> {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x10955C0
    // private System.Action`1<UnityEngine.XR.XRInputSubsystem> trackingOriginUpdated
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* trackingOriginUpdated;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x10955FC
    // private System.Action`1<UnityEngine.XR.XRInputSubsystem> boundaryChanged
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* boundaryChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*) == 0x8);
    public:
    // Get instance field reference: private System.Action`1<UnityEngine.XR.XRInputSubsystem> trackingOriginUpdated
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& dyn_trackingOriginUpdated();
    // Get instance field reference: private System.Action`1<UnityEngine.XR.XRInputSubsystem> boundaryChanged
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& dyn_boundaryChanged();
    // public System.Void .ctor()
    // Offset: 0x2B387A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRInputSubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::XRInputSubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRInputSubsystem*, creationType>()));
    }
    // static private System.Void InvokeTrackingOriginUpdatedEvent(System.IntPtr internalPtr)
    // Offset: 0x2B38618
    static void InvokeTrackingOriginUpdatedEvent(::System::IntPtr internalPtr);
    // static private System.Void InvokeBoundaryChangedEvent(System.IntPtr internalPtr)
    // Offset: 0x2B386E0
    static void InvokeBoundaryChangedEvent(::System::IntPtr internalPtr);
  }; // UnityEngine.XR.XRInputSubsystem
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::XRInputSubsystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::XRInputSubsystem::InvokeTrackingOriginUpdatedEvent
// Il2CppName: InvokeTrackingOriginUpdatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::XR::XRInputSubsystem::InvokeTrackingOriginUpdatedEvent)> {
  static const MethodInfo* get() {
    static auto* internalPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRInputSubsystem*), "InvokeTrackingOriginUpdatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRInputSubsystem::InvokeBoundaryChangedEvent
// Il2CppName: InvokeBoundaryChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::XR::XRInputSubsystem::InvokeBoundaryChangedEvent)> {
  static const MethodInfo* get() {
    static auto* internalPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRInputSubsystem*), "InvokeBoundaryChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalPtr});
  }
};
