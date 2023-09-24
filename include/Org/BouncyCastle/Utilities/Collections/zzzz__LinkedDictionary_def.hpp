#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Array;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionary;
}
// Type: Org.BouncyCastle.Utilities.Collections::LinkedDictionary
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1783))
// CS Name: Org.BouncyCastle.Utilities.Collections.LinkedDictionary
class CORDL_TYPE LinkedDictionary : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LinkedDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedDictionary", modifiers: " const&", def_value: None }]
constexpr LinkedDictionary(LinkedDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedDictionary", modifiers: "&&", def_value: None }]
constexpr LinkedDictionary(LinkedDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedDictionary(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedDictionary& operator=(LinkedDictionary&& o) noexcept = default;
  constexpr LinkedDictionary& operator=(LinkedDictionary const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_hash, put=__set_hash))  hash;

constexpr void __set_hash(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_hash() const;

 System::Collections::IList __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(System::Collections::IList value) ;

constexpr System::Collections::IList __get_keys() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 System::Collections::ICollection __declspec(property(get=get_Values))  Values;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

static Org::BouncyCastle::Utilities::Collections::LinkedDictionary New_ctor() ;

/// @brief Method .ctor addr 0x10cc990 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x10cca00 size 0x138 virtual true final false
 void Add(::bs_hook::Il2CppWrapperType k, ::bs_hook::Il2CppWrapperType v) ;

/// @brief Method Clear addr 0x10ccb38 size 0x11c virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x10ccc54 size 0xac virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType k) ;

/// @brief Method CopyTo addr 0x10ccd00 size 0x39c virtual true final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x10cd09c size 0xa4 virtual true final false
 int32_t get_Count() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x10cd140 size 0x10 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x10cd150 size 0x6c virtual true final false
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method Remove addr 0x10cd1ec size 0x128 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType k) ;

/// @brief Method get_IsFixedSize addr 0x10cd314 size 0x8 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x10cd31c size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized addr 0x10cd324 size 0x8 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x10cd32c size 0x4c virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Keys addr 0x10cd378 size 0x5c virtual true final false
 System::Collections::ICollection get_Keys() ;

/// @brief Method get_Values addr 0x10cd3d4 size 0x4a4 virtual true final false
 System::Collections::ICollection get_Values() ;

/// @brief Method get_Item addr 0x10cd878 size 0xa8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType k) ;

/// @brief Method set_Item addr 0x10cd920 size 0x1a4 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType k, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::LinkedDictionary);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::LinkedDictionary, "Org.BouncyCastle.Utilities.Collections", "LinkedDictionary");
