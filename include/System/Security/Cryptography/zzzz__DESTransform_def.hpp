#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DESTransform;
}
// Type: System.Security.Cryptography::DESTransform
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2974))
// CS Name: System.Security.Cryptography.DESTransform
class CORDL_TYPE DESTransform : public ::Mono::Security::Cryptography::SymmetricTransform {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~DESTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "DESTransform", modifiers: " const&", def_value: None }]
constexpr DESTransform(DESTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DESTransform", modifiers: "&&", def_value: None }]
constexpr DESTransform(DESTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DESTransform(void* ptr) noexcept : ::Mono::Security::Cryptography::SymmetricTransform(ptr) {
}


  constexpr DESTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DESTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DESTransform& operator=(DESTransform&& o) noexcept = default;
  constexpr DESTransform& operator=(DESTransform const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_KEY_BIT_SIZE, put=__set_KEY_BIT_SIZE))  KEY_BIT_SIZE;

static void __set_KEY_BIT_SIZE(int32_t value) ;

static int32_t __get_KEY_BIT_SIZE() ;

static int32_t __declspec(property(get=__get_KEY_BYTE_SIZE, put=__set_KEY_BYTE_SIZE))  KEY_BYTE_SIZE;

static void __set_KEY_BYTE_SIZE(int32_t value) ;

static int32_t __get_KEY_BYTE_SIZE() ;

static int32_t __declspec(property(get=__get_BLOCK_BIT_SIZE, put=__set_BLOCK_BIT_SIZE))  BLOCK_BIT_SIZE;

static void __set_BLOCK_BIT_SIZE(int32_t value) ;

static int32_t __get_BLOCK_BIT_SIZE() ;

static int32_t __declspec(property(get=__get_BLOCK_BYTE_SIZE, put=__set_BLOCK_BYTE_SIZE))  BLOCK_BYTE_SIZE;

static void __set_BLOCK_BYTE_SIZE(int32_t value) ;

static int32_t __get_BLOCK_BYTE_SIZE() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_keySchedule, put=__set_keySchedule))  keySchedule;

constexpr void __set_keySchedule(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_keySchedule() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_byteBuff, put=__set_byteBuff))  byteBuff;

constexpr void __set_byteBuff(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_byteBuff() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_dwordBuff, put=__set_dwordBuff))  dwordBuff;

constexpr void __set_dwordBuff(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_dwordBuff() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_spBoxes, put=__set_spBoxes))  spBoxes;

static void __set_spBoxes(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_spBoxes() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_PC1, put=__set_PC1))  PC1;

static void __set_PC1(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_PC1() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_leftRotTotal, put=__set_leftRotTotal))  leftRotTotal;

static void __set_leftRotTotal(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_leftRotTotal() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_PC2, put=__set_PC2))  PC2;

static void __set_PC2(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_PC2() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_ipTab, put=__set_ipTab))  ipTab;

static void __set_ipTab(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_ipTab() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_fpTab, put=__set_fpTab))  fpTab;

static void __set_fpTab(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_fpTab() ;


// Methods

// Ctor Parameters [CppParam { name: "symmAlgo", ty: "::System::Security::Cryptography::SymmetricAlgorithm", modifiers: "", def_value: None }, CppParam { name: "encryption", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DESTransform(::System::Security::Cryptography::SymmetricAlgorithm symmAlgo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0x23040c4 size 0x228 virtual false final false
 void _ctor(::System::Security::Cryptography::SymmetricAlgorithm symmAlgo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method CipherFunct addr 0x2304750 size 0x230 virtual false final false
 uint32_t CipherFunct(uint32_t r, int32_t n) ;

/// @brief Method Permutation addr 0x2304980 size 0x324 virtual false final false
static void Permutation(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, ::ArrayW<uint32_t> permTab, bool preSwap) ;

/// @brief Method BSwap addr 0x2304ca4 size 0x78 virtual false final false
static void BSwap(::ArrayW<uint8_t> byteBuff) ;

/// @brief Method SetKey addr 0x23043c4 size 0x38c virtual false final false
 void SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method ProcessBlock addr 0x2304d1c size 0x388 virtual false final false
 void ProcessBlock(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method ECB addr 0x23050a4 size 0xa4 virtual true final false
 void ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method GetStrongKey addr 0x23042ec size 0xd8 virtual false final false
static ::ArrayW<uint8_t> GetStrongKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::DESTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DESTransform, "System.Security.Cryptography", "DESTransform");
