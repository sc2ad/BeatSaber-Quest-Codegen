// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0xB0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.AppDomainSetup
  // [TokenAttribute] Offset: FFFFFFFF
  // [ClassInterfaceAttribute] Offset: E5CB90
  // [ComVisibleAttribute] Offset: E5CB90
  class AppDomainSetup : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.String application_base
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* application_base;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String application_name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* application_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String cache_path
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* cache_path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String configuration_file
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* configuration_file;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String dynamic_base
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* dynamic_base;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String license_file
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* license_file;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String private_bin_path
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* private_bin_path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String private_bin_path_probe
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* private_bin_path_probe;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String shadow_copy_directories
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* shadow_copy_directories;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String shadow_copy_files
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* shadow_copy_files;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean publisher_policy
    // Size: 0x1
    // Offset: 0x60
    bool publisher_policy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean path_changed
    // Size: 0x1
    // Offset: 0x61
    bool path_changed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: path_changed and: loader_optimization
    char __padding11[0x2] = {};
    // private System.Int32 loader_optimization
    // Size: 0x4
    // Offset: 0x64
    int loader_optimization;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean disallow_binding_redirects
    // Size: 0x1
    // Offset: 0x68
    bool disallow_binding_redirects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean disallow_code_downloads
    // Size: 0x1
    // Offset: 0x69
    bool disallow_code_downloads;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disallow_code_downloads and: activationArguments
    char __padding14[0x6] = {};
    // private System.Object _activationArguments
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppObject* activationArguments;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object domain_initializer
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppObject* domain_initializer;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object application_trust
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppObject* application_trust;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String[] domain_initializer_args
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::Il2CppString*> domain_initializer_args;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    // private System.Boolean disallow_appbase_probe
    // Size: 0x1
    // Offset: 0x90
    bool disallow_appbase_probe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disallow_appbase_probe and: configuration_bytes
    char __padding19[0x7] = {};
    // private System.Byte[] configuration_bytes
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<uint8_t> configuration_bytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] serialized_non_primitives
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<uint8_t> serialized_non_primitives;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE62B80
    // private System.String <TargetFrameworkName>k__BackingField
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppString* TargetFrameworkName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: private System.String application_base
    ::Il2CppString*& dyn_application_base();
    // Get instance field reference: private System.String application_name
    ::Il2CppString*& dyn_application_name();
    // Get instance field reference: private System.String cache_path
    ::Il2CppString*& dyn_cache_path();
    // Get instance field reference: private System.String configuration_file
    ::Il2CppString*& dyn_configuration_file();
    // Get instance field reference: private System.String dynamic_base
    ::Il2CppString*& dyn_dynamic_base();
    // Get instance field reference: private System.String license_file
    ::Il2CppString*& dyn_license_file();
    // Get instance field reference: private System.String private_bin_path
    ::Il2CppString*& dyn_private_bin_path();
    // Get instance field reference: private System.String private_bin_path_probe
    ::Il2CppString*& dyn_private_bin_path_probe();
    // Get instance field reference: private System.String shadow_copy_directories
    ::Il2CppString*& dyn_shadow_copy_directories();
    // Get instance field reference: private System.String shadow_copy_files
    ::Il2CppString*& dyn_shadow_copy_files();
    // Get instance field reference: private System.Boolean publisher_policy
    bool& dyn_publisher_policy();
    // Get instance field reference: private System.Boolean path_changed
    bool& dyn_path_changed();
    // Get instance field reference: private System.Int32 loader_optimization
    int& dyn_loader_optimization();
    // Get instance field reference: private System.Boolean disallow_binding_redirects
    bool& dyn_disallow_binding_redirects();
    // Get instance field reference: private System.Boolean disallow_code_downloads
    bool& dyn_disallow_code_downloads();
    // Get instance field reference: private System.Object _activationArguments
    ::Il2CppObject*& dyn__activationArguments();
    // Get instance field reference: private System.Object domain_initializer
    ::Il2CppObject*& dyn_domain_initializer();
    // Get instance field reference: private System.Object application_trust
    ::Il2CppObject*& dyn_application_trust();
    // Get instance field reference: private System.String[] domain_initializer_args
    ::ArrayW<::Il2CppString*>& dyn_domain_initializer_args();
    // Get instance field reference: private System.Boolean disallow_appbase_probe
    bool& dyn_disallow_appbase_probe();
    // Get instance field reference: private System.Byte[] configuration_bytes
    ::ArrayW<uint8_t>& dyn_configuration_bytes();
    // Get instance field reference: private System.Byte[] serialized_non_primitives
    ::ArrayW<uint8_t>& dyn_serialized_non_primitives();
    // Get instance field reference: private System.String <TargetFrameworkName>k__BackingField
    ::Il2CppString*& dyn_$TargetFrameworkName$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x1986834
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppDomainSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::AppDomainSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppDomainSetup*, creationType>()));
    }
  }; // System.AppDomainSetup
  #pragma pack(pop)
  static check_size<sizeof(AppDomainSetup), 168 + sizeof(::Il2CppString*)> __System_AppDomainSetupSizeCheck;
  static_assert(sizeof(AppDomainSetup) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(System::AppDomainSetup*, "System", "AppDomainSetup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::AppDomainSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
