// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: AddressFamily
  struct AddressFamily;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: LocalAddrType
  struct LocalAddrType;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetUtils
  class NetUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::NetUtils);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetUtils*, "LiteNetLib", "NetUtils");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class NetUtils : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.Generic.List`1<System.String> IpList
    static ::System::Collections::Generic::List_1<::StringW>* _get_IpList();
    // Set static field: static private readonly System.Collections.Generic.List`1<System.String> IpList
    static void _set_IpList(::System::Collections::Generic::List_1<::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x2208140
    static void _cctor();
    // static public System.Net.IPEndPoint MakeEndPoint(System.String hostStr, System.Int32 port)
    // Offset: 0x21FC784
    static ::System::Net::IPEndPoint* MakeEndPoint(::StringW hostStr, int port);
    // static public System.Net.IPAddress ResolveAddress(System.String hostStr)
    // Offset: 0x2202810
    static ::System::Net::IPAddress* ResolveAddress(::StringW hostStr);
    // static private System.Net.IPAddress ResolveAddress(System.String hostStr, System.Net.Sockets.AddressFamily addressFamily)
    // Offset: 0x22073EC
    static ::System::Net::IPAddress* ResolveAddress(::StringW hostStr, ::System::Net::Sockets::AddressFamily addressFamily);
    // static private System.Net.IPAddress[] ResolveAddresses(System.String hostStr)
    // Offset: 0x22074C0
    static ::ArrayW<::System::Net::IPAddress*> ResolveAddresses(::StringW hostStr);
    // static public System.Collections.Generic.List`1<System.String> GetLocalIpList(LiteNetLib.LocalAddrType addrType)
    // Offset: 0x22074E4
    static ::System::Collections::Generic::List_1<::StringW>* GetLocalIpList(::LiteNetLib::LocalAddrType addrType);
    // static public System.Void GetLocalIpList(System.Collections.Generic.IList`1<System.String> targetList, LiteNetLib.LocalAddrType addrType)
    // Offset: 0x2207578
    static void GetLocalIpList(::System::Collections::Generic::IList_1<::StringW>* targetList, ::LiteNetLib::LocalAddrType addrType);
    // static public System.String GetLocalIp(LiteNetLib.LocalAddrType addrType)
    // Offset: 0x21FC94C
    static ::StringW GetLocalIp(::LiteNetLib::LocalAddrType addrType);
    // static System.Void PrintInterfaceInfos()
    // Offset: 0x2207D6C
    static void PrintInterfaceInfos();
    // static System.Int32 RelativeSequenceNumber(System.Int32 number, System.Int32 expected)
    // Offset: 0x220608C
    static int RelativeSequenceNumber(int number, int expected);
  }; // LiteNetLib.NetUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::NetUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetUtils::MakeEndPoint
// Il2CppName: MakeEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (*)(::StringW, int)>(&LiteNetLib::NetUtils::MakeEndPoint)> {
  static const MethodInfo* get() {
    static auto* hostStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), "MakeEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostStr, port});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetUtils::ResolveAddress
// Il2CppName: ResolveAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (*)(::StringW)>(&LiteNetLib::NetUtils::ResolveAddress)> {
  static const MethodInfo* get() {
    static auto* hostStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), "ResolveAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostStr});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetUtils::ResolveAddress
// Il2CppName: ResolveAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (*)(::StringW, ::System::Net::Sockets::AddressFamily)>(&LiteNetLib::NetUtils::ResolveAddress)> {
  static const MethodInfo* get() {
    static auto* hostStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* addressFamily = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "AddressFamily")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), "ResolveAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostStr, addressFamily});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetUtils::ResolveAddresses
// Il2CppName: ResolveAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)(::StringW)>(&LiteNetLib::NetUtils::ResolveAddresses)> {
  static const MethodInfo* get() {
    static auto* hostStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), "ResolveAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostStr});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetUtils::GetLocalIpList
// Il2CppName: GetLocalIpList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::LiteNetLib::LocalAddrType)>(&LiteNetLib::NetUtils::GetLocalIpList)> {
  static const MethodInfo* get() {
    static auto* addrType = &::il2cpp_utils::GetClassFromName("LiteNetLib", "LocalAddrType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), "GetLocalIpList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addrType});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetUtils::GetLocalIpList
// Il2CppName: GetLocalIpList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::StringW>*, ::LiteNetLib::LocalAddrType)>(&LiteNetLib::NetUtils::GetLocalIpList)> {
  static const MethodInfo* get() {
    static auto* targetList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* addrType = &::il2cpp_utils::GetClassFromName("LiteNetLib", "LocalAddrType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), "GetLocalIpList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetList, addrType});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetUtils::GetLocalIp
// Il2CppName: GetLocalIp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::LiteNetLib::LocalAddrType)>(&LiteNetLib::NetUtils::GetLocalIp)> {
  static const MethodInfo* get() {
    static auto* addrType = &::il2cpp_utils::GetClassFromName("LiteNetLib", "LocalAddrType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), "GetLocalIp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addrType});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetUtils::PrintInterfaceInfos
// Il2CppName: PrintInterfaceInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::NetUtils::PrintInterfaceInfos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), "PrintInterfaceInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetUtils::RelativeSequenceNumber
// Il2CppName: RelativeSequenceNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&LiteNetLib::NetUtils::RelativeSequenceNumber)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetUtils*), "RelativeSequenceNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number, expected});
  }
};
