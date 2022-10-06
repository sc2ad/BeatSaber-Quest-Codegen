// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_TrackedCamera
#include "GlobalNamespace/SteamVR_TrackedCamera.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_TrackedCamera::VideoStream);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_TrackedCamera::VideoStream*, "", "SteamVR_TrackedCamera/VideoStream");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_TrackedCamera/VideoStream
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_TrackedCamera::VideoStream : public ::Il2CppObject {
    public:
    public:
    // private System.UInt32 <deviceIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint deviceIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: deviceIndex and: handle
    char __padding0[0x4] = {};
    // private System.UInt64 _handle
    // Size: 0x8
    // Offset: 0x18
    uint64_t handle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Boolean _hasCamera
    // Size: 0x1
    // Offset: 0x20
    bool hasCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasCamera and: refCount
    char __padding2[0x7] = {};
    // private System.UInt64 refCount
    // Size: 0x8
    // Offset: 0x28
    uint64_t refCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Get instance field reference: private System.UInt32 <deviceIndex>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$deviceIndex$k__BackingField();
    // Get instance field reference: private System.UInt64 _handle
    [[deprecated("Use field access instead!")]] uint64_t& dyn__handle();
    // Get instance field reference: private System.Boolean _hasCamera
    [[deprecated("Use field access instead!")]] bool& dyn__hasCamera();
    // Get instance field reference: private System.UInt64 refCount
    [[deprecated("Use field access instead!")]] uint64_t& dyn_refCount();
    // public System.UInt32 get_deviceIndex()
    // Offset: 0x1C037F8
    uint get_deviceIndex();
    // private System.Void set_deviceIndex(System.UInt32 value)
    // Offset: 0x1C03800
    void set_deviceIndex(uint value);
    // public System.UInt64 get_handle()
    // Offset: 0x1C03808
    uint64_t get_handle();
    // public System.Boolean get_hasCamera()
    // Offset: 0x1C03810
    bool get_hasCamera();
    // public System.Void .ctor(System.UInt32 deviceIndex)
    // Offset: 0x1C03730
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TrackedCamera::VideoStream* New_ctor(uint deviceIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_TrackedCamera::VideoStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TrackedCamera::VideoStream*, creationType>(deviceIndex)));
    }
    // public System.UInt64 Acquire()
    // Offset: 0x1C03818
    uint64_t Acquire();
    // public System.UInt64 Release()
    // Offset: 0x1C038D4
    uint64_t Release();
  }; // SteamVR_TrackedCamera/VideoStream
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_TrackedCamera::VideoStream), 40 + sizeof(uint64_t)> __GlobalNamespace_SteamVR_TrackedCamera_VideoStreamSizeCheck;
  static_assert(sizeof(SteamVR_TrackedCamera::VideoStream) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStream::get_deviceIndex
// Il2CppName: get_deviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SteamVR_TrackedCamera::VideoStream::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStream::get_deviceIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStream*), "get_deviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStream::set_deviceIndex
// Il2CppName: set_deviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedCamera::VideoStream::*)(uint)>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStream::set_deviceIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStream*), "set_deviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStream::get_handle
// Il2CppName: get_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStream::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStream::get_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStream*), "get_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStream::get_hasCamera
// Il2CppName: get_hasCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_TrackedCamera::VideoStream::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStream::get_hasCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStream*), "get_hasCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStream::Acquire
// Il2CppName: Acquire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStream::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStream::Acquire)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStream*), "Acquire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStream::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStream::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStream::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStream*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
