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
class DES;
}
// Type: System.Security.Cryptography::DES
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2969))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2924))
// CS Name: System.Security.Cryptography.DES
class CORDL_TYPE DES : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DES() = default;

// Ctor Parameters [CppParam { name: "", ty: "DES", modifiers: " const&", def_value: None }]
constexpr DES(DES const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DES", modifiers: "&&", def_value: None }]
constexpr DES(DES&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DES(void* ptr) noexcept : ::System::Security::Cryptography::SymmetricAlgorithm(ptr) {
}


  constexpr DES& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DES& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DES& operator=(DES&& o) noexcept = default;
  constexpr DES& operator=(DES const& o) noexcept = default;
                


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
explicit DES() ;

/// @brief Method .ctor addr 0x22f01ec size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method get_Key addr 0x22f0268 size 0xe8 virtual true final false
 ::ArrayW<uint8_t> get_Key() ;

/// @brief Method set_Key addr 0x22f068c size 0x20c virtual true final false
 void set_Key(::ArrayW<uint8_t> value) ;

/// @brief Method Create addr 0x22f0898 size 0x5c virtual false final false
static ::System::Security::Cryptography::DES Create() ;

/// @brief Method IsWeakKey addr 0x22f0350 size 0x128 virtual false final false
static bool IsWeakKey(::ArrayW<uint8_t> rgbKey) ;

/// @brief Method IsSemiWeakKey addr 0x22f0478 size 0x214 virtual false final false
static bool IsSemiWeakKey(::ArrayW<uint8_t> rgbKey) ;

/// @brief Method IsLegalKeySize addr 0x22f08f4 size 0x20 virtual false final false
static bool IsLegalKeySize(::ArrayW<uint8_t> rgbKey) ;

/// @brief Method QuadWordFromBigEndian addr 0x22f0914 size 0x98 virtual false final false
static uint64_t QuadWordFromBigEndian(::ArrayW<uint8_t> block) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::DES);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DES, "System.Security.Cryptography", "DES");
