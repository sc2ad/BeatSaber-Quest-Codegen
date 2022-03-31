// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AvatarPoseController
#include "GlobalNamespace/AvatarPoseController.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate*, "", "AvatarPoseController/RotationsWillBeSetDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPoseController/RotationsWillBeSetDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarPoseController::RotationsWillBeSetDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14BE59C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPoseController::RotationsWillBeSetDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPoseController::RotationsWillBeSetDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation, out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation)
    // Offset: 0x14BDADC
    void Invoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation, ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation, out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14BE5AC
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation, ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation, System.IAsyncResult result)
    // Offset: 0x14BE6CC
    void EndInvoke(ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation, ::System::IAsyncResult* result);
  }; // AvatarPoseController/RotationsWillBeSetDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>)>(&GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* headRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* leftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* rightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* newHeadRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newLeftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newRightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headRotation, leftHandRotation, rightHandRotation, newHeadRotation, newLeftHandRotation, newRightHandRotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* headRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* leftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* rightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* newHeadRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newLeftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newRightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headRotation, leftHandRotation, rightHandRotation, newHeadRotation, newLeftHandRotation, newRightHandRotation, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::*)(ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ::System::IAsyncResult*)>(&GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* newHeadRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newLeftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newRightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newHeadRotation, newLeftHandRotation, newRightHandRotation, result});
  }
};
