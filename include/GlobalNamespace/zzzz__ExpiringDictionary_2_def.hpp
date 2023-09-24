#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14;
}
namespace GlobalNamespace {
template<typename T>
class OrderedSet_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class GlobalNamespace__ExpiringDictionary_2__Entry;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class ExpiringDictionary_2;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class GlobalNamespace__ExpiringDictionary_2__Entry;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ExpiringDictionary_2<TKey,TValue>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>;
}
// Type: ::Entry
// Type: ::<Enumerate>d__14
// Type: ::ExpiringDictionary`2
// Type: ::Entry
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12670))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12670), inst: 80 })
// CS Name: ExpiringDictionary`2::Entry
class CORDL_TYPE GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__ExpiringDictionary_2__Entry() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ExpiringDictionary_2__Entry", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ExpiringDictionary_2__Entry(GlobalNamespace__ExpiringDictionary_2__Entry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ExpiringDictionary_2__Entry", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ExpiringDictionary_2__Entry(GlobalNamespace__ExpiringDictionary_2__Entry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ExpiringDictionary_2__Entry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ExpiringDictionary_2__Entry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ExpiringDictionary_2__Entry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ExpiringDictionary_2__Entry& operator=(GlobalNamespace__ExpiringDictionary_2__Entry&& o) noexcept = default;
  constexpr GlobalNamespace__ExpiringDictionary_2__Entry& operator=(GlobalNamespace__ExpiringDictionary_2__Entry const& o) noexcept = default;
                


// Fields

 TKey __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(TKey value) ;

constexpr TKey __get_key() const;

 TValue __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(TValue value) ;

constexpr TValue __get_value() const;

 int64_t __declspec(property(get=__get_expireTime, put=__set_expireTime))  expireTime;

constexpr void __set_expireTime(int64_t value) ;

constexpr int64_t __get_expireTime() const;


// Methods

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Enumerate>d__14
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12671))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12671), inst: 80 })
// CS Name: ExpiringDictionary`2::<Enumerate>d__14
class CORDL_TYPE GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerator_1<TValue>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14(GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14(GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14& operator=(GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14&& o) noexcept = default;
  constexpr GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14& operator=(GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 TValue __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(TValue value) ;

constexpr TValue __get___2__current() const;

 GlobalNamespace::ExpiringDictionary_2<TKey,TValue> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::ExpiringDictionary_2<TKey,TValue> value) ;

constexpr GlobalNamespace::ExpiringDictionary_2<TKey,TValue> __get___4__this() const;

 System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> value) ;

constexpr System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> __get___7__wrap1() const;


// Properties

 TValue __declspec(property(get=System_Collections_Generic_IEnumerator_TValue__get_Current))  System_Collections_Generic_IEnumerator_TValue__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue> New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<TValue>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue System_Collections_Generic_IEnumerator_TValue__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExpiringDictionary`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12672))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12672), inst: 80 })
// CS Name: ExpiringDictionary`2
class CORDL_TYPE ExpiringDictionary_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Enumerate_d__14 = GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey, TValue>;

using Entry = GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey, TValue>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerable_1<TValue>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ExpiringDictionary_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2", modifiers: " const&", def_value: None }]
constexpr ExpiringDictionary_2(ExpiringDictionary_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExpiringDictionary_2", modifiers: "&&", def_value: None }]
constexpr ExpiringDictionary_2(ExpiringDictionary_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExpiringDictionary_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExpiringDictionary_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExpiringDictionary_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExpiringDictionary_2& operator=(ExpiringDictionary_2&& o) noexcept = default;
  constexpr ExpiringDictionary_2& operator=(ExpiringDictionary_2 const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxReusableEntries offset 0
static constexpr int32_t  kMaxReusableEntries{1024};

 BGNet::Core::ITimeProvider __declspec(property(get=__get__timeProvider, put=__set__timeProvider))  _timeProvider;

constexpr void __set__timeProvider(BGNet::Core::ITimeProvider value) ;

constexpr BGNet::Core::ITimeProvider __get__timeProvider() const;

 int64_t __declspec(property(get=__get__expirationLengthMs, put=__set__expirationLengthMs))  _expirationLengthMs;

constexpr void __set__expirationLengthMs(int64_t value) ;

constexpr int64_t __get__expirationLengthMs() const;

 GlobalNamespace::OrderedSet_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> __declspec(property(get=__get__expirationQueue, put=__set__expirationQueue))  _expirationQueue;

constexpr void __set__expirationQueue(GlobalNamespace::OrderedSet_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> value) ;

constexpr GlobalNamespace::OrderedSet_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> __get__expirationQueue() const;

 System::Collections::Generic::Dictionary_2<TKey,GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> __declspec(property(get=__get__entryLookup, put=__set__entryLookup))  _entryLookup;

constexpr void __set__entryLookup(System::Collections::Generic::Dictionary_2<TKey,GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> value) ;

constexpr System::Collections::Generic::Dictionary_2<TKey,GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> __get__entryLookup() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> __declspec(property(get=__get__reusableEntries, put=__set__reusableEntries))  _reusableEntries;

constexpr void __set__reusableEntries(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> __get__reusableEntries() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 TValue __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

static GlobalNamespace::ExpiringDictionary_2<TKey,TValue> New_ctor(BGNet::Core::ITimeProvider timeProvider, int64_t expirationLengthMs) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(BGNet::Core::ITimeProvider timeProvider, int64_t expirationLengthMs) ;

/// @brief Method CompareEntries addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t CompareEntries(GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> a, GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> b) ;

/// @brief Method RemoveExpiredEntries addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveExpiredEntries() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<TValue> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method Enumerate addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IEnumerator_1<TValue> Enumerate() ;

/// @brief Method ContainsKey addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsKey(TKey key) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetValue(TKey key, ByRef<TValue> value) ;

/// @brief Method TryGetValueAndResetExpiration addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetValueAndResetExpiration(TKey key, ByRef<TValue> value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Remove(TKey key) ;

/// @brief Method ResetExpiration addr 0x0 size 0xffffffffffffffff virtual false final false
 void ResetExpiration(TKey key) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Add(TKey key, TValue value) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue Get(TKey key) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(TKey key, TValue value) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue get_Item(TKey key) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(TKey key, TValue value) ;

/// @brief Method PollUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void PollUpdate() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method GetEntry addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> GetEntry(TKey key, TValue value) ;

/// @brief Method ReleaseEntry addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReleaseEntry(GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ExpiringDictionary_2, "", "ExpiringDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry, "", "ExpiringDictionary`2/Entry");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14, "", "ExpiringDictionary`2/<Enumerate>d__14");
