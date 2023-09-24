#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Security::Cryptography {
class Oid;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Security::Cryptography {
class OidEnumerator;
}
// Forward declare root types
namespace System::Security::Cryptography {
class OidCollection;
}
// Type: System.Security.Cryptography::OidCollection
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7824))
// CS Name: System.Security.Cryptography.OidCollection
class CORDL_TYPE OidCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OidCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "OidCollection", modifiers: " const&", def_value: None }]
constexpr OidCollection(OidCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OidCollection", modifiers: "&&", def_value: None }]
constexpr OidCollection(OidCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OidCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OidCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OidCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OidCollection& operator=(OidCollection&& o) noexcept = default;
  constexpr OidCollection& operator=(OidCollection const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Security::Cryptography::Oid> __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Generic::List_1<System::Security::Cryptography::Oid> value) ;

constexpr System::Collections::Generic::List_1<System::Security::Cryptography::Oid> __get__list() const;


// Properties

 System::Security::Cryptography::Oid __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

static System::Security::Cryptography::OidCollection New_ctor() ;

/// @brief Method .ctor addr 0x27e37d0 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x27e3850 size 0xb4 virtual false final false
 int32_t Add(System::Security::Cryptography::Oid oid) ;

/// @brief Method get_Item addr 0x27e3904 size 0x58 virtual false final false
 System::Security::Cryptography::Oid get_Item(int32_t index) ;

/// @brief Method get_Count addr 0x27e395c size 0x48 virtual true final true
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x27e39a4 size 0x6c virtual false final false
 System::Security::Cryptography::OidEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27e3a40 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27e3a44 size 0x1bc virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method get_IsSynchronized addr 0x27e3c00 size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x27e3c08 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::OidCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::OidCollection, "System.Security.Cryptography", "OidCollection");
