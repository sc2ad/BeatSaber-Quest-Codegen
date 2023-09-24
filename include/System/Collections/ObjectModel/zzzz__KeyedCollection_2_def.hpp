#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace System::Collections::ObjectModel {
template<typename TKey,typename TItem>
class KeyedCollection_2;
}
namespace System::Collections::ObjectModel {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TItem>
class KeyedCollection_2<TKey,TItem>;
}
// Type: System.Collections.ObjectModel::KeyedCollection`2
// Type: System.Collections.ObjectModel::KeyedCollection`2
namespace System::Collections::ObjectModel {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3799)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3799), inst: 986 }), TypeDefinitionIndex(TypeDefinitionIndex(3801))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3801), inst: 80 })
// CS Name: System.Collections.ObjectModel.KeyedCollection`2
class CORDL_TYPE KeyedCollection_2<TKey,TItem> : public System::Collections::ObjectModel::Collection_1<TItem> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~KeyedCollection_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedCollection_2", modifiers: " const&", def_value: None }]
constexpr KeyedCollection_2(KeyedCollection_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedCollection_2", modifiers: "&&", def_value: None }]
constexpr KeyedCollection_2(KeyedCollection_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyedCollection_2(void* ptr) noexcept : System::Collections::ObjectModel::Collection_1<TItem>(ptr) {
}


  constexpr KeyedCollection_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyedCollection_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyedCollection_2& operator=(KeyedCollection_2&& o) noexcept = default;
  constexpr KeyedCollection_2& operator=(KeyedCollection_2 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IEqualityComparer_1<TKey> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IEqualityComparer_1<TKey> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<TKey> __get_comparer() const;

 System::Collections::Generic::Dictionary_2<TKey,TItem> __declspec(property(get=__get_dict, put=__set_dict))  dict;

constexpr void __set_dict(System::Collections::Generic::Dictionary_2<TKey,TItem> value) ;

constexpr System::Collections::Generic::Dictionary_2<TKey,TItem> __get_dict() const;

 int32_t __declspec(property(get=__get_keyCount, put=__set_keyCount))  keyCount;

constexpr void __set_keyCount(int32_t value) ;

constexpr int32_t __get_keyCount() const;

 int32_t __declspec(property(get=__get_threshold, put=__set_threshold))  threshold;

constexpr void __set_threshold(int32_t value) ;

constexpr int32_t __get_threshold() const;


// Properties

 System::Collections::Generic::List_1<TItem> __declspec(property(get=get_Items))  Items;

 TItem __declspec(property(get=get_Item))  Item;

 System::Collections::Generic::IDictionary_2<TKey,TItem> __declspec(property(get=get_Dictionary))  Dictionary;


// Methods

static System::Collections::ObjectModel::KeyedCollection_2<TKey,TItem> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::ObjectModel::KeyedCollection_2<TKey,TItem> New_ctor(System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

static System::Collections::ObjectModel::KeyedCollection_2<TKey,TItem> New_ctor(System::Collections::Generic::IEqualityComparer_1<TKey> comparer, int32_t dictionaryCreationThreshold) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<TKey> comparer, int32_t dictionaryCreationThreshold) ;

/// @brief Method get_Items addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::List_1<TItem> get_Items() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 TItem get_Item(TKey key) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(TKey key) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetValue(TKey key, ByRef<TItem> item) ;

/// @brief Method get_Dictionary addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IDictionary_2<TKey,TItem> get_Dictionary() ;

/// @brief Method ClearItems addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearItems() ;

/// @brief Method GetKeyForItem addr 0x0 size 0xffffffffffffffff virtual true final false
 TKey GetKeyForItem(TItem item) ;

/// @brief Method InsertItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void InsertItem(int32_t index, TItem item) ;

/// @brief Method RemoveItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void RemoveItem(int32_t index) ;

/// @brief Method SetItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetItem(int32_t index, TItem item) ;

/// @brief Method AddKey addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddKey(TKey key, TItem item) ;

/// @brief Method CreateDictionary addr 0x0 size 0xffffffffffffffff virtual false final false
 void CreateDictionary() ;

/// @brief Method RemoveKey addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveKey(TKey key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::ObjectModel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::ObjectModel::KeyedCollection_2, "System.Collections.ObjectModel", "KeyedCollection`2");
