// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TermInfoNumbers
  struct TermInfoNumbers;
  // Forward declaring type: TermInfoStrings
  struct TermInfoStrings;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.TermInfoReader
  class TermInfoReader : public ::Il2CppObject {
    public:
    // private System.Int16 boolSize
    // Size: 0x2
    // Offset: 0x10
    int16_t boolSize;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // private System.Int16 numSize
    // Size: 0x2
    // Offset: 0x12
    int16_t numSize;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // private System.Int16 strOffsets
    // Size: 0x2
    // Offset: 0x14
    int16_t strOffsets;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Padding between fields: strOffsets and: buffer
    char __padding2[0x2] = {};
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 booleansOffset
    // Size: 0x4
    // Offset: 0x20
    int booleansOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TermInfoReader
    TermInfoReader(int16_t boolSize_ = {}, int16_t numSize_ = {}, int16_t strOffsets_ = {}, ::Array<uint8_t>* buffer_ = {}, int booleansOffset_ = {}) noexcept : boolSize{boolSize_}, numSize{numSize_}, strOffsets{strOffsets_}, buffer{buffer_}, booleansOffset{booleansOffset_} {}
    // public System.Void .ctor(System.String term, System.String filename)
    // Offset: 0x1B5AA50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TermInfoReader* New_ctor(::Il2CppString* term, ::Il2CppString* filename) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TermInfoReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TermInfoReader*, creationType>(term, filename)));
    }
    // public System.Void .ctor(System.String term, System.Byte[] buffer)
    // Offset: 0x1B5AC8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TermInfoReader* New_ctor(::Il2CppString* term, ::Array<uint8_t>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TermInfoReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TermInfoReader*, creationType>(term, buffer)));
    }
    // private System.Void ReadHeader(System.Byte[] buffer, ref System.Int32 position)
    // Offset: 0x1B5EEB4
    void ReadHeader(::Array<uint8_t>* buffer, int& position);
    // private System.Void ReadNames(System.Byte[] buffer, ref System.Int32 position)
    // Offset: 0x1B5F010
    void ReadNames(::Array<uint8_t>* buffer, int& position);
    // public System.Int32 Get(System.TermInfoNumbers number)
    // Offset: 0x1B5B47C
    int Get(System::TermInfoNumbers number);
    // public System.String Get(System.TermInfoStrings tstr)
    // Offset: 0x1B5B3E4
    ::Il2CppString* Get(System::TermInfoStrings tstr);
    // public System.Byte[] GetStringBytes(System.TermInfoStrings tstr)
    // Offset: 0x1B5EC90
    ::Array<uint8_t>* GetStringBytes(System::TermInfoStrings tstr);
    // private System.Int16 GetInt16(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x1B5F050
    int16_t GetInt16(::Array<uint8_t>* buffer, int offset);
    // private System.String GetString(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x1B5F0AC
    ::Il2CppString* GetString(::Array<uint8_t>* buffer, int offset);
    // private System.Byte[] GetStringBytes(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x1B5F13C
    ::Array<uint8_t>* GetStringBytes(::Array<uint8_t>* buffer, int offset);
  }; // System.TermInfoReader
  #pragma pack(pop)
  static check_size<sizeof(TermInfoReader), 32 + sizeof(int)> __System_TermInfoReaderSizeCheck;
  static_assert(sizeof(TermInfoReader) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::TermInfoReader*, "System", "TermInfoReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TermInfoReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TermInfoReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TermInfoReader::ReadHeader
// Il2CppName: ReadHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TermInfoReader::*)(::Array<uint8_t>*, int&)>(&System::TermInfoReader::ReadHeader)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "ReadHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, position});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::ReadNames
// Il2CppName: ReadNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TermInfoReader::*)(::Array<uint8_t>*, int&)>(&System::TermInfoReader::ReadNames)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "ReadNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, position});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TermInfoReader::*)(System::TermInfoNumbers)>(&System::TermInfoReader::Get)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "TermInfoNumbers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TermInfoReader::*)(System::TermInfoStrings)>(&System::TermInfoReader::Get)> {
  static const MethodInfo* get() {
    static auto* tstr = &::il2cpp_utils::GetClassFromName("System", "TermInfoStrings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tstr});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetStringBytes
// Il2CppName: GetStringBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::TermInfoReader::*)(System::TermInfoStrings)>(&System::TermInfoReader::GetStringBytes)> {
  static const MethodInfo* get() {
    static auto* tstr = &::il2cpp_utils::GetClassFromName("System", "TermInfoStrings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetStringBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tstr});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetInt16
// Il2CppName: GetInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::TermInfoReader::*)(::Array<uint8_t>*, int)>(&System::TermInfoReader::GetInt16)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TermInfoReader::*)(::Array<uint8_t>*, int)>(&System::TermInfoReader::GetString)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetStringBytes
// Il2CppName: GetStringBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::TermInfoReader::*)(::Array<uint8_t>*, int)>(&System::TermInfoReader::GetStringBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetStringBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
