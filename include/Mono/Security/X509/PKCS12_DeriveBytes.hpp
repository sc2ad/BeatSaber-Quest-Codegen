// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.X509.PKCS12
#include "Mono/Security/X509/PKCS12.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.PKCS12/Mono.Security.X509.DeriveBytes
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS12::DeriveBytes : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.String _hashName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* hashName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _iterations
    // Size: 0x4
    // Offset: 0x18
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: iterations and: password
    char __padding1[0x4] = {};
    // private System.Byte[] _password
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> password;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] _salt
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> salt;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get static field: static private System.Byte[] keyDiversifier
    static ::ArrayW<uint8_t> _get_keyDiversifier();
    // Set static field: static private System.Byte[] keyDiversifier
    static void _set_keyDiversifier(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] ivDiversifier
    static ::ArrayW<uint8_t> _get_ivDiversifier();
    // Set static field: static private System.Byte[] ivDiversifier
    static void _set_ivDiversifier(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] macDiversifier
    static ::ArrayW<uint8_t> _get_macDiversifier();
    // Set static field: static private System.Byte[] macDiversifier
    static void _set_macDiversifier(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.String _hashName
    ::Il2CppString*& dyn__hashName();
    // Get instance field reference: private System.Int32 _iterations
    int& dyn__iterations();
    // Get instance field reference: private System.Byte[] _password
    ::ArrayW<uint8_t>& dyn__password();
    // Get instance field reference: private System.Byte[] _salt
    ::ArrayW<uint8_t>& dyn__salt();
    // public System.Void set_HashName(System.String value)
    // Offset: 0x25DB670
    void set_HashName(::Il2CppString* value);
    // public System.Void set_IterationCount(System.Int32 value)
    // Offset: 0x25DB678
    void set_IterationCount(int value);
    // public System.Void set_Password(System.Byte[] value)
    // Offset: 0x25DB680
    void set_Password(::ArrayW<uint8_t> value);
    // public System.Void set_Salt(System.Byte[] value)
    // Offset: 0x25DB720
    void set_Salt(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x25DBE68
    static void _cctor();
    // private System.Void Adjust(System.Byte[] a, System.Int32 aOff, System.Byte[] b)
    // Offset: 0x25DB7B4
    void Adjust(::ArrayW<uint8_t> a, int aOff, ::ArrayW<uint8_t> b);
    // private System.Byte[] Derive(System.Byte[] diversifier, System.Int32 n)
    // Offset: 0x25DB89C
    ::ArrayW<uint8_t> Derive(::ArrayW<uint8_t> diversifier, int n);
    // public System.Byte[] DeriveKey(System.Int32 size)
    // Offset: 0x25DBCE8
    ::ArrayW<uint8_t> DeriveKey(int size);
    // public System.Byte[] DeriveIV(System.Int32 size)
    // Offset: 0x25DBD68
    ::ArrayW<uint8_t> DeriveIV(int size);
    // public System.Byte[] DeriveMAC(System.Int32 size)
    // Offset: 0x25DBDE8
    ::ArrayW<uint8_t> DeriveMAC(int size);
    // public System.Void .ctor()
    // Offset: 0x25DB668
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS12::DeriveBytes* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::PKCS12::DeriveBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS12::DeriveBytes*, creationType>()));
    }
  }; // Mono.Security.X509.PKCS12/Mono.Security.X509.DeriveBytes
  #pragma pack(pop)
  static check_size<sizeof(PKCS12::DeriveBytes), 40 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_X509_PKCS12_DeriveBytesSizeCheck;
  static_assert(sizeof(PKCS12::DeriveBytes) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::PKCS12::DeriveBytes*, "Mono.Security.X509", "PKCS12/DeriveBytes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::set_HashName
// Il2CppName: set_HashName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::DeriveBytes::*)(::Il2CppString*)>(&Mono::Security::X509::PKCS12::DeriveBytes::set_HashName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), "set_HashName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::set_IterationCount
// Il2CppName: set_IterationCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::DeriveBytes::*)(int)>(&Mono::Security::X509::PKCS12::DeriveBytes::set_IterationCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), "set_IterationCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::set_Password
// Il2CppName: set_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::DeriveBytes::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::PKCS12::DeriveBytes::set_Password)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), "set_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::set_Salt
// Il2CppName: set_Salt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::DeriveBytes::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::PKCS12::DeriveBytes::set_Salt)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), "set_Salt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::X509::PKCS12::DeriveBytes::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::Adjust
// Il2CppName: Adjust
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::DeriveBytes::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>)>(&Mono::Security::X509::PKCS12::DeriveBytes::Adjust)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* aOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), "Adjust", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, aOff, b});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::Derive
// Il2CppName: Derive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::PKCS12::DeriveBytes::*)(::ArrayW<uint8_t>, int)>(&Mono::Security::X509::PKCS12::DeriveBytes::Derive)> {
  static const MethodInfo* get() {
    static auto* diversifier = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), "Derive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{diversifier, n});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::DeriveKey
// Il2CppName: DeriveKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::PKCS12::DeriveBytes::*)(int)>(&Mono::Security::X509::PKCS12::DeriveBytes::DeriveKey)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), "DeriveKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::DeriveIV
// Il2CppName: DeriveIV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::PKCS12::DeriveBytes::*)(int)>(&Mono::Security::X509::PKCS12::DeriveBytes::DeriveIV)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), "DeriveIV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::DeriveMAC
// Il2CppName: DeriveMAC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::PKCS12::DeriveBytes::*)(int)>(&Mono::Security::X509::PKCS12::DeriveBytes::DeriveMAC)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12::DeriveBytes*), "DeriveMAC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::DeriveBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
