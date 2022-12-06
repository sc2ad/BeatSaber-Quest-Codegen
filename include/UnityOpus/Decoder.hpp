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
// Including type: UnityOpus.NumChannels
#include "UnityOpus/NumChannels.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityOpus.SamplingFrequency
#include "UnityOpus/SamplingFrequency.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityOpus
namespace UnityOpus {
  // Forward declaring type: Decoder
  class Decoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityOpus::Decoder);
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::Decoder*, "UnityOpus", "Decoder");
// Type namespace: UnityOpus
namespace UnityOpus {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: UnityOpus.Decoder
  // [TokenAttribute] Offset: FFFFFFFF
  class Decoder : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.IntPtr decoder
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr decoder;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private readonly UnityOpus.NumChannels channels
    // Size: 0x4
    // Offset: 0x18
    ::UnityOpus::NumChannels channels;
    // Field size check
    static_assert(sizeof(::UnityOpus::NumChannels) == 0x4);
    // Padding between fields: channels and: softclipMem
    char __padding1[0x4] = {};
    // private readonly System.Single[] softclipMem
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<float> softclipMem;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Boolean disposedValue
    // Size: 0x1
    // Offset: 0x28
    bool disposedValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // static field const value: static public System.Int32 maximumPacketDuration
    static constexpr const int maximumPacketDuration = 5760;
    // Get static field: static public System.Int32 maximumPacketDuration
    static int _get_maximumPacketDuration();
    // Set static field: static public System.Int32 maximumPacketDuration
    static void _set_maximumPacketDuration(int value);
    // Get instance field reference: private System.IntPtr decoder
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_decoder();
    // Get instance field reference: private readonly UnityOpus.NumChannels channels
    [[deprecated("Use field access instead!")]] ::UnityOpus::NumChannels& dyn_channels();
    // Get instance field reference: private readonly System.Single[] softclipMem
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_softclipMem();
    // Get instance field reference: private System.Boolean disposedValue
    [[deprecated("Use field access instead!")]] bool& dyn_disposedValue();
    // public System.Void .ctor(UnityOpus.SamplingFrequency samplingFrequency, UnityOpus.NumChannels channels)
    // Offset: 0x16613D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Decoder* New_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOpus::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Decoder*, creationType>(samplingFrequency, channels)));
    }
    // public System.Int32 Decode(System.Byte[] data, System.Int32 dataLength, System.Single[] pcm, System.Int32 decodeFec)
    // Offset: 0x166159C
    int Decode(::ArrayW<uint8_t> data, int dataLength, ::ArrayW<float> pcm, int decodeFec);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x16617E8
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x166194C
    void Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x16618D8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityOpus.Decoder
  #pragma pack(pop)
  static check_size<sizeof(Decoder), 40 + sizeof(bool)> __UnityOpus_DecoderSizeCheck;
  static_assert(sizeof(Decoder) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityOpus::Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityOpus::Decoder::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityOpus::Decoder::*)(::ArrayW<uint8_t>, int, ::ArrayW<float>, int)>(&UnityOpus::Decoder::Decode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pcm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* decodeFec = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Decoder*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, dataLength, pcm, decodeFec});
  }
};
// Writing MetadataGetter for method: UnityOpus::Decoder::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Decoder::*)(bool)>(&UnityOpus::Decoder::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Decoder*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityOpus::Decoder::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Decoder::*)()>(&UnityOpus::Decoder::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Decoder*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOpus::Decoder::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Decoder::*)()>(&UnityOpus::Decoder::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Decoder*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
