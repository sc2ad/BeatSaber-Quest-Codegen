#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class HMAC;
}
// Type: System.Security.Cryptography::HMAC
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2938))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2930))
// CS Name: System.Security.Cryptography.HMAC
class CORDL_TYPE HMAC : public System::Security::Cryptography::KeyedHashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HMAC() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMAC", modifiers: " const&", def_value: None }]
constexpr HMAC(HMAC const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMAC", modifiers: "&&", def_value: None }]
constexpr HMAC(HMAC&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMAC(void* ptr) noexcept : System::Security::Cryptography::KeyedHashAlgorithm(ptr) {
}


  constexpr HMAC& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMAC& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMAC& operator=(HMAC&& o) noexcept = default;
  constexpr HMAC& operator=(HMAC const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_blockSizeValue, put=__set_blockSizeValue))  blockSizeValue;

constexpr void __set_blockSizeValue(int32_t value) ;

constexpr int32_t __get_blockSizeValue() const;

 ::StringW __declspec(property(get=__get_m_hashName, put=__set_m_hashName))  m_hashName;

constexpr void __set_m_hashName(::StringW value) ;

constexpr ::StringW __get_m_hashName() const;

 System::Security::Cryptography::HashAlgorithm __declspec(property(get=__get_m_hash1, put=__set_m_hash1))  m_hash1;

constexpr void __set_m_hash1(System::Security::Cryptography::HashAlgorithm value) ;

constexpr System::Security::Cryptography::HashAlgorithm __get_m_hash1() const;

 System::Security::Cryptography::HashAlgorithm __declspec(property(get=__get_m_hash2, put=__set_m_hash2))  m_hash2;

constexpr void __set_m_hash2(System::Security::Cryptography::HashAlgorithm value) ;

constexpr System::Security::Cryptography::HashAlgorithm __get_m_hash2() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_inner, put=__set_m_inner))  m_inner;

constexpr void __set_m_inner(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_inner() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_outer, put=__set_m_outer))  m_outer;

constexpr void __set_m_outer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_outer() const;

 bool __declspec(property(get=__get_m_hashing, put=__set_m_hashing))  m_hashing;

constexpr void __set_m_hashing(bool value) ;

constexpr bool __get_m_hashing() const;


// Properties

 int32_t __declspec(property(get=get_BlockSizeValue, put=set_BlockSizeValue))  BlockSizeValue;

 ::ArrayW<uint8_t> __declspec(property(get=get_Key, put=set_Key))  Key;


// Methods

/// @brief Method get_BlockSizeValue addr 0x22f2fcc size 0x8 virtual false final false
 int32_t get_BlockSizeValue() ;

/// @brief Method set_BlockSizeValue addr 0x22f2fd4 size 0x8 virtual false final false
 void set_BlockSizeValue(int32_t value) ;

/// @brief Method UpdateIOPadBuffers addr 0x22f2fdc size 0x164 virtual false final false
 void UpdateIOPadBuffers() ;

/// @brief Method InitializeKey addr 0x22f3140 size 0xd4 virtual false final false
 void InitializeKey(::ArrayW<uint8_t> key) ;

/// @brief Method get_Key addr 0x22f3214 size 0x78 virtual true final false
 ::ArrayW<uint8_t> get_Key() ;

/// @brief Method set_Key addr 0x22f328c size 0x74 virtual true final false
 void set_Key(::ArrayW<uint8_t> value) ;

/// @brief Method Create addr 0x22f3300 size 0x70 virtual false final false
static System::Security::Cryptography::HMAC Create() ;

/// @brief Method Initialize addr 0x22f3398 size 0x48 virtual true final false
 void Initialize() ;

/// @brief Method HashCore addr 0x22f33e0 size 0x88 virtual true final false
 void HashCore(::ArrayW<uint8_t> rgb, int32_t ib, int32_t cb) ;

/// @brief Method HashFinal addr 0x22f3468 size 0x144 virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method Dispose addr 0x22f35ac size 0x148 virtual true final false
 void Dispose(bool disposing) ;

// Ctor Parameters []
explicit HMAC() ;

/// @brief Method .ctor addr 0x22f373c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::HMAC);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMAC, "System.Security.Cryptography", "HMAC");
