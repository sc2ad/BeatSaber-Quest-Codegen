#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
struct AssemblyNameFlags;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class StrongNameKeyPair;
}
namespace System::Configuration::Assemblies {
struct AssemblyVersionCompatibility;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::InteropServices {
class _AssemblyName;
}
namespace Mono {
struct MonoAssemblyName;
}
namespace System {
class Version;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class ICloneable;
}
namespace System::Configuration::Assemblies {
struct AssemblyHashAlgorithm;
}
namespace System::Reflection {
struct AssemblyContentType;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct ProcessorArchitecture;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Reflection {
class AssemblyName;
}
// Type: System.Reflection::AssemblyName
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3504))
// CS Name: System.Reflection.AssemblyName
class CORDL_TYPE AssemblyName : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief Convert operator to ::System::Runtime::InteropServices::_AssemblyName
constexpr operator  ::System::Runtime::InteropServices::_AssemblyName() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~AssemblyName() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyName", modifiers: " const&", def_value: None }]
constexpr AssemblyName(AssemblyName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyName", modifiers: "&&", def_value: None }]
constexpr AssemblyName(AssemblyName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyName(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssemblyName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyName& operator=(AssemblyName&& o) noexcept = default;
  constexpr AssemblyName& operator=(AssemblyName const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_codebase, put=__set_codebase))  codebase;

constexpr void __set_codebase(::StringW value) ;

constexpr ::StringW __get_codebase() const;

 int32_t __declspec(property(get=__get_major, put=__set_major))  major;

constexpr void __set_major(int32_t value) ;

constexpr int32_t __get_major() const;

 int32_t __declspec(property(get=__get_minor, put=__set_minor))  minor;

constexpr void __set_minor(int32_t value) ;

constexpr int32_t __get_minor() const;

 int32_t __declspec(property(get=__get_build, put=__set_build))  build;

constexpr void __set_build(int32_t value) ;

constexpr int32_t __get_build() const;

 int32_t __declspec(property(get=__get_revision, put=__set_revision))  revision;

constexpr void __set_revision(int32_t value) ;

constexpr int32_t __get_revision() const;

 ::System::Globalization::CultureInfo __declspec(property(get=__get_cultureinfo, put=__set_cultureinfo))  cultureinfo;

constexpr void __set_cultureinfo(::System::Globalization::CultureInfo value) ;

constexpr ::System::Globalization::CultureInfo __get_cultureinfo() const;

 ::System::Reflection::AssemblyNameFlags __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(::System::Reflection::AssemblyNameFlags value) ;

constexpr ::System::Reflection::AssemblyNameFlags __get_flags() const;

 ::System::Configuration::Assemblies::AssemblyHashAlgorithm __declspec(property(get=__get_hashalg, put=__set_hashalg))  hashalg;

constexpr void __set_hashalg(::System::Configuration::Assemblies::AssemblyHashAlgorithm value) ;

constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm __get_hashalg() const;

 ::System::Reflection::StrongNameKeyPair __declspec(property(get=__get_keypair, put=__set_keypair))  keypair;

constexpr void __set_keypair(::System::Reflection::StrongNameKeyPair value) ;

constexpr ::System::Reflection::StrongNameKeyPair __get_keypair() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_publicKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_keyToken, put=__set_keyToken))  keyToken;

constexpr void __set_keyToken(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_keyToken() const;

 ::System::Configuration::Assemblies::AssemblyVersionCompatibility __declspec(property(get=__get_versioncompat, put=__set_versioncompat))  versioncompat;

constexpr void __set_versioncompat(::System::Configuration::Assemblies::AssemblyVersionCompatibility value) ;

constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility __get_versioncompat() const;

 ::System::Version __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::System::Version value) ;

constexpr ::System::Version __get_version() const;

 ::System::Reflection::ProcessorArchitecture __declspec(property(get=__get_processor_architecture, put=__set_processor_architecture))  processor_architecture;

constexpr void __set_processor_architecture(::System::Reflection::ProcessorArchitecture value) ;

