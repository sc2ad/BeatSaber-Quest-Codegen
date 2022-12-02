// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: MessageEnum
  struct MessageEnum;
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: IOUtil
  class IOUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::IOUtil);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::IOUtil*, "System.Runtime.Serialization.Formatters.Binary", "IOUtil");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.IOUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class IOUtil : public ::Il2CppObject {
    public:
    // static System.Boolean FlagTest(System.Runtime.Serialization.Formatters.Binary.MessageEnum flag, System.Runtime.Serialization.Formatters.Binary.MessageEnum target)
    // Offset: 0x18F73D4
    static bool FlagTest(::System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum target);
    // static System.Void WriteStringWithCode(System.String value, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x18F7374
    static void WriteStringWithCode(::StringW value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static System.Void WriteWithCode(System.Type type, System.Object value, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x18F73E0
    static void WriteWithCode(::System::Type* type, ::Il2CppObject* value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
  }; // System.Runtime.Serialization.Formatters.Binary.IOUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IOUtil::FlagTest
// Il2CppName: FlagTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Serialization::Formatters::Binary::MessageEnum, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum)>(&System::Runtime::Serialization::Formatters::Binary::IOUtil::FlagTest)> {
  static const MethodInfo* get() {
    static auto* flag = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "MessageEnum")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "MessageEnum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IOUtil*), "FlagTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flag, target});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteStringWithCode
// Il2CppName: WriteStringWithCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteStringWithCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IOUtil*), "WriteStringWithCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteWithCode
// Il2CppName: WriteWithCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::Il2CppObject*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteWithCode)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IOUtil*), "WriteWithCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, value, sout});
  }
};
