// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
  // Forward declaring type: MultiplayerPlacementErrorCode
  struct MultiplayerPlacementErrorCode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlacementErrorCodeMethods
  class MultiplayerPlacementErrorCodeMethods;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlacementErrorCodeMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlacementErrorCodeMethods*, "", "MultiplayerPlacementErrorCodeMethods");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPlacementErrorCodeMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MultiplayerPlacementErrorCodeMethods : public ::Il2CppObject {
    public:
    // static public ConnectionFailedReason ToConnectionFailedReason(MultiplayerPlacementErrorCode errorCode)
    // Offset: 0x17125BC
    static ::GlobalNamespace::ConnectionFailedReason ToConnectionFailedReason(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode);
  }; // MultiplayerPlacementErrorCodeMethods
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlacementErrorCodeMethods::ToConnectionFailedReason
// Il2CppName: ToConnectionFailedReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectionFailedReason (*)(::GlobalNamespace::MultiplayerPlacementErrorCode)>(&GlobalNamespace::MultiplayerPlacementErrorCodeMethods::ToConnectionFailedReason)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlacementErrorCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPlacementErrorCodeMethods*), "ToConnectionFailedReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode});
  }
};
