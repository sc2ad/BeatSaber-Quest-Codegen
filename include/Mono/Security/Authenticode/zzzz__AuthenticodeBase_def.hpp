#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Mono::Security::Authenticode {
class AuthenticodeBase;
}
// Type: Mono.Security.Authenticode::AuthenticodeBase
namespace Mono::Security::Authenticode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14012))
// CS Name: Mono.Security.Authenticode.AuthenticodeBase
class CORDL_TYPE AuthenticodeBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AuthenticodeBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticodeBase", modifiers: " const&", def_value: None }]
constexpr AuthenticodeBase(AuthenticodeBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticodeBase", modifiers: "&&", def_value: None }]
constexpr AuthenticodeBase(AuthenticodeBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticodeBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AuthenticodeBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticodeBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticodeBase& operator=(AuthenticodeBase&& o) noexcept = default;
  constexpr AuthenticodeBase& operator=(AuthenticodeBase const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_fileblock, put=__set_fileblock))  fileblock;

constexpr void __set_fileblock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fileblock() const;

 ::System::IO::Stream __declspec(property(get=__get_fs, put=__set_fs))  fs;

constexpr void __set_fs(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_fs() const;

 int32_t __declspec(property(get=__get_blockNo, put=__set_blockNo))  blockNo;

constexpr void __set_blockNo(int32_t value) ;

constexpr int32_t __get_blockNo() const;

 int32_t __declspec(property(get=__get_blockLength, put=__set_blockLength))  blockLength;

constexpr void __set_blockLength(int32_t value) ;

constexpr int32_t __get_blockLength() const;

 int32_t __declspec(property(get=__get_peOffset, put=__set_peOffset))  peOffset;

constexpr void __set_peOffset(int32_t value) ;

constexpr int32_t __get_peOffset() const;

 int32_t __declspec(property(get=__get_dirSecurityOffset, put=__set_dirSecurityOffset))  dirSecurityOffset;

constexpr void __set_dirSecurityOffset(int32_t value) ;

constexpr int32_t __get_dirSecurityOffset() const;

 int32_t __declspec(property(get=__get_dirSecuritySize, put=__set_dirSecuritySize))  dirSecuritySize;

constexpr void __set_dirSecuritySize(int32_t value) ;

constexpr int32_t __get_dirSecuritySize() const;

 int32_t __declspec(property(get=__get_coffSymbolTableOffset, put=__set_coffSymbolTableOffset))  coffSymbolTableOffset;

constexpr void __set_coffSymbolTableOffset(int32_t value) ;

constexpr int32_t __get_coffSymbolTableOffset() const;

 bool __declspec(property(get=__get_pe64, put=__set_pe64))  pe64;

constexpr void __set_pe64(bool value) ;

constexpr bool __get_pe64() const;


// Properties

 int32_t __declspec(property(get=get_PEOffset))  PEOffset;


// Methods

// Ctor Parameters []
explicit AuthenticodeBase() ;

/// @brief Method .ctor addr 0x229cdc8 size 0x5c virtual false final false
 void _ctor() ;

/// @brief Method get_PEOffset addr 0x229ce24 size 0x28 virtual false final false
 int32_t get_PEOffset() ;

/// @brief Method Open addr 0x229cf24 size 0x94 virtual false final false
 void Open(::StringW filename) ;

/// @brief Method Open addr 0x229cfe4 size 0x8c virtual false final false
 void Open(::ArrayW<uint8_t> rawdata) ;

/// @brief Method Close addr 0x229cfb8 size 0x2c virtual false final false
 void Close() ;

/// @brief Method ReadFirstBlock addr 0x229ce4c size 0xd8 virtual false final false
 void ReadFirstBlock() ;

/// @brief Method ProcessFirstBlock addr 0x229d070 size 0x240 virtual false final false
 int32_t ProcessFirstBlock() ;

/// @brief Method GetSecurityEntry addr 0x229d2b0 size 0xd0 virtual false final false
 ::ArrayW<uint8_t> GetSecurityEntry() ;

/// @brief Method GetHash addr 0x229d380 size 0x488 virtual false final false
 ::ArrayW<uint8_t> GetHash(::System::Security::Cryptography::HashAlgorithm hash) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Authenticode
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Authenticode::AuthenticodeBase);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Authenticode::AuthenticodeBase, "Mono.Security.Authenticode", "AuthenticodeBase");
