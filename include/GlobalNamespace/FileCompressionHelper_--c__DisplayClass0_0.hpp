// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: FileCompressionHelper
#include "GlobalNamespace/FileCompressionHelper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FileCompressionHelper/<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FileCompressionHelper::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
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
    ::Il2CppString* sourceDirectoryName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String destinationArchiveFileName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* destinationArchiveFileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Action`1<System.Boolean> finishCallback
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<bool>* finishCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean success
    bool& dyn_success();
    // Get instance field reference: public System.String sourceDirectoryName
    ::Il2CppString*& dyn_sourceDirectoryName();
    // Get instance field reference: public System.String destinationArchiveFileName
    ::Il2CppString*& dyn_destinationArchiveFileName();
    // Get instance field reference: public System.Action`1<System.Boolean> finishCallback
    System::Action_1<bool>*& dyn_finishCallback();
    // System.Void <CreateZipFromDirectoryAsync>b__0()
    // Offset: 0x1380228
    void $CreateZipFromDirectoryAsync$b__0();
    // System.Void <CreateZipFromDirectoryAsync>b__1()
    // Offset: 0x1380234
    void $CreateZipFromDirectoryAsync$b__1();
    // public System.Void .ctor()
    // Offset: 0x137FE00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileCompressionHelper::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileCompressionHelper::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // FileCompressionHelper/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(FileCompressionHelper::$$c__DisplayClass0_0), 40 + sizeof(System::Action_1<bool>*)> __GlobalNamespace_FileCompressionHelper_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(FileCompressionHelper::$$c__DisplayClass0_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0*, "", "FileCompressionHelper/<>c__DisplayClass0_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
// Writing MetadataGetter for method: GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
