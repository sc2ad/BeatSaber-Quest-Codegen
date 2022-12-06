// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVROnCompleteListener
  class OVROnCompleteListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVROnCompleteListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROnCompleteListener*, "", "OVROnCompleteListener");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVROnCompleteListener
  // [TokenAttribute] Offset: FFFFFFFF
  class OVROnCompleteListener : public ::UnityEngine::AndroidJavaProxy {
    public:
    // public System.Void .ctor()
    // Offset: 0x1764304
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVROnCompleteListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVROnCompleteListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVROnCompleteListener*, creationType>()));
    }
    // public System.Void onSuccess()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void onSuccess();
    // public System.Void onFailure()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void onFailure();
  }; // OVROnCompleteListener
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVROnCompleteListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVROnCompleteListener::onSuccess
// Il2CppName: onSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROnCompleteListener::*)()>(&GlobalNamespace::OVROnCompleteListener::onSuccess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROnCompleteListener*), "onSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROnCompleteListener::onFailure
// Il2CppName: onFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROnCompleteListener::*)()>(&GlobalNamespace::OVROnCompleteListener::onFailure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROnCompleteListener*), "onFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
