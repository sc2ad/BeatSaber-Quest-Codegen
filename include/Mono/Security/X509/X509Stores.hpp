// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Store
  class X509Store;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Stores
  class X509Stores;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X509Stores);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Stores*, "Mono.Security.X509", "X509Stores");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Stores
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Stores : public ::Il2CppObject {
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
    // private System.String _storePath
    // Size: 0x8
    // Offset: 0x10
    ::StringW storePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _newFormat
    // Size: 0x1
    // Offset: 0x18
    bool newFormat;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String _storePath
    ::StringW& dyn__storePath();
    // Get instance field reference: private System.Boolean _newFormat
    bool& dyn__newFormat();
    // System.Void .ctor(System.String path, System.Boolean newFormat)
    // Offset: 0x2A211A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Stores* New_ctor(::StringW path, bool newFormat) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X509Stores::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Stores*, creationType>(path, newFormat)));
    }
    // public Mono.Security.X509.X509Store Open(System.String storeName, System.Boolean create)
    // Offset: 0x2A21280
    ::Mono::Security::X509::X509Store* Open(::StringW storeName, bool create);
  }; // Mono.Security.X509.X509Stores
  #pragma pack(pop)
  static check_size<sizeof(X509Stores), 24 + sizeof(bool)> __Mono_Security_X509_X509StoresSizeCheck;
  static_assert(sizeof(X509Stores) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509Stores::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509Stores::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Store* (Mono::Security::X509::X509Stores::*)(::StringW, bool)>(&Mono::Security::X509::X509Stores::Open)> {
  static const MethodInfo* get() {
    static auto* storeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* create = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Stores*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{storeName, create});
  }
};
