// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
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
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: MemberPrimitiveUnTyped
  class MemberPrimitiveUnTyped;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveUnTyped");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
  // [TokenAttribute] Offset: FFFFFFFF
  class MemberPrimitiveUnTyped : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation
    // Size: 0x4
    // Offset: 0x10
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE) == 0x4);
    // Padding between fields: typeInformation and: value
    char __padding0[0x4] = {};
    // System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& dyn_typeInformation();
    // Get instance field reference: System.Object value
    ::Il2CppObject*& dyn_value();
    // System.Void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation, System.Object value)
    // Offset: 0x1814AC0
    void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation, ::Il2CppObject* value);
    // System.Void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation)
    // Offset: 0x1814ACC
    void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x1814AD4
    void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x1814AFC
    void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x1814B38
    void Dump();
    // System.Void .ctor()
    // Offset: 0x1814AB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberPrimitiveUnTyped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberPrimitiveUnTyped*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
  #pragma pack(pop)
  static check_size<sizeof(MemberPrimitiveUnTyped), 24 + sizeof(::Il2CppObject*)> __System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveUnTypedSizeCheck;
  static_assert(sizeof(MemberPrimitiveUnTyped) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::Il2CppObject*)>(&System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Set)> {
  static const MethodInfo* get() {
    static auto* typeInformation = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeInformation, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE)>(&System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Set)> {
  static const MethodInfo* get() {
    static auto* typeInformation = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeInformation});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Write)> {
  static const MethodInfo* get() {
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Read)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::*)()>(&System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
