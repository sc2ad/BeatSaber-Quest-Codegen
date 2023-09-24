#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
// Type: Org.BouncyCastle.Cms::RecipientID
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(678))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(686))
// CS Name: Org.BouncyCastle.Cms.RecipientID
class CORDL_TYPE RecipientID : public Org::BouncyCastle::X509::Store::X509CertStoreSelector {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~RecipientID() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientID", modifiers: " const&", def_value: None }]
constexpr RecipientID(RecipientID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientID", modifiers: "&&", def_value: None }]
constexpr RecipientID(RecipientID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecipientID(void* ptr) noexcept : Org::BouncyCastle::X509::Store::X509CertStoreSelector(ptr) {
}


  constexpr RecipientID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecipientID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecipientID& operator=(RecipientID&& o) noexcept = default;
  constexpr RecipientID& operator=(RecipientID const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_keyIdentifier, put=__set_keyIdentifier))  keyIdentifier;

constexpr void __set_keyIdentifier(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_keyIdentifier() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_KeyIdentifier, put=set_KeyIdentifier))  KeyIdentifier;


// Methods

/// @brief Method get_KeyIdentifier addr 0x117d224 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_KeyIdentifier() ;

/// @brief Method set_KeyIdentifier addr 0x117751c size 0x6c virtual false final false
 void set_KeyIdentifier(::ArrayW<uint8_t> value) ;

/// @brief Method GetHashCode addr 0x117d280 size 0xac virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x117d32c size 0x160 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Cms::RecipientID New_ctor() ;

/// @brief Method .ctor addr 0x1176f44 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::RecipientID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::RecipientID, "Org.BouncyCastle.Cms", "RecipientID");
