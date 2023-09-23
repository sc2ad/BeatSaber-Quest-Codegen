#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Cms {
class SignerID;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
// Type: Org.BouncyCastle.Cms::SignerInformationStore
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(692))
// CS Name: Org.BouncyCastle.Cms.SignerInformationStore
class CORDL_TYPE SignerInformationStore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignerInformationStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInformationStore", modifiers: " const&", def_value: None }]
constexpr SignerInformationStore(SignerInformationStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInformationStore", modifiers: "&&", def_value: None }]
constexpr SignerInformationStore(SignerInformationStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerInformationStore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignerInformationStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerInformationStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerInformationStore& operator=(SignerInformationStore&& o) noexcept = default;
  constexpr SignerInformationStore& operator=(SignerInformationStore const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_all, put=__set_all))  all;

constexpr void __set_all(System::Collections::IList value) ;

constexpr System::Collections::IList __get_all() const;

 System::Collections::IDictionary __declspec(property(get=__get_table, put=__set_table))  table;

constexpr void __set_table(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_table() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "signerInfo", ty: "Org::BouncyCastle::Cms::SignerInformation", modifiers: "", def_value: None }]
explicit SignerInformationStore(Org::BouncyCastle::Cms::SignerInformation signerInfo) ;

/// @brief Method .ctor addr 0x11820ac size 0x18c virtual false final false
 void _ctor(Org::BouncyCastle::Cms::SignerInformation signerInfo) ;

// Ctor Parameters [CppParam { name: "signerInfos", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
explicit SignerInformationStore(System::Collections::ICollection signerInfos) ;

/// @brief Method .ctor addr 0x1182238 size 0x5a8 virtual false final false
 void _ctor(System::Collections::ICollection signerInfos) ;

/// @brief Method GetFirstSigner addr 0x11827e0 size 0x190 virtual false final false
 Org::BouncyCastle::Cms::SignerInformation GetFirstSigner(Org::BouncyCastle::Cms::SignerID selector) ;

/// @brief Method get_Count addr 0x1182970 size 0xa4 virtual false final false
 int32_t get_Count() ;

/// @brief Method GetSigners addr 0x1182a14 size 0x5c virtual false final false
 System::Collections::ICollection GetSigners() ;

/// @brief Method GetSigners addr 0x1182a70 size 0x130 virtual false final false
 System::Collections::ICollection GetSigners(Org::BouncyCastle::Cms::SignerID selector) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::SignerInformationStore);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::SignerInformationStore, "Org.BouncyCastle.Cms", "SignerInformationStore");
