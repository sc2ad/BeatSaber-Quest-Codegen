#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformation;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
// Type: Org.BouncyCastle.Cms::RecipientInformationStore
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(687))
// CS Name: Org.BouncyCastle.Cms.RecipientInformationStore
class CORDL_TYPE RecipientInformationStore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RecipientInformationStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientInformationStore", modifiers: " const&", def_value: None }]
constexpr RecipientInformationStore(RecipientInformationStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientInformationStore", modifiers: "&&", def_value: None }]
constexpr RecipientInformationStore(RecipientInformationStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecipientInformationStore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RecipientInformationStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecipientInformationStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecipientInformationStore& operator=(RecipientInformationStore&& o) noexcept = default;
  constexpr RecipientInformationStore& operator=(RecipientInformationStore const& o) noexcept = default;
                


// Fields

 ::System::Collections::IList __declspec(property(get=__get_all, put=__set_all))  all;

constexpr void __set_all(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_all() const;

 ::System::Collections::IDictionary __declspec(property(get=__get_table, put=__set_table))  table;

constexpr void __set_table(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_table() const;


// Properties

 ::Org::BouncyCastle::Cms::RecipientInformation __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "recipientInfos", ty: "::System::Collections::ICollection", modifiers: "", def_value: None }]
explicit RecipientInformationStore(::System::Collections::ICollection recipientInfos) ;

/// @brief Method .ctor addr 0x1157fa4 size 0x5a8 virtual false final false
 void _ctor(::System::Collections::ICollection recipientInfos) ;

/// @brief Method get_Item addr 0x117d48c size 0x4 virtual false final false
 ::Org::BouncyCastle::Cms::RecipientInformation get_Item(::Org::BouncyCastle::Cms::RecipientID selector) ;

/// @brief Method GetFirstRecipient addr 0x117d490 size 0x190 virtual false final false
 ::Org::BouncyCastle::Cms::RecipientInformation GetFirstRecipient(::Org::BouncyCastle::Cms::RecipientID selector) ;

/// @brief Method get_Count addr 0x117d620 size 0xa4 virtual false final false
 int32_t get_Count() ;

/// @brief Method GetRecipients addr 0x117d6c4 size 0x5c virtual false final false
 ::System::Collections::ICollection GetRecipients() ;

/// @brief Method GetRecipients addr 0x117d720 size 0x130 virtual false final false
 ::System::Collections::ICollection GetRecipients(::Org::BouncyCastle::Cms::RecipientID selector) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::RecipientInformationStore);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::RecipientInformationStore, "Org.BouncyCastle.Cms", "RecipientInformationStore");
