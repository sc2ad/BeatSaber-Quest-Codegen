#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System {
class Array;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElement;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
// Type: System.Security.Cryptography.X509Certificates::X509ChainElementCollection
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7855))
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainElementCollection
class CORDL_TYPE X509ChainElementCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509ChainElementCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElementCollection", modifiers: " const&", def_value: None }]
constexpr X509ChainElementCollection(X509ChainElementCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElementCollection", modifiers: "&&", def_value: None }]
constexpr X509ChainElementCollection(X509ChainElementCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ChainElementCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ChainElementCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ChainElementCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ChainElementCollection& operator=(X509ChainElementCollection&& o) noexcept = default;
  constexpr X509ChainElementCollection& operator=(X509ChainElementCollection const& o) noexcept = default;
                


// Fields

 System::Collections::ArrayList __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__list() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 System::Security::Cryptography::X509Certificates::X509ChainElement __declspec(property(get=get_Item))  Item;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

static System::Security::Cryptography::X509Certificates::X509ChainElementCollection New_ctor() ;

/// @brief Method .ctor addr 0x27eda84 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method get_Count addr 0x27edaf0 size 0x24 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsSynchronized addr 0x27edb14 size 0x24 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_Item addr 0x27edb38 size 0x98 virtual false final false
 System::Security::Cryptography::X509Certificates::X509ChainElement get_Item(int32_t index) ;

/// @brief Method get_SyncRoot addr 0x27edbd0 size 0x24 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27edbf4 size 0x24 virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x27edc18 size 0x64 virtual false final false
 System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27edd30 size 0x64 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Add addr 0x27edd94 size 0x84 virtual false final false
 void Add(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method Clear addr 0x27ede18 size 0x24 virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x27ede3c size 0x110 virtual false final false
 bool Contains(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509ChainElementCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainElementCollection, "System.Security.Cryptography.X509Certificates", "X509ChainElementCollection");
