// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: VROverlayIntersectionMaskPrimitive_t
  struct VROverlayIntersectionMaskPrimitive_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVROverlay::_SetOverlayIntersectionMask);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_SetOverlayIntersectionMask*, "Valve.VR", "IVROverlay/_SetOverlayIntersectionMask");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._SetOverlayIntersectionMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 12085FC
  class IVROverlay::_SetOverlayIntersectionMask : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2646A98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayIntersectionMask* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_SetOverlayIntersectionMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayIntersectionMask*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.UInt32 unNumMaskPrimitives, System.UInt32 unPrimitiveSize)
    // Offset: 0x2646AA8
    ::Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::Valve::VR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.UInt32 unNumMaskPrimitives, System.UInt32 unPrimitiveSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2646D60
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::Valve::VR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref Valve.VR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.IAsyncResult result)
    // Offset: 0x2646E48
    ::Valve::VR::EVROverlayError EndInvoke(ByRef<::Valve::VR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, ::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._SetOverlayIntersectionMask
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayIntersectionMask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayIntersectionMask::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayIntersectionMask::*)(uint64_t, ByRef<::Valve::VR::VROverlayIntersectionMaskPrimitive_t>, uint, uint)>(&Valve::VR::IVROverlay::_SetOverlayIntersectionMask::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pMaskPrimitives = &::il2cpp_utils::GetClassFromName("Valve.VR", "VROverlayIntersectionMaskPrimitive_t")->this_arg;
    static auto* unNumMaskPrimitives = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unPrimitiveSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayIntersectionMask*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayIntersectionMask::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_SetOverlayIntersectionMask::*)(uint64_t, ByRef<::Valve::VR::VROverlayIntersectionMaskPrimitive_t>, uint, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_SetOverlayIntersectionMask::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pMaskPrimitives = &::il2cpp_utils::GetClassFromName("Valve.VR", "VROverlayIntersectionMaskPrimitive_t")->this_arg;
    static auto* unNumMaskPrimitives = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unPrimitiveSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayIntersectionMask*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayIntersectionMask::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayIntersectionMask::*)(ByRef<::Valve::VR::VROverlayIntersectionMaskPrimitive_t>, ::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_SetOverlayIntersectionMask::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pMaskPrimitives = &::il2cpp_utils::GetClassFromName("Valve.VR", "VROverlayIntersectionMaskPrimitive_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayIntersectionMask*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pMaskPrimitives, result});
  }
};
