#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ExtensionEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ExtensionCollection;
}
// Type: System.Security.Cryptography.X509Certificates::X509ExtensionCollection
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7863))
// CS Name: System.Security.Cryptography.X509Certificates.X509ExtensionCollection
class CORDL_TYPE X509ExtensionCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509ExtensionCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: " const&", def_value: None }]
constexpr X509ExtensionCollection(X509ExtensionCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "&&", def_value: None }]
constexpr X509ExtensionCollection(X509ExtensionCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ExtensionCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ExtensionCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ExtensionCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ExtensionCollection& operator=(X509ExtensionCollection&& o) noexcept = default;
  constexpr X509ExtensionCollection& operator=(X509ExtensionCollection const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Empty() ;

 System::Collections::ArrayList __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__list() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 System::Security::Cryptography::X509Certificates::X509Extension __declspec(property(get=get_Item))  Item;


// Methods

// Ctor Parameters []
explicit X509ExtensionCollection() ;

/// @brief Method .ctor addr 0x27f3178 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method get_Count addr 0x27f31e4 size 0x24 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsSynchronized addr 0x27f3208 size 0x24 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x27f322c size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Item addr 0x27f3230 size 0x3ac virtual false final false
 System::Security::Cryptography::X509Certificates::X509Extension get_Item(::StringW oid) ;

/// @brief Method Add addr 0x27f35dc size 0x74 virtual false final false
 int32_t Add(System::Security::Cryptography::X509Certificates::X509Extension extension) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27f3650 size 0x104 virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x27f3754 size 0x64 virtual false final false
 System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27f37fc size 0x64 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509ExtensionCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ExtensionCollection, "System.Security.Cryptography.X509Certificates", "X509ExtensionCollection");
