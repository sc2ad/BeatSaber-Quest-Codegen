// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetwork::FrameHeader, "", "OVRNetwork/FrameHeader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRNetwork/FrameHeader
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRNetwork::FrameHeader/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 protocolIdentifier
    // Size: 0x4
    // Offset: 0x0
    uint protocolIdentifier;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 payloadType
    // Size: 0x4
    // Offset: 0x4
    int payloadType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 payloadLength
    // Size: 0x4
    // Offset: 0x8
    int payloadLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FrameHeader
    constexpr FrameHeader(uint protocolIdentifier_ = {}, int payloadType_ = {}, int payloadLength_ = {}) noexcept : protocolIdentifier{protocolIdentifier_}, payloadType{payloadType_}, payloadLength{payloadLength_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 StructSize
    static constexpr const int StructSize = 12;
    // Get static field: static public System.Int32 StructSize
    static int _get_StructSize();
    // Set static field: static public System.Int32 StructSize
    static void _set_StructSize(int value);
    // Get instance field reference: public System.UInt32 protocolIdentifier
    uint& dyn_protocolIdentifier();
    // Get instance field reference: public System.Int32 payloadType
    int& dyn_payloadType();
    // Get instance field reference: public System.Int32 payloadLength
    int& dyn_payloadLength();
    // public System.Byte[] ToBytes()
    // Offset: 0x16C2784
    ::ArrayW<uint8_t> ToBytes();
    // static public OVRNetwork/FrameHeader FromBytes(System.Byte[] arr)
    // Offset: 0x16C2888
    static ::GlobalNamespace::OVRNetwork::FrameHeader FromBytes(::ArrayW<uint8_t> arr);
  }; // OVRNetwork/FrameHeader
  #pragma pack(pop)
  static check_size<sizeof(OVRNetwork::FrameHeader), 8 + sizeof(int)> __GlobalNamespace_OVRNetwork_FrameHeaderSizeCheck;
  static_assert(sizeof(OVRNetwork::FrameHeader) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::FrameHeader::ToBytes
// Il2CppName: ToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::OVRNetwork::FrameHeader::*)()>(&GlobalNamespace::OVRNetwork::FrameHeader::ToBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::FrameHeader), "ToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::FrameHeader::FromBytes
// Il2CppName: FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRNetwork::FrameHeader (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::OVRNetwork::FrameHeader::FromBytes)> {
  static const MethodInfo* get() {
    static auto* arr = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::FrameHeader), "FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arr});
  }
};
