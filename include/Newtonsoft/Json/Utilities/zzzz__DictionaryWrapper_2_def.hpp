#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Array;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedDictionary;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class DictionaryWrapper_2;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class Newtonsoft__Json__Utilities__DictionaryWrapper_2____c;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class DictionaryWrapper_2<TKey,TValue>;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
struct Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue,::cordl_internals::il2cpp_reference_type TEnumeratorKey,::cordl_internals::il2cpp_reference_type TEnumeratorValue>
struct Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>;
}
// Type: ::DictionaryEnumerator`2
// Type: ::<>c
// Type: Newtonsoft.Json.Utilities::DictionaryWrapper`2
// Type: ::DictionaryEnumerator`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue,::cordl_internals::il2cpp_reference_type TEnumeratorKey,::cordl_internals::il2cpp_reference_type TEnumeratorValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11823)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11823), inst: 5937 })
// CS Name: Newtonsoft.Json.Utilities.DictionaryWrapper`2::DictionaryEnumerator`2
struct CORDL_TYPE Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr operator  System::Collections::IDictionaryEnumerator() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_e", ty: "System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>", modifiers: "", def_value: None }]
constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2(System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>> _e) noexcept;


                    constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2(Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2 const&) = default;
                    constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2(Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2&&) = default;
                    constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2& operator=(Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2& operator=(Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>> __declspec(property(get=__get__e, put=__set__e))  _e;

constexpr void __set__e(System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>> value) ;

constexpr System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>> __get__e() const;


// Properties

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>> e) ;

/// @brief Method get_Entry addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11824))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11824), inst: 80 })
// CS Name: Newtonsoft.Json.Utilities.DictionaryWrapper`2::<>c
class CORDL_TYPE Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Newtonsoft__Json__Utilities__DictionaryWrapper_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__DictionaryWrapper_2____c", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2____c(Newtonsoft__Json__Utilities__DictionaryWrapper_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__DictionaryWrapper_2____c", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2____c(Newtonsoft__Json__Utilities__DictionaryWrapper_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__DictionaryWrapper_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2____c& operator=(Newtonsoft__Json__Utilities__DictionaryWrapper_2____c&& o) noexcept = default;
  constexpr Newtonsoft__Json__Utilities__DictionaryWrapper_2____c& operator=(Newtonsoft__Json__Utilities__DictionaryWrapper_2____c const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue> value) ;

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue> __get___9() ;

static System::Func_2<System::Collections::DictionaryEntry,System::Collections::Generic::KeyValuePair_2<TKey,TValue>> __declspec(property(get=__get___9__25_0, put=__set___9__25_0))  __9__25_0;

static void __set___9__25_0(System::Func_2<System::Collections::DictionaryEntry,System::Collections::Generic::KeyValuePair_2<TKey,TValue>> value) ;

static System::Func_2<System::Collections::DictionaryEntry,System::Collections::Generic::KeyValuePair_2<TKey,TValue>> __get___9__25_0() ;


// Methods

// Ctor Parameters []
explicit Newtonsoft__Json__Utilities__DictionaryWrapper_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <GetEnumerator>b__25_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::KeyValuePair_2<TKey,TValue> _GetEnumerator_b__25_0(System::Collections::DictionaryEntry de) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::DictionaryWrapper`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11825))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11825), inst: 80 })
// CS Name: Newtonsoft.Json.Utilities.DictionaryWrapper`2
class CORDL_TYPE DictionaryWrapper_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey, TValue>;

template<typename TEnumeratorKey,typename TEnumeratorValue>
using DictionaryEnumerator_2 = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey, TValue, TKey, TValue, TEnumeratorKey, TEnumeratorValue>;

/// @brief Convert operator to System::Collections::Generic::IDictionary_2<TKey,TValue>
constexpr operator  System::Collections::Generic::IDictionary_2<TKey,TValue>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to Newtonsoft::Json::Utilities::IWrappedDictionary
constexpr operator  Newtonsoft::Json::Utilities::IWrappedDictionary() const noexcept;

/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DictionaryWrapper_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryWrapper_2", modifiers: " const&", def_value: None }]
constexpr DictionaryWrapper_2(DictionaryWrapper_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryWrapper_2", modifiers: "&&", def_value: None }]
constexpr DictionaryWrapper_2(DictionaryWrapper_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DictionaryWrapper_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DictionaryWrapper_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DictionaryWrapper_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DictionaryWrapper_2& operator=(DictionaryWrapper_2&& o) noexcept = default;
  constexpr DictionaryWrapper_2& operator=(DictionaryWrapper_2 const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get__dictionary, put=__set__dictionary))  _dictionary;

constexpr void __set__dictionary(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get__dictionary() const;

 System::Collections::Generic::IDictionary_2<TKey,TValue> __declspec(property(get=__get__genericDictionary, put=__set__genericDictionary))  _genericDictionary;

constexpr void __set__genericDictionary(System::Collections::Generic::IDictionary_2<TKey,TValue> value) ;

constexpr System::Collections::Generic::IDictionary_2<TKey,TValue> __get__genericDictionary() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;


// Properties

 System::Collections::Generic::ICollection_1<TKey> __declspec(property(get=get_Keys))  Keys;

 System::Collections::Generic::ICollection_1<TValue> __declspec(property(get=get_Values))  Values;

 TValue __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IDictionary_get_Item, put=System_Collections_IDictionary_set_Item))  System_Collections_IDictionary_Item;

 bool __declspec(property(get=System_Collections_IDictionary_get_IsFixedSize))  System_Collections_IDictionary_IsFixedSize;

 System::Collections::ICollection __declspec(property(get=System_Collections_IDictionary_get_Keys))  System_Collections_IDictionary_Keys;

 System::Collections::ICollection __declspec(property(get=System_Collections_IDictionary_get_Values))  System_Collections_IDictionary_Values;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_UnderlyingDictionary))  UnderlyingDictionary;


