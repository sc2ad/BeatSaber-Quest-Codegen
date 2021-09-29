// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.IVoipPCMSource
#include "Oculus/Platform/IVoipPCMSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.VoipPCMSourceNative
  // [TokenAttribute] Offset: FFFFFFFF
  class VoipPCMSourceNative : public ::Il2CppObject/*, public Oculus::Platform::IVoipPCMSource*/ {
    public:
    // private System.UInt64 senderID
    // Size: 0x8
    // Offset: 0x10
    uint64_t senderID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: VoipPCMSourceNative
    VoipPCMSourceNative(uint64_t senderID_ = {}) noexcept : senderID{senderID_} {}
    // Creating interface conversion operator: operator Oculus::Platform::IVoipPCMSource
    operator Oculus::Platform::IVoipPCMSource() noexcept {
      return *reinterpret_cast<Oculus::Platform::IVoipPCMSource*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return senderID;
    }
    // Get instance field reference: private System.UInt64 senderID
    uint64_t& dyn_senderID();
    // public System.Int32 GetPCM(System.Single[] dest, System.Int32 length)
    // Offset: 0x25BF61C
    int GetPCM(::ArrayWrapper<float> dest, int length);
    // public System.Void SetSenderID(System.UInt64 senderID)
    // Offset: 0x25BF6DC
    void SetSenderID(uint64_t senderID);
    // public System.Int32 PeekSizeElements()
    // Offset: 0x25BF6E4
    int PeekSizeElements();
    // public System.Void Update()
    // Offset: 0x25BF784
    void Update();
    // public System.Void .ctor()
    // Offset: 0x25BEAF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoipPCMSourceNative* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::VoipPCMSourceNative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoipPCMSourceNative*, creationType>()));
    }
  }; // Oculus.Platform.VoipPCMSourceNative
  #pragma pack(pop)
  static check_size<sizeof(VoipPCMSourceNative), 16 + sizeof(uint64_t)> __Oculus_Platform_VoipPCMSourceNativeSizeCheck;
  static_assert(sizeof(VoipPCMSourceNative) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipPCMSourceNative*, "Oculus.Platform", "VoipPCMSourceNative");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::GetPCM
// Il2CppName: GetPCM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Platform::VoipPCMSourceNative::*)(::ArrayWrapper<float>, int)>(&Oculus::Platform::VoipPCMSourceNative::GetPCM)> {
  static const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipPCMSourceNative*), "GetPCM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, length});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::SetSenderID
// Il2CppName: SetSenderID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipPCMSourceNative::*)(uint64_t)>(&Oculus::Platform::VoipPCMSourceNative::SetSenderID)> {
  static const MethodInfo* get() {
    static auto* senderID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipPCMSourceNative*), "SetSenderID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{senderID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::PeekSizeElements
// Il2CppName: PeekSizeElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Platform::VoipPCMSourceNative::*)()>(&Oculus::Platform::VoipPCMSourceNative::PeekSizeElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipPCMSourceNative*), "PeekSizeElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipPCMSourceNative::*)()>(&Oculus::Platform::VoipPCMSourceNative::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipPCMSourceNative*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
