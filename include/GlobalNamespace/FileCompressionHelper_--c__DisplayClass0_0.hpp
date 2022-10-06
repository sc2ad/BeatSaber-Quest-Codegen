// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FileCompressionHelper
#include "GlobalNamespace/FileCompressionHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0*, "", "FileCompressionHelper/<>c__DisplayClass0_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FileCompressionHelper/<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FileCompressionHelper::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean success
    // Size: 0x1
    // Offset: 0x10
    bool success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: success and: sourceDirectoryName
    char __padding0[0x7] = {};
    // public System.String sourceDirectoryName
    // Size: 0x8
    // Offset: 0x18
    ::StringW sourceDirectoryName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String destinationArchiveFileName
    // Size: 0x8
    // Offset: 0x20
    ::StringW destinationArchiveFileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action`1<System.Boolean> finishCallback
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<bool>* finishCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean success
    [[deprecated("Use field access instead!")]] bool& dyn_success();
    // Get instance field reference: public System.String sourceDirectoryName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sourceDirectoryName();
    // Get instance field reference: public System.String destinationArchiveFileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_destinationArchiveFileName();
    // Get instance field reference: public System.Action`1<System.Boolean> finishCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_finishCallback();
    // public System.Void .ctor()
    // Offset: 0x15CAE14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileCompressionHelper::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileCompressionHelper::$$c__DisplayClass0_0*, creationType>()));
    }
    // System.Void <CreateZipFromDirectoryAsync>b__0()
    // Offset: 0x15CB23C
    void $CreateZipFromDirectoryAsync$b__0();
    // System.Void <CreateZipFromDirectoryAsync>b__1()
    // Offset: 0x15CB248
    void $CreateZipFromDirectoryAsync$b__1();
  }; // FileCompressionHelper/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(FileCompressionHelper::$$c__DisplayClass0_0), 40 + sizeof(::System::Action_1<bool>*)> __GlobalNamespace_FileCompressionHelper_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(FileCompressionHelper::$$c__DisplayClass0_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::$CreateZipFromDirectoryAsync$b__0
// Il2CppName: <CreateZipFromDirectoryAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::*)()>(&GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::$CreateZipFromDirectoryAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0*), "<CreateZipFromDirectoryAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::$CreateZipFromDirectoryAsync$b__1
// Il2CppName: <CreateZipFromDirectoryAsync>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::*)()>(&GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::$CreateZipFromDirectoryAsync$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0*), "<CreateZipFromDirectoryAsync>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
