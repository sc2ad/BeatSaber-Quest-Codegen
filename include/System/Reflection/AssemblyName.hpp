// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.InteropServices._AssemblyName
#include "System/Runtime/InteropServices/_AssemblyName.hpp"
// Including type: System.Reflection.AssemblyNameFlags
#include "System/Reflection/AssemblyNameFlags.hpp"
// Including type: System.Configuration.Assemblies.AssemblyHashAlgorithm
#include "System/Configuration/Assemblies/AssemblyHashAlgorithm.hpp"
// Including type: System.Configuration.Assemblies.AssemblyVersionCompatibility
#include "System/Configuration/Assemblies/AssemblyVersionCompatibility.hpp"
// Including type: System.Reflection.ProcessorArchitecture
#include "System/Reflection/ProcessorArchitecture.hpp"
// Including type: System.Reflection.AssemblyContentType
#include "System/Reflection/AssemblyContentType.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: StrongNameKeyPair
  class StrongNameKeyPair;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: MonoAssemblyName
  struct MonoAssemblyName;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyName
  class AssemblyName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::AssemblyName);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyName*, "System.Reflection", "AssemblyName");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.AssemblyName
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComDefaultInterfaceAttribute] Offset: 1188824
  // [ClassInterfaceAttribute] Offset: 1188824
  // [ComVisibleAttribute] Offset: 1188824
  class AssemblyName : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Runtime::Serialization::ISerializable, public ::System::Runtime::Serialization::IDeserializationCallback, public ::System::Runtime::InteropServices::_AssemblyName*/ {
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
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String codebase
    // Size: 0x8
    // Offset: 0x18
    ::StringW codebase;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 major
    // Size: 0x4
    // Offset: 0x20
    int major;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 minor
    // Size: 0x4
    // Offset: 0x24
    int minor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 build
    // Size: 0x4
    // Offset: 0x28
    int build;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 revision
    // Size: 0x4
    // Offset: 0x2C
    int revision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Globalization.CultureInfo cultureinfo
    // Size: 0x8
    // Offset: 0x30
    ::System::Globalization::CultureInfo* cultureinfo;
    // Field size check
    static_assert(sizeof(::System::Globalization::CultureInfo*) == 0x8);
    // private System.Reflection.AssemblyNameFlags flags
    // Size: 0x4
    // Offset: 0x38
    ::System::Reflection::AssemblyNameFlags flags;
    // Field size check
    static_assert(sizeof(::System::Reflection::AssemblyNameFlags) == 0x4);
    // private System.Configuration.Assemblies.AssemblyHashAlgorithm hashalg
    // Size: 0x4
    // Offset: 0x3C
    ::System::Configuration::Assemblies::AssemblyHashAlgorithm hashalg;
    // Field size check
    static_assert(sizeof(::System::Configuration::Assemblies::AssemblyHashAlgorithm) == 0x4);
    // private System.Reflection.StrongNameKeyPair keypair
    // Size: 0x8
    // Offset: 0x40
    ::System::Reflection::StrongNameKeyPair* keypair;
    // Field size check
    static_assert(sizeof(::System::Reflection::StrongNameKeyPair*) == 0x8);
    // private System.Byte[] publicKey
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> publicKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] keyToken
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> keyToken;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Configuration.Assemblies.AssemblyVersionCompatibility versioncompat
    // Size: 0x4
    // Offset: 0x58
    ::System::Configuration::Assemblies::AssemblyVersionCompatibility versioncompat;
    // Field size check
    static_assert(sizeof(::System::Configuration::Assemblies::AssemblyVersionCompatibility) == 0x4);
    // Padding between fields: versioncompat and: version
    char __padding12[0x4] = {};
    // private System.Version version
    // Size: 0x8
    // Offset: 0x60
    ::System::Version* version;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.Reflection.ProcessorArchitecture processor_architecture
    // Size: 0x4
    // Offset: 0x68
    ::System::Reflection::ProcessorArchitecture processor_architecture;
    // Field size check
    static_assert(sizeof(::System::Reflection::ProcessorArchitecture) == 0x4);
    // private System.Reflection.AssemblyContentType contentType
    // Size: 0x4
    // Offset: 0x6C
    ::System::Reflection::AssemblyContentType contentType;
    // Field size check
    static_assert(sizeof(::System::Reflection::AssemblyContentType) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IDeserializationCallback
    operator ::System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_AssemblyName
    operator ::System::Runtime::InteropServices::_AssemblyName() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_AssemblyName*>(this);
    }
    // Get instance field reference: private System.String name
    ::StringW& dyn_name();
    // Get instance field reference: private System.String codebase
    ::StringW& dyn_codebase();
    // Get instance field reference: private System.Int32 major
    int& dyn_major();
    // Get instance field reference: private System.Int32 minor
    int& dyn_minor();
    // Get instance field reference: private System.Int32 build
    int& dyn_build();
    // Get instance field reference: private System.Int32 revision
    int& dyn_revision();
    // Get instance field reference: private System.Globalization.CultureInfo cultureinfo
    ::System::Globalization::CultureInfo*& dyn_cultureinfo();
    // Get instance field reference: private System.Reflection.AssemblyNameFlags flags
    ::System::Reflection::AssemblyNameFlags& dyn_flags();
    // Get instance field reference: private System.Configuration.Assemblies.AssemblyHashAlgorithm hashalg
    ::System::Configuration::Assemblies::AssemblyHashAlgorithm& dyn_hashalg();
    // Get instance field reference: private System.Reflection.StrongNameKeyPair keypair
    ::System::Reflection::StrongNameKeyPair*& dyn_keypair();
    // Get instance field reference: private System.Byte[] publicKey
    ::ArrayW<uint8_t>& dyn_publicKey();
    // Get instance field reference: private System.Byte[] keyToken
    ::ArrayW<uint8_t>& dyn_keyToken();
    // Get instance field reference: private System.Configuration.Assemblies.AssemblyVersionCompatibility versioncompat
    ::System::Configuration::Assemblies::AssemblyVersionCompatibility& dyn_versioncompat();
    // Get instance field reference: private System.Version version
    ::System::Version*& dyn_version();
    // Get instance field reference: private System.Reflection.ProcessorArchitecture processor_architecture
    ::System::Reflection::ProcessorArchitecture& dyn_processor_architecture();
    // Get instance field reference: private System.Reflection.AssemblyContentType contentType
    ::System::Reflection::AssemblyContentType& dyn_contentType();
    // public System.String get_Name()
    // Offset: 0x21610C0
    ::StringW get_Name();
    // public System.Globalization.CultureInfo get_CultureInfo()
    // Offset: 0x21610C8
    ::System::Globalization::CultureInfo* get_CultureInfo();
    // public System.Reflection.AssemblyNameFlags get_Flags()
    // Offset: 0x21610D0
    ::System::Reflection::AssemblyNameFlags get_Flags();
    // public System.String get_FullName()
    // Offset: 0x21610D8
    ::StringW get_FullName();
    // public System.Version get_Version()
    // Offset: 0x21614F0
    ::System::Version* get_Version();
    // public System.Void set_Version(System.Version value)
    // Offset: 0x21614F8
    void set_Version(::System::Version* value);
    // private System.Boolean get_IsPublicKeyValid()
    // Offset: 0x21616C8
    bool get_IsPublicKeyValid();
    // public System.Void .ctor(System.String assemblyName)
    // Offset: 0x2160B38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyName* New_ctor(::StringW assemblyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyName*, creationType>(assemblyName)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc)
    // Offset: 0x2160D3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyName* New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyName*, creationType>(si, sc)));
    }
    // static private System.Boolean ParseAssemblyName(System.IntPtr name, out Mono.MonoAssemblyName aname, out System.Boolean is_version_definited, out System.Boolean is_token_defined)
    // Offset: 0x2160B34
    static bool ParseAssemblyName(::System::IntPtr name, ByRef<::Mono::MonoAssemblyName> aname, ByRef<bool> is_version_definited, ByRef<bool> is_token_defined);
    // public System.Byte[] GetPublicKeyToken()
    // Offset: 0x21615E0
    ::ArrayW<uint8_t> GetPublicKeyToken();
    // private System.Byte[] InternalGetPublicKeyToken()
    // Offset: 0x2161408
    ::ArrayW<uint8_t> InternalGetPublicKeyToken();
    // static private System.Void get_public_token(System.Byte* token, System.Byte* pubkey, System.Int32 len)
    // Offset: 0x21617EC
    static void get_public_token(uint8_t* token, uint8_t* pubkey, int len);
    // private System.Byte[] ComputePublicKeyToken()
    // Offset: 0x2161758
    ::ArrayW<uint8_t> ComputePublicKeyToken();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x21617F0
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Object Clone()
    // Offset: 0x2161A58
    ::Il2CppObject* Clone();
    // public System.Void OnDeserialization(System.Object sender)
    // Offset: 0x2161B30
    void OnDeserialization(::Il2CppObject* sender);
    // static private Mono.MonoAssemblyName* GetNativeName(System.IntPtr assembly_ptr)
    // Offset: 0x2161B38
    static ::Mono::MonoAssemblyName* GetNativeName(::System::IntPtr assembly_ptr);
    // System.Void FillName(Mono.MonoAssemblyName* native, System.String codeBase, System.Boolean addVersion, System.Boolean addPublickey, System.Boolean defaultToken, System.Boolean assemblyRef)
    // Offset: 0x21603BC
    void FillName(::Mono::MonoAssemblyName* native, ::StringW codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef);
    // static System.Reflection.AssemblyName Create(System.Reflection.Assembly assembly, System.Boolean fillCodebase)
    // Offset: 0x2161B3C
    static ::System::Reflection::AssemblyName* Create(::System::Reflection::Assembly* assembly, bool fillCodebase);
    // public System.Void .ctor()
    // Offset: 0x21603B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyName* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyName*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x21615AC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Reflection.AssemblyName
  #pragma pack(pop)
  static check_size<sizeof(AssemblyName), 108 + sizeof(::System::Reflection::AssemblyContentType)> __System_Reflection_AssemblyNameSizeCheck;
  static_assert(sizeof(AssemblyName) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyName::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::get_CultureInfo
// Il2CppName: get_CultureInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::get_CultureInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "get_CultureInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::get_Flags
// Il2CppName: get_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::AssemblyNameFlags (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::get_Flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "get_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::get_FullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::set_Version
// Il2CppName: set_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::AssemblyName::*)(::System::Version*)>(&System::Reflection::AssemblyName::set_Version)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "set_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::get_IsPublicKeyValid
// Il2CppName: get_IsPublicKeyValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::get_IsPublicKeyValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "get_IsPublicKeyValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::AssemblyName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::AssemblyName::ParseAssemblyName
// Il2CppName: ParseAssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<::Mono::MonoAssemblyName>, ByRef<bool>, ByRef<bool>)>(&System::Reflection::AssemblyName::ParseAssemblyName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* aname = &::il2cpp_utils::GetClassFromName("Mono", "MonoAssemblyName")->this_arg;
    static auto* is_version_definited = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* is_token_defined = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "ParseAssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, aname, is_version_definited, is_token_defined});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::GetPublicKeyToken
// Il2CppName: GetPublicKeyToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::GetPublicKeyToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "GetPublicKeyToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::InternalGetPublicKeyToken
// Il2CppName: InternalGetPublicKeyToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::InternalGetPublicKeyToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "InternalGetPublicKeyToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::get_public_token
// Il2CppName: get_public_token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, int)>(&System::Reflection::AssemblyName::get_public_token)> {
  static const MethodInfo* get() {
    static auto* token = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* pubkey = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "get_public_token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token, pubkey, len});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::ComputePublicKeyToken
// Il2CppName: ComputePublicKeyToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::ComputePublicKeyToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "ComputePublicKeyToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::AssemblyName::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Reflection::AssemblyName::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::OnDeserialization
// Il2CppName: OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::AssemblyName::*)(::Il2CppObject*)>(&System::Reflection::AssemblyName::OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::GetNativeName
// Il2CppName: GetNativeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::MonoAssemblyName* (*)(::System::IntPtr)>(&System::Reflection::AssemblyName::GetNativeName)> {
  static const MethodInfo* get() {
    static auto* assembly_ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "GetNativeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly_ptr});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::FillName
// Il2CppName: FillName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::AssemblyName::*)(::Mono::MonoAssemblyName*, ::StringW, bool, bool, bool, bool)>(&System::Reflection::AssemblyName::FillName)> {
  static const MethodInfo* get() {
    static auto* native = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono", "MonoAssemblyName"))->byval_arg;
    static auto* codeBase = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* addVersion = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addPublickey = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* defaultToken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* assemblyRef = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "FillName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{native, codeBase, addVersion, addPublickey, defaultToken, assemblyRef});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::AssemblyName* (*)(::System::Reflection::Assembly*, bool)>(&System::Reflection::AssemblyName::Create)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* fillCodebase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly, fillCodebase});
  }
};
// Writing MetadataGetter for method: System::Reflection::AssemblyName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::AssemblyName::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::AssemblyName::*)()>(&System::Reflection::AssemblyName::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::AssemblyName*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
