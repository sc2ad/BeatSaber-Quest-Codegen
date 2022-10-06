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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NamedValueChecker
  class NamedValueChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NamedValueChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedValueChecker*, "", "NamedValueChecker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NamedValueChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class NamedValueChecker : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x14FDF54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedValueChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NamedValueChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedValueChecker*, creationType>()));
    }
    // static public System.Boolean Check(System.String fieldName, System.Object value, System.Object expectedValue, System.Text.StringBuilder assertMessageSb)
    // Offset: 0x14FDE94
    static bool Check(::StringW fieldName, ::Il2CppObject* value, ::Il2CppObject* expectedValue, ::System::Text::StringBuilder* assertMessageSb);
  }; // NamedValueChecker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NamedValueChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NamedValueChecker::Check
// Il2CppName: Check
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::Il2CppObject*, ::Il2CppObject*, ::System::Text::StringBuilder*)>(&GlobalNamespace::NamedValueChecker::Check)> {
  static const MethodInfo* get() {
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* expectedValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* assertMessageSb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedValueChecker*), "Check", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldName, value, expectedValue, assertMessageSb});
  }
};
