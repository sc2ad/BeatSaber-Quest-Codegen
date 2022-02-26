// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NatAddressType
  struct NatAddressType;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: INatPunchListener
  class INatPunchListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::INatPunchListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::INatPunchListener*, "LiteNetLib", "INatPunchListener");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.INatPunchListener
  // [TokenAttribute] Offset: FFFFFFFF
  class INatPunchListener {
    public:
    // public System.Void OnNatIntroductionRequest(System.Net.IPEndPoint localEndPoint, System.Net.IPEndPoint remoteEndPoint, System.String token)
    // Offset: 0xFFFFFFFF
    void OnNatIntroductionRequest(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token);
    // public System.Void OnNatIntroductionSuccess(System.Net.IPEndPoint targetEndPoint, LiteNetLib.NatAddressType type, System.String token)
    // Offset: 0xFFFFFFFF
    void OnNatIntroductionSuccess(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token);
  }; // LiteNetLib.INatPunchListener
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::INatPunchListener::OnNatIntroductionRequest
// Il2CppName: OnNatIntroductionRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INatPunchListener::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW)>(&LiteNetLib::INatPunchListener::OnNatIntroductionRequest)> {
  static const MethodInfo* get() {
    static auto* localEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INatPunchListener*), "OnNatIntroductionRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localEndPoint, remoteEndPoint, token});
  }
};
// Writing MetadataGetter for method: LiteNetLib::INatPunchListener::OnNatIntroductionSuccess
// Il2CppName: OnNatIntroductionSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INatPunchListener::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NatAddressType, ::StringW)>(&LiteNetLib::INatPunchListener::OnNatIntroductionSuccess)> {
  static const MethodInfo* get() {
    static auto* targetEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NatAddressType")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INatPunchListener*), "OnNatIntroductionSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetEndPoint, type, token});
  }
};
