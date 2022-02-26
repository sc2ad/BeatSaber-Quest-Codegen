// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: IVoipPCMSource
  class IVoipPCMSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::IVoipPCMSource);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::IVoipPCMSource*, "Oculus.Platform", "IVoipPCMSource");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.IVoipPCMSource
  // [TokenAttribute] Offset: FFFFFFFF
  class IVoipPCMSource {
    public:
    // public System.Int32 GetPCM(System.Single[] dest, System.Int32 length)
    // Offset: 0xFFFFFFFF
    int GetPCM(::ArrayW<float> dest, int length);
    // public System.Void SetSenderID(System.UInt64 senderID)
    // Offset: 0xFFFFFFFF
    void SetSenderID(uint64_t senderID);
    // public System.Void Update()
    // Offset: 0xFFFFFFFF
    void Update();
    // public System.Int32 PeekSizeElements()
    // Offset: 0xFFFFFFFF
    int PeekSizeElements();
  }; // Oculus.Platform.IVoipPCMSource
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::IVoipPCMSource::GetPCM
// Il2CppName: GetPCM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Platform::IVoipPCMSource::*)(::ArrayW<float>, int)>(&Oculus::Platform::IVoipPCMSource::GetPCM)> {
  static const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IVoipPCMSource*), "GetPCM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, length});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IVoipPCMSource::SetSenderID
// Il2CppName: SetSenderID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::IVoipPCMSource::*)(uint64_t)>(&Oculus::Platform::IVoipPCMSource::SetSenderID)> {
  static const MethodInfo* get() {
    static auto* senderID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IVoipPCMSource*), "SetSenderID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{senderID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IVoipPCMSource::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::IVoipPCMSource::*)()>(&Oculus::Platform::IVoipPCMSource::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IVoipPCMSource*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IVoipPCMSource::PeekSizeElements
// Il2CppName: PeekSizeElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Platform::IVoipPCMSource::*)()>(&Oculus::Platform::IVoipPCMSource::PeekSizeElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IVoipPCMSource*), "PeekSizeElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
