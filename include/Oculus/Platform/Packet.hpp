// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: SendPolicy
  struct SendPolicy;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Packet
  class Packet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Packet);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Packet*, "Oculus.Platform", "Packet");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Packet
  // [TokenAttribute] Offset: FFFFFFFF
  class Packet : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly System.UInt64 size
    // Size: 0x8
    // Offset: 0x10
    uint64_t size;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.IntPtr packetHandle
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr packetHandle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.UInt64 size
    [[deprecated("Use field access instead!")]] uint64_t& dyn_size();
    // Get instance field reference: private readonly System.IntPtr packetHandle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_packetHandle();
    // public System.UInt64 get_SenderID()
    // Offset: 0x2AD0854
    uint64_t get_SenderID();
    // public System.UInt64 get_Size()
    // Offset: 0x2AD08C0
    uint64_t get_Size();
    // public Oculus.Platform.SendPolicy get_Policy()
    // Offset: 0x2AD08C8
    ::Oculus::Platform::SendPolicy get_Policy();
    // public System.Void .ctor(System.IntPtr packetHandle)
    // Offset: 0x2ACF424
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Packet* New_ctor(::System::IntPtr packetHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Packet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Packet*, creationType>(packetHandle)));
    }
    // public System.UInt64 ReadBytes(System.Byte[] destination)
    // Offset: 0x2AD0700
    uint64_t ReadBytes(::ArrayW<uint8_t> destination);
    // public System.Void Dispose()
    // Offset: 0x2AD099C
    void Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x2AD0934
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.Packet
  #pragma pack(pop)
  static check_size<sizeof(Packet), 24 + sizeof(::System::IntPtr)> __Oculus_Platform_PacketSizeCheck;
  static_assert(sizeof(Packet) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Packet::get_SenderID
// Il2CppName: get_SenderID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Packet::*)()>(&Oculus::Platform::Packet::get_SenderID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Packet*), "get_SenderID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Packet::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Packet::*)()>(&Oculus::Platform::Packet::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Packet*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Packet::get_Policy
// Il2CppName: get_Policy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::SendPolicy (Oculus::Platform::Packet::*)()>(&Oculus::Platform::Packet::get_Policy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Packet*), "get_Policy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Packet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Packet::ReadBytes
// Il2CppName: ReadBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Packet::*)(::ArrayW<uint8_t>)>(&Oculus::Platform::Packet::ReadBytes)> {
  static const MethodInfo* get() {
    static auto* destination = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Packet*), "ReadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Packet::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Packet::*)()>(&Oculus::Platform::Packet::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Packet*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Packet::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Packet::*)()>(&Oculus::Platform::Packet::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Packet*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
