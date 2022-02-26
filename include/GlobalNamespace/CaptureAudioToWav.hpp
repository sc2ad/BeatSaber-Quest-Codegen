// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileStream
  class FileStream;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CaptureAudioToWav
  class CaptureAudioToWav;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CaptureAudioToWav);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CaptureAudioToWav*, "", "CaptureAudioToWav");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CaptureAudioToWav
  // [TokenAttribute] Offset: FFFFFFFF
  class CaptureAudioToWav : public ::UnityEngine::MonoBehaviour {
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
    // private System.String _fileName
    // Size: 0x8
    // Offset: 0x18
    ::StringW fileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _sampleRate
    // Size: 0x4
    // Offset: 0x20
    int sampleRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _headerSize
    // Size: 0x4
    // Offset: 0x24
    int headerSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _recording
    // Size: 0x1
    // Offset: 0x28
    bool recording;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: recording and: fileStream
    char __padding3[0x7] = {};
    // private System.IO.FileStream _fileStream
    // Size: 0x8
    // Offset: 0x30
    ::System::IO::FileStream* fileStream;
    // Field size check
    static_assert(sizeof(::System::IO::FileStream*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _fileName
    ::StringW& dyn__fileName();
    // Get instance field reference: private System.Int32 _sampleRate
    int& dyn__sampleRate();
    // Get instance field reference: private System.Int32 _headerSize
    int& dyn__headerSize();
    // Get instance field reference: private System.Boolean _recording
    bool& dyn__recording();
    // Get instance field reference: private System.IO.FileStream _fileStream
    ::System::IO::FileStream*& dyn__fileStream();
    // protected System.Void Awake()
    // Offset: 0x2C15F80
    void Awake();
    // protected System.Void Update()
    // Offset: 0x2C15FB8
    void Update();
    // private System.Void StartWriting(System.String name)
    // Offset: 0x2C16068
    void StartWriting(::StringW name);
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x2C16508
    void OnAudioFilterRead(::ArrayW<float> data, int channels);
    // private System.Void ConvertAndWrite(System.Single[] dataSource)
    // Offset: 0x2C16518
    void ConvertAndWrite(::ArrayW<float> dataSource);
    // private System.Void WriteHeader()
    // Offset: 0x2C16124
    void WriteHeader();
    // public System.Void .ctor()
    // Offset: 0x2C166D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaptureAudioToWav* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CaptureAudioToWav::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaptureAudioToWav*, creationType>()));
    }
  }; // CaptureAudioToWav
  #pragma pack(pop)
  static check_size<sizeof(CaptureAudioToWav), 48 + sizeof(::System::IO::FileStream*)> __GlobalNamespace_CaptureAudioToWavSizeCheck;
  static_assert(sizeof(CaptureAudioToWav) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)()>(&GlobalNamespace::CaptureAudioToWav::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)()>(&GlobalNamespace::CaptureAudioToWav::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::StartWriting
// Il2CppName: StartWriting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)(::StringW)>(&GlobalNamespace::CaptureAudioToWav::StartWriting)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "StartWriting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)(::ArrayW<float>, int)>(&GlobalNamespace::CaptureAudioToWav::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::ConvertAndWrite
// Il2CppName: ConvertAndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)(::ArrayW<float>)>(&GlobalNamespace::CaptureAudioToWav::ConvertAndWrite)> {
  static const MethodInfo* get() {
    static auto* dataSource = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "ConvertAndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataSource});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::WriteHeader
// Il2CppName: WriteHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)()>(&GlobalNamespace::CaptureAudioToWav::WriteHeader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "WriteHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
