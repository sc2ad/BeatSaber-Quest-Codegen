// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISubsystemDescriptor
#include "UnityEngine/ISubsystemDescriptor.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystemDescriptorImpl
  class ISubsystemDescriptorImpl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ISubsystemDescriptorImpl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ISubsystemDescriptorImpl*, "UnityEngine", "ISubsystemDescriptorImpl");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ISubsystemDescriptorImpl
  // [TokenAttribute] Offset: FFFFFFFF
  class ISubsystemDescriptorImpl/*, public ::UnityEngine::ISubsystemDescriptor*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISubsystemDescriptor
    operator ::UnityEngine::ISubsystemDescriptor() noexcept {
      return *reinterpret_cast<::UnityEngine::ISubsystemDescriptor*>(this);
    }
    // Creating interface conversion operator: i_ISubsystemDescriptor
    inline ::UnityEngine::ISubsystemDescriptor* i_ISubsystemDescriptor() noexcept {
      return reinterpret_cast<::UnityEngine::ISubsystemDescriptor*>(this);
    }
    // public System.Void set_ptr(System.IntPtr value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ptr(::System::IntPtr value);
  }; // UnityEngine.ISubsystemDescriptorImpl
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ISubsystemDescriptorImpl::set_ptr
// Il2CppName: set_ptr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ISubsystemDescriptorImpl::*)(::System::IntPtr)>(&UnityEngine::ISubsystemDescriptorImpl::set_ptr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ISubsystemDescriptorImpl*), "set_ptr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
