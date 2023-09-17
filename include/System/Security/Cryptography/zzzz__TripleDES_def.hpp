#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TripleDES;
}
// Type: System.Security.Cryptography::TripleDES
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2969))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2970))
// CS Name: System.Security.Cryptography.TripleDES
class CORDL_TYPE TripleDES : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TripleDES() = default;

// Ctor Parameters [CppParam { name: "", ty: "TripleDES", modifiers: " const&", def_value: None }]
constexpr TripleDES(TripleDES const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TripleDES", modifiers: "&&", def_value: None }]
constexpr TripleDES(TripleDES&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TripleDES(void* ptr) noexcept : ::System::Security::Cryptography::SymmetricAlgorithm(ptr) {
}


  constexpr TripleDES& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TripleDES& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TripleDES& operator=(TripleDES&& o) noexcept = default;
  constexpr TripleDES& operator=(TripleDES const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalBlockSizes, put=__set_s_legalBlockSizes))  s_legalBlockSizes;

static void __set_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<::System::Security::Cryptography::KeySizes> __get_s_legalBlockSizes() ;

static ::ArrayW<::System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalKeySizes, put=__set_s_legalKeySizes))  s_legalKeySizes;

static void __set_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<::System::Security::Cryptography::KeySizes> __get_s_legalKeySizes() ;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Key, put=set_Key))  Key;


// Methods

// Ctor Parameters []
explicit TripleDES() ;

/// @brief Method .ctor addr 0x22ffbc0 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method get_Key addr 0x22ffc48 size 0xc8 virtual true final false
 ::ArrayW<uint8_t> get_Key() ;

/// @brief Method set_Key addr 0x22ffe4c size 0x1e4 virtual true final false
 void set_Key(::ArrayW<uint8_t> value) ;

/// @brief Method Create addr 0x2300030 size 0x58 virtual false final false
static ::System::Security::Cryptography::TripleDES Create() ;

/// @brief Method IsWeakKey addr 0x22ffd10 size 0x13c virtual false final false
static bool IsWeakKey(::ArrayW<uint8_t> rgbKey) ;

/// @brief Method EqualBytes addr 0x23001d4 size 0x1a0 virtual false final false
static bool EqualBytes(::ArrayW<uint8_t> rgbKey, int32_t start1, int32_t start2, int32_t count) ;

/// @brief Method IsLegalKeySize addr 0x23000e8 size 0x24 virtual false final false
static bool IsLegalKeySize(::ArrayW<uint8_t> rgbKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::TripleDES);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TripleDES, "System.Security.Cryptography", "TripleDES");
