// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Mono.Security
namespace Mono::Security {
  // Forward declaring type: BitConverterLE
  class BitConverterLE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::BitConverterLE);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::BitConverterLE*, "Mono.Security", "BitConverterLE");
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.BitConverterLE
  // [TokenAttribute] Offset: FFFFFFFF
  class BitConverterLE : public ::Il2CppObject {
    public:
    // static private System.Byte[] GetUIntBytes(System.Byte* bytes)
    // Offset: 0x23AEF54
    static ::ArrayW<uint8_t> GetUIntBytes(uint8_t* bytes);
    // static private System.Byte[] GetULongBytes(System.Byte* bytes)
    // Offset: 0x23AF070
    static ::ArrayW<uint8_t> GetULongBytes(uint8_t* bytes);
    // static System.Byte[] GetBytes(System.Int32 value)
    // Offset: 0x23ADB38
    static ::ArrayW<uint8_t> GetBytes(int value);
    // static System.Byte[] GetBytes(System.Int64 value)
    // Offset: 0x23AF20C
    static ::ArrayW<uint8_t> GetBytes(int64_t value);
    // static private System.Void UShortFromBytes(System.Byte* dst, System.Byte[] src, System.Int32 startIndex)
    // Offset: 0x23AF230
    static void UShortFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int startIndex);
    // static private System.Void UIntFromBytes(System.Byte* dst, System.Byte[] src, System.Int32 startIndex)
    // Offset: 0x23AF324
    static void UIntFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int startIndex);
    // static System.Int32 ToInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x23AECD4
    static int ToInt32(::ArrayW<uint8_t> value, int startIndex);
    // static System.UInt16 ToUInt16(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x23AF488
    static uint16_t ToUInt16(::ArrayW<uint8_t> value, int startIndex);
    // static System.UInt32 ToUInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x23AECA4
    static uint ToUInt32(::ArrayW<uint8_t> value, int startIndex);
  }; // Mono.Security.BitConverterLE
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::BitConverterLE::GetUIntBytes
// Il2CppName: GetUIntBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint8_t*)>(&Mono::Security::BitConverterLE::GetUIntBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE*), "GetUIntBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE::GetULongBytes
// Il2CppName: GetULongBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint8_t*)>(&Mono::Security::BitConverterLE::GetULongBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE*), "GetULongBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int)>(&Mono::Security::BitConverterLE::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&Mono::Security::BitConverterLE::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE::UShortFromBytes
// Il2CppName: UShortFromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, ::ArrayW<uint8_t>, int)>(&Mono::Security::BitConverterLE::UShortFromBytes)> {
  static const MethodInfo* get() {
    static auto* dst = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE*), "UShortFromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dst, src, startIndex});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE::UIntFromBytes
// Il2CppName: UIntFromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, ::ArrayW<uint8_t>, int)>(&Mono::Security::BitConverterLE::UIntFromBytes)> {
  static const MethodInfo* get() {
    static auto* dst = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE*), "UIntFromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dst, src, startIndex});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::BitConverterLE::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE::ToUInt16
// Il2CppName: ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::BitConverterLE::ToUInt16)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE*), "ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE::ToUInt32
// Il2CppName: ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::BitConverterLE::ToUInt32)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE*), "ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