// Methods

// Ctor Parameters [CppParam { name: "dictionary", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit DictionaryWrapper_2(System::Collections::IDictionary dictionary) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::IDictionary dictionary) ;

// Ctor Parameters [CppParam { name: "dictionary", ty: "System::Collections::Generic::IDictionary_2<TKey,TValue>", modifiers: "", def_value: None }]
explicit DictionaryWrapper_2(System::Collections::Generic::IDictionary_2<TKey,TValue> dictionary) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IDictionary_2<TKey,TValue> dictionary) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(TKey key, TValue value) ;

/// @brief Method ContainsKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool ContainsKey(TKey key) ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::ICollection_1<TKey> get_Keys() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(TKey key) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryGetValue(TKey key, ByRef<TValue> value) ;

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::ICollection_1<TValue> get_Values() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Item(TKey key) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_Item(TKey key, TValue value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(System::Collections::Generic::KeyValuePair_2<TKey,TValue> item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(System::Collections::Generic::KeyValuePair_2<TKey,TValue> item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> array, int32_t arrayIndex) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(System::Collections::Generic::KeyValuePair_2<TKey,TValue> item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IDictionary.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IDictionary_Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IDictionary.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IDictionary_get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.Collections.IDictionary.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IDictionary_set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IDictionary.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IDictionaryEnumerator System_Collections_IDictionary_GetEnumerator() ;

/// @brief Method System.Collections.IDictionary.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IDictionary_Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.Collections.IDictionary.get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IDictionary_get_IsFixedSize() ;

/// @brief Method System.Collections.IDictionary.get_Keys addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::ICollection System_Collections_IDictionary_get_Keys() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.Collections.IDictionary.get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::ICollection System_Collections_IDictionary_get_Values() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method get_UnderlyingDictionary addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType get_UnderlyingDictionary() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Newtonsoft::Json::Utilities::DictionaryWrapper_2, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2/DictionaryEnumerator`2");
