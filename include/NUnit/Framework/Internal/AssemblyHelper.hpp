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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: AssemblyHelper
  class AssemblyHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::AssemblyHelper);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::AssemblyHelper*, "NUnit.Framework.Internal", "AssemblyHelper");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.AssemblyHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class AssemblyHelper : public ::Il2CppObject {
    public:
    // static public System.String GetAssemblyPath(System.Reflection.Assembly assembly)
    // Offset: 0x1D440FC
    static ::StringW GetAssemblyPath(::System::Reflection::Assembly* assembly);
    // static private System.Boolean IsFileUri(System.String uri)
    // Offset: 0x1D53F00
    static bool IsFileUri(::StringW uri);
    // static public System.String GetAssemblyPathFromCodeBase(System.String codeBase)
    // Offset: 0x1D53F94
    static ::StringW GetAssemblyPathFromCodeBase(::StringW codeBase);
  }; // NUnit.Framework.Internal.AssemblyHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::AssemblyHelper::GetAssemblyPath
// Il2CppName: GetAssemblyPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::Assembly*)>(&NUnit::Framework::Internal::AssemblyHelper::GetAssemblyPath)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::AssemblyHelper*), "GetAssemblyPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::AssemblyHelper::IsFileUri
// Il2CppName: IsFileUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&NUnit::Framework::Internal::AssemblyHelper::IsFileUri)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::AssemblyHelper*), "IsFileUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::AssemblyHelper::GetAssemblyPathFromCodeBase
// Il2CppName: GetAssemblyPathFromCodeBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&NUnit::Framework::Internal::AssemblyHelper::GetAssemblyPathFromCodeBase)> {
  static const MethodInfo* get() {
    static auto* codeBase = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::AssemblyHelper*), "GetAssemblyPathFromCodeBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codeBase});
  }
};
