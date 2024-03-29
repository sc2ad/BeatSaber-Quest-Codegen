// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CutScoreBuffer
  class CutScoreBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ICutScoreBufferDidChangeReceiver
  class ICutScoreBufferDidChangeReceiver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ICutScoreBufferDidChangeReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICutScoreBufferDidChangeReceiver*, "", "ICutScoreBufferDidChangeReceiver");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ICutScoreBufferDidChangeReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  class ICutScoreBufferDidChangeReceiver {
    public:
    // public System.Void HandleCutScoreBufferDidChange(CutScoreBuffer cutScoreBuffer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);
  }; // ICutScoreBufferDidChangeReceiver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ICutScoreBufferDidChangeReceiver::HandleCutScoreBufferDidChange
// Il2CppName: HandleCutScoreBufferDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ICutScoreBufferDidChangeReceiver::*)(::GlobalNamespace::CutScoreBuffer*)>(&GlobalNamespace::ICutScoreBufferDidChangeReceiver::HandleCutScoreBufferDidChange)> {
  static const MethodInfo* get() {
    static auto* cutScoreBuffer = &::il2cpp_utils::GetClassFromName("", "CutScoreBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ICutScoreBufferDidChangeReceiver*), "HandleCutScoreBufferDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutScoreBuffer});
  }
};
