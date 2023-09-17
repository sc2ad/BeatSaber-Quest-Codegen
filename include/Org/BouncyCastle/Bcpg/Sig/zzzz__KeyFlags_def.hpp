#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class KeyFlags;
}
// Type: Org.BouncyCastle.Bcpg.Sig::KeyFlags
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(537))
// CS Name: Org.BouncyCastle.Bcpg.Sig.KeyFlags
class CORDL_TYPE KeyFlags : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyFlags() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyFlags", modifiers: " const&", def_value: None }]
constexpr KeyFlags(KeyFlags const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyFlags", modifiers: "&&", def_value: None }]
constexpr KeyFlags(KeyFlags&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyFlags(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr KeyFlags& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyFlags& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyFlags& operator=(KeyFlags&& o) noexcept = default;
  constexpr KeyFlags& operator=(KeyFlags const& o) noexcept = default;
                


// Fields

/// @brief Field CertifyOther offset 0
static constexpr int32_t  CertifyOther{1};

/// @brief Field SignData offset 0
static constexpr int32_t  SignData{2};

/// @brief Field EncryptComms offset 0
static constexpr int32_t  EncryptComms{4};

/// @brief Field EncryptStorage offset 0
static constexpr int32_t  EncryptStorage{8};

/// @brief Field Split offset 0
static constexpr int32_t  Split{16};

/// @brief Field Authentication offset 0
static constexpr int32_t  Authentication{32};

/// @brief Field Shared offset 0
static constexpr int32_t  Shared{128};


// Properties

 int32_t __declspec(property(get=get_Flags))  Flags;


// Methods

/// @brief Method IntToByteArray addr 0x113db78 size 0xcc virtual false final false
static ::ArrayW<uint8_t> IntToByteArray(int32_t v) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit KeyFlags(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113dc44 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }]
explicit KeyFlags(bool critical, int32_t flags) ;

/// @brief Method .ctor addr 0x113dc8c size 0x4c virtual false final false
 void _ctor(bool critical, int32_t flags) ;

/// @brief Method get_Flags addr 0x113dcd8 size 0x64 virtual false final false
 int32_t get_Flags() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::KeyFlags);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::KeyFlags, "Org.BouncyCastle.Bcpg.Sig", "KeyFlags");
