#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class BCrypt;
}
// Type: Org.BouncyCastle.Crypto.Generators::BCrypt
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(887))
// CS Name: Org.BouncyCastle.Crypto.Generators.BCrypt
class CORDL_TYPE BCrypt : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BCrypt() = default;

// Ctor Parameters [CppParam { name: "", ty: "BCrypt", modifiers: " const&", def_value: None }]
constexpr BCrypt(BCrypt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BCrypt", modifiers: "&&", def_value: None }]
constexpr BCrypt(BCrypt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BCrypt(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BCrypt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BCrypt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BCrypt& operator=(BCrypt&& o) noexcept = default;
  constexpr BCrypt& operator=(BCrypt const& o) noexcept = default;
                


// Fields

/// @brief Field MAGIC_STRING_LENGTH offset 0
static constexpr int32_t  MAGIC_STRING_LENGTH{6};

/// @brief Field ROUNDS offset 0
static constexpr int32_t  ROUNDS{16};

/// @brief Field SBOX_SK offset 0
static constexpr int32_t  SBOX_SK{256};

/// @brief Field SBOX_SK2 offset 0
static constexpr int32_t  SBOX_SK2{512};

/// @brief Field SBOX_SK3 offset 0
static constexpr int32_t  SBOX_SK3{768};

/// @brief Field P_SZ offset 0
static constexpr int32_t  P_SZ{18};

/// @brief Field SALT_SIZE_BYTES offset 0
static constexpr int32_t  SALT_SIZE_BYTES{16};

/// @brief Field MIN_COST offset 0
static constexpr int32_t  MIN_COST{4};

/// @brief Field MAX_COST offset 0
static constexpr int32_t  MAX_COST{31};

/// @brief Field MAX_PASSWORD_BYTES offset 0
static constexpr int32_t  MAX_PASSWORD_BYTES{72};

static ::ArrayW<uint32_t> __declspec(property(get=__get_MAGIC_STRING, put=__set_MAGIC_STRING))  MAGIC_STRING;

static void __set_MAGIC_STRING(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_MAGIC_STRING() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KP, put=__set_KP))  KP;

static void __set_KP(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KP() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KS0, put=__set_KS0))  KS0;

static void __set_KS0(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KS0() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KS1, put=__set_KS1))  KS1;

static void __set_KS1(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KS1() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KS2, put=__set_KS2))  KS2;

static void __set_KS2(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KS2() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KS3, put=__set_KS3))  KS3;

static void __set_KS3(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KS3() ;

 ::ArrayW<uint32_t> __declspec(property(get=__get_S, put=__set_S))  S;

constexpr void __set_S(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_S() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_P, put=__set_P))  P;

constexpr void __set_P(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_P() const;


// Methods

static Org::BouncyCastle::Crypto::Generators::BCrypt New_ctor() ;

/// @brief Method .ctor addr 0xe69970 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method F addr 0xe699dc size 0x84 virtual false final false
 uint32_t F(uint32_t x) ;

/// @brief Method ProcessTable addr 0xe69a60 size 0x134 virtual false final false
 void ProcessTable(uint32_t xl, uint32_t xr, ::ArrayW<uint32_t> table) ;

/// @brief Method InitState addr 0xe69b94 size 0x100 virtual false final false
 void InitState() ;

/// @brief Method CyclicXorKey addr 0xe69c94 size 0x88 virtual false final false
 void CyclicXorKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptMagicString addr 0xe69d1c size 0x2d0 virtual false final false
 ::ArrayW<uint8_t> EncryptMagicString() ;

/// @brief Method ProcessTableWithSalt addr 0xe69fec size 0x25c virtual false final false
 void ProcessTableWithSalt(::ArrayW<uint32_t> table, ::ArrayW<uint32_t> salt32Bit, uint32_t iv1, uint32_t iv2) ;

/// @brief Method DeriveRawKey addr 0xe6a248 size 0x320 virtual false final false
 ::ArrayW<uint8_t> DeriveRawKey(int32_t cost, ::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> psw) ;

/// @brief Method PasswordToByteArray addr 0xe6a568 size 0x70 virtual false final false
static ::ArrayW<uint8_t> PasswordToByteArray(::ArrayW<char16_t> password) ;

/// @brief Method Generate addr 0xe6a5d8 size 0x1c8 virtual false final false
static ::ArrayW<uint8_t> Generate(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int32_t cost) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::BCrypt);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::BCrypt, "Org.BouncyCastle.Crypto.Generators", "BCrypt");
