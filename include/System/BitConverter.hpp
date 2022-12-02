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
// Type namespace: System
namespace System {
  // Forward declaring type: BitConverter
  class BitConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::BitConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::BitConverter*, "System", "BitConverter");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.BitConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class BitConverter : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Boolean IsLittleEndian
    static bool _get_IsLittleEndian();
    // Set static field: static public readonly System.Boolean IsLittleEndian
    static void _set_IsLittleEndian(bool value);
    // static private System.Void .cctor()
    // Offset: 0x1F29BD4
    static void _cctor();
    // static private System.Boolean AmILittleEndian()
    // Offset: 0x1F28D30
    static bool AmILittleEndian();
    // static public System.Byte[] GetBytes(System.Int16 value)
    // Offset: 0x1F28D38
    static ::ArrayW<uint8_t> GetBytes(int16_t value);
    // static public System.Byte[] GetBytes(System.Int32 value)
    // Offset: 0x1F28DAC
    static ::ArrayW<uint8_t> GetBytes(int value);
    // static public System.Byte[] GetBytes(System.Int64 value)
    // Offset: 0x1F28E20
    static ::ArrayW<uint8_t> GetBytes(int64_t value);
    // static public System.Byte[] GetBytes(System.UInt16 value)
    // Offset: 0x1F28E94
    static ::ArrayW<uint8_t> GetBytes(uint16_t value);
    // static public System.Byte[] GetBytes(System.UInt32 value)
    // Offset: 0x1F28EF8
    static ::ArrayW<uint8_t> GetBytes(uint value);
    // static public System.Char ToChar(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1F28F5C
    static ::Il2CppChar ToChar(::ArrayW<uint8_t> value, int startIndex);
    // static public System.Int16 ToInt16(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1F29020
    static int16_t ToInt16(::ArrayW<uint8_t> value, int startIndex);
    // static public System.Int32 ToInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1F29130
    static int ToInt32(::ArrayW<uint8_t> value, int startIndex);
    // static public System.Int64 ToInt64(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1F2925C
    static int64_t ToInt64(::ArrayW<uint8_t> value, int startIndex);
    // static public System.UInt16 ToUInt16(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1F293B4
    static uint16_t ToUInt16(::ArrayW<uint8_t> value, int startIndex);
    // static public System.UInt32 ToUInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1F29478
    static uint ToUInt32(::ArrayW<uint8_t> value, int startIndex);
    // static public System.UInt64 ToUInt64(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1F2953C
    static uint64_t ToUInt64(::ArrayW<uint8_t> value, int startIndex);
    // static public System.Single ToSingle(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1F29600
    static float ToSingle(::ArrayW<uint8_t> value, int startIndex);
    // static public System.Double ToDouble(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1F296CC
    static double ToDouble(::ArrayW<uint8_t> value, int startIndex);
    // static private System.Char GetHexValue(System.Int32 i)
    // Offset: 0x1F29798
    static ::Il2CppChar GetHexValue(int i);
    // static public System.String ToString(System.Byte[] value, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x1F297B0
    static ::StringW ToString(::ArrayW<uint8_t> value, int startIndex, int length);
    // static public System.String ToString(System.Byte[] value)
    // Offset: 0x1F29B1C
    static ::StringW ToString(::ArrayW<uint8_t> value);
    // static public System.Int64 DoubleToInt64Bits(System.Double value)
    // Offset: 0x1F29BC4
    static int64_t DoubleToInt64Bits(double value);
    // static public System.Double Int64BitsToDouble(System.Int64 value)
    // Offset: 0x1F29BCC
    static double Int64BitsToDouble(int64_t value);
  }; // System.BitConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::BitConverter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::BitConverter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::BitConverter::AmILittleEndian
// Il2CppName: AmILittleEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::BitConverter::AmILittleEndian)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "AmILittleEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int16_t)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint16_t)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToChar
// Il2CppName: ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToChar)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToInt16
// Il2CppName: ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToInt16)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToInt64)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToUInt16
// Il2CppName: ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToUInt16)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToUInt32
// Il2CppName: ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToUInt32)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToUInt64
// Il2CppName: ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToUInt64)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToDouble
// Il2CppName: ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToDouble)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetHexValue
// Il2CppName: GetHexValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(int)>(&System::BitConverter::GetHexValue)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetHexValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int, int)>(&System::BitConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex, length});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&System::BitConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::DoubleToInt64Bits
// Il2CppName: DoubleToInt64Bits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double)>(&System::BitConverter::DoubleToInt64Bits)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "DoubleToInt64Bits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::Int64BitsToDouble
// Il2CppName: Int64BitsToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(int64_t)>(&System::BitConverter::Int64BitsToDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "Int64BitsToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
