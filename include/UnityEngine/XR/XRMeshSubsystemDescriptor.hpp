// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.IntegratedSubsystemDescriptor`1
#include "UnityEngine/IntegratedSubsystemDescriptor_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRMeshSubsystem
  class XRMeshSubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: XRMeshSubsystemDescriptor
  class XRMeshSubsystemDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::XRMeshSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRMeshSubsystemDescriptor*, "UnityEngine.XR", "XRMeshSubsystemDescriptor");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRMeshSubsystemDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: 10AD4A4
  // [NativeHeaderAttribute] Offset: 10AD4A4
  // [UsedByNativeCodeAttribute] Offset: 10AD4A4
  class XRMeshSubsystemDescriptor : public ::UnityEngine::IntegratedSubsystemDescriptor_1<::UnityEngine::XR::XRMeshSubsystem*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2B64548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRMeshSubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::XRMeshSubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRMeshSubsystemDescriptor*, creationType>()));
    }
  }; // UnityEngine.XR.XRMeshSubsystemDescriptor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::XRMeshSubsystemDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