constexpr ::System::Reflection::ProcessorArchitecture __get_processor_architecture() const;

 ::System::Reflection::AssemblyContentType __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(::System::Reflection::AssemblyContentType value) ;

constexpr ::System::Reflection::AssemblyContentType __get_contentType() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::System::Globalization::CultureInfo __declspec(property(get=get_CultureInfo))  CultureInfo;

 ::System::Reflection::AssemblyNameFlags __declspec(property(get=get_Flags))  Flags;

 ::StringW __declspec(property(get=get_FullName))  FullName;

 ::System::Version __declspec(property(get=get_Version, put=set_Version))  Version;

 bool __declspec(property(get=get_IsPublicKeyValid))  IsPublicKeyValid;


// Methods

// Ctor Parameters []
explicit AssemblyName() ;

/// @brief Method .ctor addr 0x238224c size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method ParseAssemblyName addr 0x238226c size 0x4 virtual false final false
static bool ParseAssemblyName(::cordl_internals::intptr_t name, ByRef<::Mono::MonoAssemblyName> aname, ByRef<bool> is_version_definited, ByRef<bool> is_token_defined) ;

// Ctor Parameters [CppParam { name: "assemblyName", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssemblyName(::StringW assemblyName) ;

/// @brief Method .ctor addr 0x2373e30 size 0x298 virtual false final false
 void _ctor(::StringW assemblyName) ;

// Ctor Parameters [CppParam { name: "si", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "sc", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit AssemblyName(::System::Runtime::Serialization::SerializationInfo si, ::System::Runtime::Serialization::StreamingContext sc) ;

/// @brief Method .ctor addr 0x2382510 size 0x508 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo si, ::System::Runtime::Serialization::StreamingContext sc) ;

/// @brief Method get_Name addr 0x2382a18 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_CultureInfo addr 0x2382a20 size 0x8 virtual false final false
 ::System::Globalization::CultureInfo get_CultureInfo() ;

/// @brief Method get_Flags addr 0x2382a28 size 0x8 virtual false final false
 ::System::Reflection::AssemblyNameFlags get_Flags() ;

/// @brief Method get_FullName addr 0x2382a30 size 0x35c virtual false final false
 ::StringW get_FullName() ;

/// @brief Method get_Version addr 0x2382e74 size 0x8 virtual false final false
 ::System::Version get_Version() ;

/// @brief Method set_Version addr 0x2382e7c size 0x4c virtual false final false
 void set_Version(::System::Version value) ;

/// @brief Method ToString addr 0x2382ec8 size 0x28 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetPublicKeyToken addr 0x23740c8 size 0xe8 virtual false final false
 ::ArrayW<uint8_t> GetPublicKeyToken() ;

/// @brief Method get_IsPublicKeyValid addr 0x2382ef0 size 0x84 virtual false final false
 bool get_IsPublicKeyValid() ;

/// @brief Method InternalGetPublicKeyToken addr 0x2382d8c size 0xe8 virtual false final false
 ::ArrayW<uint8_t> InternalGetPublicKeyToken() ;

/// @brief Method get_public_token addr 0x2383000 size 0x4 virtual false final false
static void get_public_token(void* token, void* pubkey, int32_t len) ;

/// @brief Method ComputePublicKeyToken addr 0x2382f74 size 0x8c virtual false final false
 ::ArrayW<uint8_t> ComputePublicKeyToken() ;

/// @brief Method GetObjectData addr 0x2383004 size 0x330 virtual true final true
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Clone addr 0x2383334 size 0xb0 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method OnDeserialization addr 0x23833e4 size 0x8 virtual true final true
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method GetNativeName addr 0x23833ec size 0x4 virtual false final false
static void* GetNativeName(::cordl_internals::intptr_t assembly_ptr) ;

/// @brief Method FillName addr 0x2382270 size 0x2a0 virtual false final false
 void FillName(void* native, ::StringW codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef) ;

/// @brief Method Create addr 0x23833f0 size 0xcc virtual false final false
static ::System::Reflection::AssemblyName Create(::System::Reflection::Assembly assembly, bool fillCodebase) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::AssemblyName);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyName, "System.Reflection", "AssemblyName");
