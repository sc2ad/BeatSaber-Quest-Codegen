// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Uri/System.MoreInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Uri::MoreInfo : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.String Path
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Query
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Query;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Fragment
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Fragment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String AbsoluteUri
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* AbsoluteUri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 Hash
    // Size: 0x4
    // Offset: 0x30
    int Hash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Hash and: RemoteUrl
    char __padding4[0x4] = {};
    // public System.String RemoteUrl
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* RemoteUrl;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public System.String Path
    ::Il2CppString*& dyn_Path();
    // Get instance field reference: public System.String Query
    ::Il2CppString*& dyn_Query();
    // Get instance field reference: public System.String Fragment
    ::Il2CppString*& dyn_Fragment();
    // Get instance field reference: public System.String AbsoluteUri
    ::Il2CppString*& dyn_AbsoluteUri();
    // Get instance field reference: public System.Int32 Hash
    int& dyn_Hash();
    // Get instance field reference: public System.String RemoteUrl
    ::Il2CppString*& dyn_RemoteUrl();
    // public System.Void .ctor()
    // Offset: 0x25F1610
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Uri::MoreInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Uri::MoreInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Uri::MoreInfo*, creationType>()));
    }
  }; // System.Uri/System.MoreInfo
  #pragma pack(pop)
  static check_size<sizeof(Uri::MoreInfo), 56 + sizeof(::Il2CppString*)> __System_Uri_MoreInfoSizeCheck;
  static_assert(sizeof(Uri::MoreInfo) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Uri::MoreInfo*, "System", "Uri/MoreInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Uri::MoreInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
