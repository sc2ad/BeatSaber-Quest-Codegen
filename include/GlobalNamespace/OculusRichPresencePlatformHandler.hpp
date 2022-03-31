// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IRichPresencePlatformHandler
#include "GlobalNamespace/IRichPresencePlatformHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusRichPresencePlatformHandler
  class OculusRichPresencePlatformHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusRichPresencePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusRichPresencePlatformHandler*, "", "OculusRichPresencePlatformHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OculusRichPresencePlatformHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusRichPresencePlatformHandler : public ::Il2CppObject/*, public ::GlobalNamespace::IRichPresencePlatformHandler*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IRichPresencePlatformHandler
    operator ::GlobalNamespace::IRichPresencePlatformHandler() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IRichPresencePlatformHandler*>(this);
    }
    // public System.Void SetPresence(IRichPresenceData richPresenceData)
    // Offset: 0x151896C
    void SetPresence(::GlobalNamespace::IRichPresenceData* richPresenceData);
    // public System.Void Clear()
    // Offset: 0x1518BDC
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x1518BE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusRichPresencePlatformHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusRichPresencePlatformHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusRichPresencePlatformHandler*, creationType>()));
    }
  }; // OculusRichPresencePlatformHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusRichPresencePlatformHandler::SetPresence
// Il2CppName: SetPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusRichPresencePlatformHandler::*)(::GlobalNamespace::IRichPresenceData*)>(&GlobalNamespace::OculusRichPresencePlatformHandler::SetPresence)> {
  static const MethodInfo* get() {
    static auto* richPresenceData = &::il2cpp_utils::GetClassFromName("", "IRichPresenceData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusRichPresencePlatformHandler*), "SetPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{richPresenceData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusRichPresencePlatformHandler::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusRichPresencePlatformHandler::*)()>(&GlobalNamespace::OculusRichPresencePlatformHandler::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusRichPresencePlatformHandler*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusRichPresencePlatformHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
