// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
  // Forward declaring type: BinaryHeaderEnum
  struct BinaryHeaderEnum;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ObjectNull
  class ObjectNull;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectNull);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectNull*, "System.Runtime.Serialization.Formatters.Binary", "ObjectNull");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectNull
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectNull : public ::Il2CppObject {
    public:
    public:
    // System.Int32 nullCount
    // Size: 0x4
    // Offset: 0x10
    int nullCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return nullCount;
    }
    // Get instance field reference: System.Int32 nullCount
    [[deprecated("Use field access instead!")]] int& dyn_nullCount();
    // System.Void SetNullCount(System.Int32 nullCount)
    // Offset: 0x18FA560
    void SetNullCount(int nullCount);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x18FA568
    void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x18FA5F4
    void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // public System.Void Dump()
    // Offset: 0x18FA660
    void Dump();
    // System.Void .ctor()
    // Offset: 0x18FA558
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectNull* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::ObjectNull::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectNull*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectNull
  #pragma pack(pop)
  static check_size<sizeof(ObjectNull), 16 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_ObjectNullSizeCheck;
  static_assert(sizeof(ObjectNull) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull::SetNullCount
// Il2CppName: SetNullCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectNull::*)(int)>(&System::Runtime::Serialization::Formatters::Binary::ObjectNull::SetNullCount)> {
  static const MethodInfo* get() {
    static auto* nullCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectNull*), "SetNullCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nullCount});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectNull::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::ObjectNull::Write)> {
  static const MethodInfo* get() {
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectNull*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectNull::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&System::Runtime::Serialization::Formatters::Binary::ObjectNull::Read)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser")->byval_arg;
    static auto* binaryHeaderEnum = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryHeaderEnum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectNull*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, binaryHeaderEnum});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectNull::*)()>(&System::Runtime::Serialization::Formatters::Binary::ObjectNull::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectNull*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
