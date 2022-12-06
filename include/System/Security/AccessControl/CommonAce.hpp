// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.QualifiedAce
#include "System/Security/AccessControl/QualifiedAce.hpp"
// Including type: System.Security.AccessControl.AceQualifier
#include "System/Security/AccessControl/AceQualifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: SecurityIdentifier
  class SecurityIdentifier;
}
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Skipping declaration: AceType because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: CommonAce
  class CommonAce;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::CommonAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonAce*, "System.Security.AccessControl", "CommonAce");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.CommonAce
  // [TokenAttribute] Offset: FFFFFFFF
  class CommonAce : public ::System::Security::AccessControl::QualifiedAce {
    public:
    // public System.Void .ctor(System.Security.AccessControl.AceFlags flags, System.Security.AccessControl.AceQualifier qualifier, System.Int32 accessMask, System.Security.Principal.SecurityIdentifier sid, System.Boolean isCallback, System.Byte[] opaque)
    // Offset: 0x1B9A328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonAce* New_ctor(::System::Security::AccessControl::AceFlags flags, ::System::Security::AccessControl::AceQualifier qualifier, int accessMask, ::System::Security::Principal::SecurityIdentifier* sid, bool isCallback, ::ArrayW<uint8_t> opaque) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::CommonAce::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonAce*, creationType>(flags, qualifier, accessMask, sid, isCallback, opaque)));
    }
    // static private System.Security.AccessControl.AceType ConvertType(System.Security.AccessControl.AceQualifier qualifier, System.Boolean isCallback)
    // Offset: 0x1B9A394
    static ::System::Security::AccessControl::AceType ConvertType(::System::Security::AccessControl::AceQualifier qualifier, bool isCallback);
    // public override System.Int32 get_BinaryLength()
    // Offset: 0x1B9A830
    // Implemented from: System.Security.AccessControl.GenericAce
    // Base method: System.Int32 GenericAce::get_BinaryLength()
    int get_BinaryLength();
    // System.Void .ctor(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1B9A4E8
    // Implemented from: System.Security.AccessControl.QualifiedAce
    // Base method: System.Void QualifiedAce::.ctor(System.Byte[] binaryForm, System.Int32 offset)
    // Base method: System.Void KnownAce::.ctor(System.Byte[] binaryForm, System.Int32 offset)
    // Base method: System.Void GenericAce::.ctor(System.Byte[] binaryForm, System.Int32 offset)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonAce* New_ctor(::ArrayW<uint8_t> binaryForm, int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::CommonAce::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonAce*, creationType>(binaryForm, offset)));
    }
    // public override System.Void GetBinaryForm(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1B9A88C
    // Implemented from: System.Security.AccessControl.GenericAce
    // Base method: System.Void GenericAce::GetBinaryForm(System.Byte[] binaryForm, System.Int32 offset)
    void GetBinaryForm(::ArrayW<uint8_t> binaryForm, int offset);
  }; // System.Security.AccessControl.CommonAce
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAce::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAce::ConvertType
// Il2CppName: ConvertType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AceType (*)(::System::Security::AccessControl::AceQualifier, bool)>(&System::Security::AccessControl::CommonAce::ConvertType)> {
  static const MethodInfo* get() {
    static auto* qualifier = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AceQualifier")->byval_arg;
    static auto* isCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAce*), "ConvertType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qualifier, isCallback});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAce::get_BinaryLength
// Il2CppName: get_BinaryLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::CommonAce::*)()>(&System::Security::AccessControl::CommonAce::get_BinaryLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAce*), "get_BinaryLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAce::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAce::GetBinaryForm
// Il2CppName: GetBinaryForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAce::*)(::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::CommonAce::GetBinaryForm)> {
  static const MethodInfo* get() {
    static auto* binaryForm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAce*), "GetBinaryForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryForm, offset});
  }
};
