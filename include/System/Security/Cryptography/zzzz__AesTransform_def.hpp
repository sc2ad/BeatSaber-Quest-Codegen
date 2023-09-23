#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class Aes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AesTransform;
}
// Type: System.Security.Cryptography::AesTransform
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14533))
// CS Name: System.Security.Cryptography.AesTransform
class CORDL_TYPE AesTransform : public Mono::Security::Cryptography::SymmetricTransform {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~AesTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "AesTransform", modifiers: " const&", def_value: None }]
constexpr AesTransform(AesTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AesTransform", modifiers: "&&", def_value: None }]
constexpr AesTransform(AesTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AesTransform(void* ptr) noexcept : Mono::Security::Cryptography::SymmetricTransform(ptr) {
}


  constexpr AesTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AesTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AesTransform& operator=(AesTransform&& o) noexcept = default;
  constexpr AesTransform& operator=(AesTransform const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_expandedKey, put=__set_expandedKey))  expandedKey;

constexpr void __set_expandedKey(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_expandedKey() const;

 int32_t __declspec(property(get=__get_Nk, put=__set_Nk))  Nk;

constexpr void __set_Nk(int32_t value) ;

constexpr int32_t __get_Nk() const;

 int32_t __declspec(property(get=__get_Nr, put=__set_Nr))  Nr;

constexpr void __set_Nr(int32_t value) ;

constexpr int32_t __get_Nr() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_Rcon, put=__set_Rcon))  Rcon;

static void __set_Rcon(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_Rcon() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_SBox, put=__set_SBox))  SBox;

static void __set_SBox(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_SBox() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_iSBox, put=__set_iSBox))  iSBox;

static void __set_iSBox(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_iSBox() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_T0, put=__set_T0))  T0;

static void __set_T0(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_T0() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_T1, put=__set_T1))  T1;

static void __set_T1(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_T1() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_T2, put=__set_T2))  T2;

static void __set_T2(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_T2() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_T3, put=__set_T3))  T3;

static void __set_T3(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_T3() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_iT0, put=__set_iT0))  iT0;

static void __set_iT0(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_iT0() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_iT1, put=__set_iT1))  iT1;

static void __set_iT1(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_iT1() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_iT2, put=__set_iT2))  iT2;

static void __set_iT2(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_iT2() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_iT3, put=__set_iT3))  iT3;

static void __set_iT3(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_iT3() ;


// Methods

// Ctor Parameters [CppParam { name: "algo", ty: "System::Security::Cryptography::Aes", modifiers: "", def_value: None }, CppParam { name: "encryption", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit AesTransform(System::Security::Cryptography::Aes algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0x267c0f8 size 0x6f4 virtual false final false
 void _ctor(System::Security::Cryptography::Aes algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method ECB addr 0x267cb08 size 0x14 virtual true final false
 void ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method SubByte addr 0x267ca44 size 0xc4 virtual false final false
 uint32_t SubByte(uint32_t a) ;

/// @brief Method Encrypt128 addr 0x267cb1c size 0x1e2c virtual false final false
 void Encrypt128(::ArrayW<uint8_t> indata, ::ArrayW<uint8_t> outdata, ::ArrayW<uint32_t> ekey) ;

/// @brief Method Decrypt128 addr 0x267e948 size 0x1df0 virtual false final false
 void Decrypt128(::ArrayW<uint8_t> indata, ::ArrayW<uint8_t> outdata, ::ArrayW<uint32_t> ekey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::AesTransform);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AesTransform, "System.Security.Cryptography", "AesTransform");
