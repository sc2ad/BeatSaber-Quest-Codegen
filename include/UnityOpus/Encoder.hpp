// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityOpus.OpusSignal
#include "UnityOpus/OpusSignal.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityOpus.NumChannels
#include "UnityOpus/NumChannels.hpp"
// Including type: UnityOpus.SamplingFrequency
#include "UnityOpus/SamplingFrequency.hpp"
// Including type: UnityOpus.OpusApplication
#include "UnityOpus/OpusApplication.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityOpus
namespace UnityOpus {
  // Forward declaring type: Encoder
  class Encoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityOpus::Encoder);
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::Encoder*, "UnityOpus", "Encoder");
// Type namespace: UnityOpus
namespace UnityOpus {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: UnityOpus.Encoder
  // [TokenAttribute] Offset: FFFFFFFF
  class Encoder : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Int32 bitrate
    // Size: 0x4
    // Offset: 0x10
    int bitrate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 complexity
    // Size: 0x4
    // Offset: 0x14
    int complexity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityOpus.OpusSignal signal
    // Size: 0x4
    // Offset: 0x18
    ::UnityOpus::OpusSignal signal;
    // Field size check
    static_assert(sizeof(::UnityOpus::OpusSignal) == 0x4);
    // Padding between fields: signal and: encoder
    char __padding2[0x4] = {};
    // private System.IntPtr encoder
    // Size: 0x8
    // Offset: 0x20
    ::System::IntPtr encoder;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private UnityOpus.NumChannels channels
    // Size: 0x4
    // Offset: 0x28
    ::UnityOpus::NumChannels channels;
    // Field size check
    static_assert(sizeof(::UnityOpus::NumChannels) == 0x4);
    // private System.Boolean disposedValue
    // Size: 0x1
    // Offset: 0x2C
    bool disposedValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Int32 bitrate
    int& dyn_bitrate();
    // Get instance field reference: private System.Int32 complexity
    int& dyn_complexity();
    // Get instance field reference: private UnityOpus.OpusSignal signal
    ::UnityOpus::OpusSignal& dyn_signal();
    // Get instance field reference: private System.IntPtr encoder
    ::System::IntPtr& dyn_encoder();
    // Get instance field reference: private UnityOpus.NumChannels channels
    ::UnityOpus::NumChannels& dyn_channels();
    // Get instance field reference: private System.Boolean disposedValue
    bool& dyn_disposedValue();
    // public System.Int32 get_Bitrate()
    // Offset: 0x2ABB1D0
    int get_Bitrate();
    // public System.Void set_Bitrate(System.Int32 value)
    // Offset: 0x2ABB1D8
    void set_Bitrate(int value);
    // public System.Int32 get_Complexity()
    // Offset: 0x2ABB294
    int get_Complexity();
    // public System.Void set_Complexity(System.Int32 value)
    // Offset: 0x2ABB29C
    void set_Complexity(int value);
    // public UnityOpus.OpusSignal get_Signal()
    // Offset: 0x2ABB358
    ::UnityOpus::OpusSignal get_Signal();
    // public System.Void set_Signal(UnityOpus.OpusSignal value)
    // Offset: 0x2ABB360
    void set_Signal(::UnityOpus::OpusSignal value);
    // public System.Void .ctor(UnityOpus.SamplingFrequency samplingFrequency, UnityOpus.NumChannels channels, UnityOpus.OpusApplication application)
    // Offset: 0x2ABB41C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoder* New_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOpus::Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoder*, creationType>(samplingFrequency, channels, application)));
    }
    // public System.Int32 Encode(System.Single[] pcm, System.Int32 count, System.Byte[] output)
    // Offset: 0x2ABB5E4
    int Encode(::ArrayW<float> pcm, int count, ::ArrayW<uint8_t> output);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x2ABB74C
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x2ABB8B0
    void Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x2ABB83C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityOpus.Encoder
  #pragma pack(pop)
  static check_size<sizeof(Encoder), 44 + sizeof(bool)> __UnityOpus_EncoderSizeCheck;
  static_assert(sizeof(Encoder) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityOpus::Encoder::get_Bitrate
// Il2CppName: get_Bitrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityOpus::Encoder::*)()>(&UnityOpus::Encoder::get_Bitrate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "get_Bitrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOpus::Encoder::set_Bitrate
// Il2CppName: set_Bitrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Encoder::*)(int)>(&UnityOpus::Encoder::set_Bitrate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "set_Bitrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOpus::Encoder::get_Complexity
// Il2CppName: get_Complexity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityOpus::Encoder::*)()>(&UnityOpus::Encoder::get_Complexity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "get_Complexity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOpus::Encoder::set_Complexity
// Il2CppName: set_Complexity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Encoder::*)(int)>(&UnityOpus::Encoder::set_Complexity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "set_Complexity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOpus::Encoder::get_Signal
// Il2CppName: get_Signal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityOpus::OpusSignal (UnityOpus::Encoder::*)()>(&UnityOpus::Encoder::get_Signal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "get_Signal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOpus::Encoder::set_Signal
// Il2CppName: set_Signal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Encoder::*)(::UnityOpus::OpusSignal)>(&UnityOpus::Encoder::set_Signal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityOpus", "OpusSignal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "set_Signal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOpus::Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityOpus::Encoder::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityOpus::Encoder::*)(::ArrayW<float>, int, ::ArrayW<uint8_t>)>(&UnityOpus::Encoder::Encode)> {
  static const MethodInfo* get() {
    static auto* pcm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pcm, count, output});
  }
};
// Writing MetadataGetter for method: UnityOpus::Encoder::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Encoder::*)(bool)>(&UnityOpus::Encoder::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityOpus::Encoder::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Encoder::*)()>(&UnityOpus::Encoder::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOpus::Encoder::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Encoder::*)()>(&UnityOpus::Encoder::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Encoder*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
