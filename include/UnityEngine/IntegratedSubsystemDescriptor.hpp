// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISubsystemDescriptorImpl
#include "UnityEngine/ISubsystemDescriptorImpl.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IntegratedSubsystemDescriptor
  class IntegratedSubsystemDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::IntegratedSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystemDescriptor*, "UnityEngine", "IntegratedSubsystemDescriptor");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.IntegratedSubsystemDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 109B564
  class IntegratedSubsystemDescriptor : public ::Il2CppObject/*, public ::UnityEngine::ISubsystemDescriptorImpl*/ {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISubsystemDescriptorImpl
    operator ::UnityEngine::ISubsystemDescriptorImpl() noexcept {
      return *reinterpret_cast<::UnityEngine::ISubsystemDescriptorImpl*>(this);
    }
    // Creating interface conversion operator: i_ISubsystemDescriptorImpl
    inline ::UnityEngine::ISubsystemDescriptorImpl* i_ISubsystemDescriptorImpl() noexcept {
      return reinterpret_cast<::UnityEngine::ISubsystemDescriptorImpl*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // private System.Void UnityEngine.ISubsystemDescriptorImpl.set_ptr(System.IntPtr value)
    // Offset: 0x2B7BC54
    void UnityEngine_ISubsystemDescriptorImpl_set_ptr(::System::IntPtr value);
    // protected System.Void .ctor()
    // Offset: 0x2B7BC5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntegratedSubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::IntegratedSubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntegratedSubsystemDescriptor*, creationType>()));
    }
  }; // UnityEngine.IntegratedSubsystemDescriptor
  #pragma pack(pop)
  static check_size<sizeof(IntegratedSubsystemDescriptor), 16 + sizeof(::System::IntPtr)> __UnityEngine_IntegratedSubsystemDescriptorSizeCheck;
  static_assert(sizeof(IntegratedSubsystemDescriptor) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystemDescriptor::UnityEngine_ISubsystemDescriptorImpl_set_ptr
// Il2CppName: UnityEngine.ISubsystemDescriptorImpl.set_ptr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::IntegratedSubsystemDescriptor::*)(::System::IntPtr)>(&UnityEngine::IntegratedSubsystemDescriptor::UnityEngine_ISubsystemDescriptorImpl_set_ptr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystemDescriptor*), "UnityEngine.ISubsystemDescriptorImpl.set_ptr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystemDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
