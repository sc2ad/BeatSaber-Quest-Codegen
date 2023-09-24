#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
template<typename TValue>
struct System__Xml__Linq__XHashtable_1__XHashtableState__Entry;
}
namespace System::Xml::Linq {
template<typename TValue>
class System__Xml__Linq__XHashtable_1__ExtractKeyDelegate;
}
namespace System::Xml::Linq {
template<typename TValue>
class System__Xml__Linq__XHashtable_1__XHashtableState;
}
// Forward declare root types
namespace System::Xml::Linq {
template<typename TValue>
class System__Xml__Linq__XHashtable_1__ExtractKeyDelegate;
}
namespace System::Xml::Linq {
template<typename TValue>
class System__Xml__Linq__XHashtable_1__XHashtableState;
}
namespace System::Xml::Linq {
template<typename TValue>
class XHashtable_1;
}
namespace System::Xml::Linq {
template<::cordl_internals::il2cpp_reference_type TValue>
class System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>;
}
namespace System::Xml::Linq {
template<::cordl_internals::il2cpp_reference_type TValue>
class System__Xml__Linq__XHashtable_1__XHashtableState<TValue>;
}
namespace System::Xml::Linq {
template<::cordl_internals::il2cpp_reference_type TValue>
class XHashtable_1<TValue>;
}
namespace GlobalNamespace {
template<typename TValue>
struct System__Xml__Linq__XHashtable_1__XHashtableState__Entry;
}
// Type: ::ExtractKeyDelegate
// Type: ::Entry
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15419))
// CS Name: System.Xml.Linq.XHashtable`1::XHashtableState::Entry
struct CORDL_TYPE System__Xml__Linq__XHashtable_1__XHashtableState__Entry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__Linq__XHashtable_1__XHashtableState__Entry(TValue Value, int32_t HashCode, int32_t Next) noexcept;


                    constexpr System__Xml__Linq__XHashtable_1__XHashtableState__Entry(System__Xml__Linq__XHashtable_1__XHashtableState__Entry const&) = default;
                    constexpr System__Xml__Linq__XHashtable_1__XHashtableState__Entry(System__Xml__Linq__XHashtable_1__XHashtableState__Entry&&) = default;
                    constexpr System__Xml__Linq__XHashtable_1__XHashtableState__Entry& operator=(System__Xml__Linq__XHashtable_1__XHashtableState__Entry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Linq__XHashtable_1__XHashtableState__Entry& operator=(System__Xml__Linq__XHashtable_1__XHashtableState__Entry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Linq__XHashtable_1__XHashtableState__Entry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 TValue __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(TValue value) ;

constexpr TValue __get_Value() const;

 int32_t __declspec(property(get=__get_HashCode, put=__set_HashCode))  HashCode;

constexpr void __set_HashCode(int32_t value) ;

constexpr int32_t __get_HashCode() const;

 int32_t __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(int32_t value) ;

constexpr int32_t __get_Next() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::XHashtableState
// Type: System.Xml.Linq::XHashtable`1
// Type: ::ExtractKeyDelegate
namespace System::Xml::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15418)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15418), inst: 2 })
// CS Name: System.Xml.Linq.XHashtable`1::ExtractKeyDelegate
class CORDL_TYPE System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Xml__Linq__XHashtable_1__ExtractKeyDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__XHashtable_1__ExtractKeyDelegate", modifiers: " const&", def_value: None }]
constexpr System__Xml__Linq__XHashtable_1__ExtractKeyDelegate(System__Xml__Linq__XHashtable_1__ExtractKeyDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__XHashtable_1__ExtractKeyDelegate", modifiers: "&&", def_value: None }]
constexpr System__Xml__Linq__XHashtable_1__ExtractKeyDelegate(System__Xml__Linq__XHashtable_1__ExtractKeyDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Linq__XHashtable_1__ExtractKeyDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Xml__Linq__XHashtable_1__ExtractKeyDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__Linq__XHashtable_1__ExtractKeyDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__Linq__XHashtable_1__ExtractKeyDelegate& operator=(System__Xml__Linq__XHashtable_1__ExtractKeyDelegate&& o) noexcept = default;
  constexpr System__Xml__Linq__XHashtable_1__ExtractKeyDelegate& operator=(System__Xml__Linq__XHashtable_1__ExtractKeyDelegate const& o) noexcept = default;
                


// Methods

static System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW Invoke(TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
// Type: ::XHashtableState
namespace System::Xml::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15420))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15420), inst: 2 })
// CS Name: System.Xml.Linq.XHashtable`1::XHashtableState
class CORDL_TYPE System__Xml__Linq__XHashtable_1__XHashtableState<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Entry = GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Xml__Linq__XHashtable_1__XHashtableState() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__XHashtable_1__XHashtableState", modifiers: " const&", def_value: None }]
constexpr System__Xml__Linq__XHashtable_1__XHashtableState(System__Xml__Linq__XHashtable_1__XHashtableState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__XHashtable_1__XHashtableState", modifiers: "&&", def_value: None }]
constexpr System__Xml__Linq__XHashtable_1__XHashtableState(System__Xml__Linq__XHashtable_1__XHashtableState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Linq__XHashtable_1__XHashtableState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__Linq__XHashtable_1__XHashtableState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__Linq__XHashtable_1__XHashtableState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__Linq__XHashtable_1__XHashtableState& operator=(System__Xml__Linq__XHashtable_1__XHashtableState&& o) noexcept = default;
  constexpr System__Xml__Linq__XHashtable_1__XHashtableState& operator=(System__Xml__Linq__XHashtable_1__XHashtableState const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>> value) ;

constexpr ::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>> __get__entries() const;

 int32_t __declspec(property(get=__get__numEntries, put=__set__numEntries))  _numEntries;

constexpr void __set__numEntries(int32_t value) ;

constexpr int32_t __get__numEntries() const;

 System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> __declspec(property(get=__get__extractKey, put=__set__extractKey))  _extractKey;

constexpr void __set__extractKey(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> value) ;

constexpr System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> __get__extractKey() const;


// Methods

static System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> New_ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> Resize() ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value) ;

/// @brief Method TryAdd addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryAdd(TValue value, ByRef<TValue> newValue) ;

/// @brief Method FindEntry addr 0x0 size 0xffffffffffffffff virtual false final false
 bool FindEntry(int32_t hashCode, ::StringW key, int32_t index, int32_t count, ByRef<int32_t> entryIndex) ;

/// @brief Method ComputeHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t ComputeHashCode(::StringW key, int32_t index, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
// Type: System.Xml.Linq::XHashtable`1
namespace System::Xml::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15421))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15421), inst: 2 })
// CS Name: System.Xml.Linq.XHashtable`1
class CORDL_TYPE XHashtable_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using XHashtableState = System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>;

using ExtractKeyDelegate = System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XHashtable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "XHashtable_1", modifiers: " const&", def_value: None }]
constexpr XHashtable_1(XHashtable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XHashtable_1", modifiers: "&&", def_value: None }]
constexpr XHashtable_1(XHashtable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XHashtable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XHashtable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XHashtable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XHashtable_1& operator=(XHashtable_1&& o) noexcept = default;
  constexpr XHashtable_1& operator=(XHashtable_1 const& o) noexcept = default;
                


// Fields

 System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> value) ;

constexpr System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> __get__state() const;


// Methods

static System::Xml::Linq::XHashtable_1<TValue> New_ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue Add(TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate, "System.Xml.Linq", "XHashtable`1/ExtractKeyDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState, "System.Xml.Linq", "XHashtable`1/XHashtableState");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Xml::Linq::XHashtable_1, "System.Xml.Linq", "XHashtable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry, "System.Xml.Linq", "XHashtable`1/XHashtableState/Entry");
