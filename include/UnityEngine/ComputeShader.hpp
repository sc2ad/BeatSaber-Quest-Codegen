// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ComputeShader
  class ComputeShader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ComputeShader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeShader*, "UnityEngine", "ComputeShader");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ComputeShader
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 106E354
  // [UsedByNativeCodeAttribute] Offset: 106E354
  class ComputeShader : public ::UnityEngine::Object {
    public:
    // public System.Int32 FindKernel(System.String name)
    // Offset: 0x1FF66C8
    int FindKernel(::StringW name);
  }; // UnityEngine.ComputeShader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ComputeShader::FindKernel
// Il2CppName: FindKernel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ComputeShader::*)(::StringW)>(&UnityEngine::ComputeShader::FindKernel)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ComputeShader*), "FindKernel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
