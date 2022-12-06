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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ErrorContext
  class ErrorContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ErrorContext);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ErrorContext*, "Newtonsoft.Json.Serialization", "ErrorContext");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.ErrorContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class ErrorContext : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean <Traced>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool Traced;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Traced and: Error
    char __padding0[0x7] = {};
    // private System.Exception <Error>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Exception* Error;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.Object <OriginalObject>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* OriginalObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object <Member>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* Member;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String <Path>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW Path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <Handled>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool Handled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean <Traced>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Traced$k__BackingField();
    // Get instance field reference: private System.Exception <Error>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn_$Error$k__BackingField();
    // Get instance field reference: private System.Object <OriginalObject>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$OriginalObject$k__BackingField();
    // Get instance field reference: private System.Object <Member>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$Member$k__BackingField();
    // Get instance field reference: private System.String <Path>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Path$k__BackingField();
    // Get instance field reference: private System.Boolean <Handled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Handled$k__BackingField();
    // System.Boolean get_Traced()
    // Offset: 0x1DE18B8
    bool get_Traced();
    // System.Void set_Traced(System.Boolean value)
    // Offset: 0x1DE18C0
    void set_Traced(bool value);
    // public System.Exception get_Error()
    // Offset: 0x1DE18CC
    ::System::Exception* get_Error();
    // private System.Void set_Error(System.Exception value)
    // Offset: 0x1DE18D4
    void set_Error(::System::Exception* value);
    // private System.Void set_OriginalObject(System.Object value)
    // Offset: 0x1DE18DC
    void set_OriginalObject(::Il2CppObject* value);
    // private System.Void set_Member(System.Object value)
    // Offset: 0x1DE18E4
    void set_Member(::Il2CppObject* value);
    // private System.Void set_Path(System.String value)
    // Offset: 0x1DE18EC
    void set_Path(::StringW value);
    // public System.Boolean get_Handled()
    // Offset: 0x1DE18F4
    bool get_Handled();
    // System.Void .ctor(System.Object originalObject, System.Object member, System.String path, System.Exception error)
    // Offset: 0x1DE186C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ErrorContext* New_ctor(::Il2CppObject* originalObject, ::Il2CppObject* member, ::StringW path, ::System::Exception* error) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::ErrorContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ErrorContext*, creationType>(originalObject, member, path, error)));
    }
  }; // Newtonsoft.Json.Serialization.ErrorContext
  #pragma pack(pop)
  static check_size<sizeof(ErrorContext), 56 + sizeof(bool)> __Newtonsoft_Json_Serialization_ErrorContextSizeCheck;
  static_assert(sizeof(ErrorContext) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorContext::get_Traced
// Il2CppName: get_Traced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::ErrorContext::*)()>(&Newtonsoft::Json::Serialization::ErrorContext::get_Traced)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ErrorContext*), "get_Traced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorContext::set_Traced
// Il2CppName: set_Traced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ErrorContext::*)(bool)>(&Newtonsoft::Json::Serialization::ErrorContext::set_Traced)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ErrorContext*), "set_Traced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorContext::get_Error
// Il2CppName: get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (Newtonsoft::Json::Serialization::ErrorContext::*)()>(&Newtonsoft::Json::Serialization::ErrorContext::get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ErrorContext*), "get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorContext::set_Error
// Il2CppName: set_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ErrorContext::*)(::System::Exception*)>(&Newtonsoft::Json::Serialization::ErrorContext::set_Error)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ErrorContext*), "set_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorContext::set_OriginalObject
// Il2CppName: set_OriginalObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ErrorContext::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::ErrorContext::set_OriginalObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ErrorContext*), "set_OriginalObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorContext::set_Member
// Il2CppName: set_Member
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ErrorContext::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::ErrorContext::set_Member)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ErrorContext*), "set_Member", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorContext::set_Path
// Il2CppName: set_Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ErrorContext::*)(::StringW)>(&Newtonsoft::Json::Serialization::ErrorContext::set_Path)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ErrorContext*), "set_Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorContext::get_Handled
// Il2CppName: get_Handled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::ErrorContext::*)()>(&Newtonsoft::Json::Serialization::ErrorContext::get_Handled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ErrorContext*), "get_Handled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
