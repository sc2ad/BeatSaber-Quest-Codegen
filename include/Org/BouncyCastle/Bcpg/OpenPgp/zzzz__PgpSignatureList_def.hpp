#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureList;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSignatureList
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1668))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSignatureList
class CORDL_TYPE PgpSignatureList : public Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpSignatureList() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignatureList", modifiers: " const&", def_value: None }]
constexpr PgpSignatureList(PgpSignatureList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignatureList", modifiers: "&&", def_value: None }]
constexpr PgpSignatureList(PgpSignatureList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpSignatureList(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(ptr) {
}


  constexpr PgpSignatureList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpSignatureList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpSignatureList& operator=(PgpSignatureList&& o) noexcept = default;
  constexpr PgpSignatureList& operator=(PgpSignatureList const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature> __declspec(property(get=__get_sigs, put=__set_sigs))  sigs;

constexpr void __set_sigs(::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature> __get_sigs() const;


// Properties

 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Size))  Size;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList New_ctor(::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature> sigs) ;

/// @brief Method .ctor addr 0x103efd0 size 0xb8 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature> sigs) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList New_ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature sig) ;

/// @brief Method .ctor addr 0x103f088 size 0xa8 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature sig) ;

/// @brief Method get_Item addr 0x103f130 size 0x30 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature get_Item(int32_t index) ;

/// @brief Method Get addr 0x103f160 size 0x4 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature Get(int32_t index) ;

/// @brief Method get_Size addr 0x103f164 size 0x1c virtual false final false
 int32_t get_Size() ;

/// @brief Method get_Count addr 0x103f180 size 0x1c virtual false final false
 int32_t get_Count() ;

/// @brief Method get_IsEmpty addr 0x103f19c size 0x24 virtual false final false
 bool get_IsEmpty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignatureList");
