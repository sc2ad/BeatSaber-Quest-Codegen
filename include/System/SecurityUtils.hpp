// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: SecurityUtils
  class SecurityUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::SecurityUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::SecurityUtils*, "System", "SecurityUtils");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.SecurityUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class SecurityUtils : public ::Il2CppObject {
    public:
    // static private System.Void DemandReflectionAccess(System.Type type)
    // Offset: 0x1BC27F0
    static void DemandReflectionAccess(::System::Type* type);
    // static private System.Boolean HasReflectionPermission(System.Type type)
    // Offset: 0x1BC27F4
    static bool HasReflectionPermission(::System::Type* type);
    // static System.Object SecureCreateInstance(System.Type type)
    // Offset: 0x1BC2834
    static ::Il2CppObject* SecureCreateInstance(::System::Type* type);
    // static System.Object SecureCreateInstance(System.Type type, System.Object[] args, System.Boolean allowNonPublic)
    // Offset: 0x1BC2840
    static ::Il2CppObject* SecureCreateInstance(::System::Type* type, ::ArrayW<::Il2CppObject*> args, bool allowNonPublic);
    // static System.Object SecureConstructorInvoke(System.Type type, System.Type[] argTypes, System.Object[] args, System.Boolean allowNonPublic)
    // Offset: 0x1BC2964
    static ::Il2CppObject* SecureConstructorInvoke(::System::Type* type, ::ArrayW<::System::Type*> argTypes, ::ArrayW<::Il2CppObject*> args, bool allowNonPublic);
    // static System.Object SecureConstructorInvoke(System.Type type, System.Type[] argTypes, System.Object[] args, System.Boolean allowNonPublic, System.Reflection.BindingFlags extraFlags)
    // Offset: 0x1BC2970
    static ::Il2CppObject* SecureConstructorInvoke(::System::Type* type, ::ArrayW<::System::Type*> argTypes, ::ArrayW<::Il2CppObject*> args, bool allowNonPublic, ::System::Reflection::BindingFlags extraFlags);
  }; // System.SecurityUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::SecurityUtils::DemandReflectionAccess
// Il2CppName: DemandReflectionAccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&System::SecurityUtils::DemandReflectionAccess)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SecurityUtils*), "DemandReflectionAccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::SecurityUtils::HasReflectionPermission
// Il2CppName: HasReflectionPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&System::SecurityUtils::HasReflectionPermission)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SecurityUtils*), "HasReflectionPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::SecurityUtils::SecureCreateInstance
// Il2CppName: SecureCreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*)>(&System::SecurityUtils::SecureCreateInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SecurityUtils*), "SecureCreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::SecurityUtils::SecureCreateInstance
// Il2CppName: SecureCreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*, ::ArrayW<::Il2CppObject*>, bool)>(&System::SecurityUtils::SecureCreateInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* allowNonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SecurityUtils*), "SecureCreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, args, allowNonPublic});
  }
};
// Writing MetadataGetter for method: System::SecurityUtils::SecureConstructorInvoke
// Il2CppName: SecureConstructorInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::Il2CppObject*>, bool)>(&System::SecurityUtils::SecureConstructorInvoke)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* allowNonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SecurityUtils*), "SecureConstructorInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, argTypes, args, allowNonPublic});
  }
};
// Writing MetadataGetter for method: System::SecurityUtils::SecureConstructorInvoke
// Il2CppName: SecureConstructorInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::Il2CppObject*>, bool, ::System::Reflection::BindingFlags)>(&System::SecurityUtils::SecureConstructorInvoke)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* allowNonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* extraFlags = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SecurityUtils*), "SecureConstructorInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, argTypes, args, allowNonPublic, extraFlags});
  }
};
