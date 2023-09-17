#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
struct Guid;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class HashSet_1<T>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::System::Guid>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::System::Int32Enum>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::UnityEngine::ProBuilder::Edge>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<int32_t>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<uint32_t>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<uint64_t>;
}
namespace System::Collections::Generic {
template<typename T>
struct ____System__Collections__Generic__HashSet_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
struct ____System__Collections__Generic__HashSet_1__ElementCount;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
struct ____System__Collections__Generic__HashSet_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__HashSet_1__Enumerator<::System::Guid>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__HashSet_1__Enumerator<::System::Int32Enum>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ProBuilder::Edge>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ProBuilder::EdgeLookup>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__HashSet_1__Enumerator<int32_t>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__HashSet_1__Enumerator<uint32_t>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__HashSet_1__Enumerator<uint64_t>;
}
namespace System::Collections::Generic {
template<typename T>
struct ____System__Collections__Generic__HashSet_1__Slot;
}
// Type: ::ElementCount
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14593))
// CS Name: System.Collections.Generic.HashSet`1::ElementCount
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__ElementCount : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "uniqueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unfoundCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__ElementCount(int32_t uniqueCount, int32_t unfoundCount) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__ElementCount(____System__Collections__Generic__HashSet_1__ElementCount const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__ElementCount(____System__Collections__Generic__HashSet_1__ElementCount&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__ElementCount& operator=(____System__Collections__Generic__HashSet_1__ElementCount const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__ElementCount& operator=(____System__Collections__Generic__HashSet_1__ElementCount&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__ElementCount(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_uniqueCount, put=__set_uniqueCount))  uniqueCount;

constexpr void __set_uniqueCount(int32_t value) ;

constexpr int32_t __get_uniqueCount() const;

 int32_t __declspec(property(get=__get_unfoundCount, put=__set_unfoundCount))  unfoundCount;

constexpr void __set_unfoundCount(int32_t value) ;

constexpr int32_t __get_unfoundCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Slot
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14594))
// CS Name: System.Collections.Generic.HashSet`1::Slot
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Slot : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Slot(int32_t hashCode, int32_t next, T value) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Slot(____System__Collections__Generic__HashSet_1__Slot const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Slot(____System__Collections__Generic__HashSet_1__Slot&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Slot& operator=(____System__Collections__Generic__HashSet_1__Slot const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Slot& operator=(____System__Collections__Generic__HashSet_1__Slot&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Slot(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_hashCode, put=__set_hashCode))  hashCode;

constexpr void __set_hashCode(int32_t value) ;

constexpr int32_t __get_hashCode() const;

 int32_t __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(int32_t value) ;

constexpr int32_t __get_next() const;

 T __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(T value) ;

constexpr T __get_value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
// Type: System.Collections.Generic::HashSet`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14595))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 2 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<T> _set, int32_t _index, int32_t _version, T _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<T> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<T> value) ;

constexpr ::System::Collections::Generic::HashSet_1<T> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 T __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(T value) ;

constexpr T __get__current() const;


// Properties

 T __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<T> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14595))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 92 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<int32_t> _set, int32_t _index, int32_t _version, int32_t _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(int32_t value) ;

constexpr int32_t __get__current() const;


// Properties

 int32_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<int32_t> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14595))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 265 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> _set, int32_t _index, int32_t _version, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __get__current() const;


// Properties

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14595)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 389 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<uint64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<uint64_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint64_t>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<uint64_t> _set, int32_t _index, int32_t _version, uint64_t _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<uint64_t> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<uint64_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 uint64_t __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(uint64_t value) ;

constexpr uint64_t __get__current() const;


// Properties

 uint64_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<uint64_t> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 uint64_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14595))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 729 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<uint32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<uint32_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint32_t>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<uint32_t> _set, int32_t _index, int32_t _version, uint32_t _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<uint32_t> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<uint32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<uint32_t> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 uint32_t __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(uint32_t value) ;

constexpr uint32_t __get__current() const;


// Properties

 uint32_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<uint32_t> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 uint32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14595))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 2491 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ProBuilder::Edge> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::Edge>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::Edge>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> _set, int32_t _index, int32_t _version, ::UnityEngine::ProBuilder::Edge _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::UnityEngine::ProBuilder::Edge __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(::UnityEngine::ProBuilder::Edge value) ;

constexpr ::UnityEngine::ProBuilder::Edge __get__current() const;


// Properties

 ::UnityEngine::ProBuilder::Edge __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::ProBuilder::Edge get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14595))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 2492 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ProBuilder::EdgeLookup> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::EdgeLookup>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::EdgeLookup>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::ProBuilder::EdgeLookup", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> _set, int32_t _index, int32_t _version, ::UnityEngine::ProBuilder::EdgeLookup _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::UnityEngine::ProBuilder::EdgeLookup __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(::UnityEngine::ProBuilder::EdgeLookup value) ;

constexpr ::UnityEngine::ProBuilder::EdgeLookup __get__current() const;


// Properties

 ::UnityEngine::ProBuilder::EdgeLookup __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::ProBuilder::EdgeLookup get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14595))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 2494 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<::System::Guid> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Guid>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Guid>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::System::Guid> _set, int32_t _index, int32_t _version, ::System::Guid _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<::System::Guid> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::System::Guid> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Guid> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Guid __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(::System::Guid value) ;

constexpr ::System::Guid __get__current() const;


// Properties

 ::System::Guid __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<::System::Guid> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Guid get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14595))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 2498 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> _set, int32_t _index, int32_t _version, ::UnityEngine::InputSystem::Utilities::InternedString _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(::UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString __get__current() const;


// Properties

 ::UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::InputSystem::Utilities::InternedString get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14595)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14595), inst: 4825 })
// CS Name: System.Collections.Generic.HashSet`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__HashSet_1__Enumerator<::System::Int32Enum> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Int32Enum>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Int32Enum>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::System::Int32Enum", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::System::Int32Enum> _set, int32_t _index, int32_t _version, ::System::Int32Enum _current) noexcept;


                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator(____System__Collections__Generic__HashSet_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__HashSet_1__Enumerator& operator=(____System__Collections__Generic__HashSet_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__HashSet_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::HashSet_1<::System::Int32Enum> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::System::Int32Enum> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Int32Enum> __get__set() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Int32Enum __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(::System::Int32Enum value) ;

constexpr ::System::Int32Enum __get__current() const;


// Properties

 ::System::Int32Enum __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<::System::Int32Enum> set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Int32Enum get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 2 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<T>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<T>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<T>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<T>
constexpr operator  ::System::Collections::Generic::ICollection_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<T>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<T>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<T>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<T> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<T> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<T> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<T>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<T> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<T> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<T>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<T> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<T> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<T>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<T>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<T> collection, ::System::Collections::Generic::IEqualityComparer_1<T> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<T> collection, ::System::Collections::Generic::IEqualityComparer_1<T> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<T> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(T item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(T item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(T item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(T item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<T> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<T> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<T> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<T> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<T> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<T> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<T> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(T value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, T value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<T> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<T> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<T> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(T item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<T> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<T> set1, ::System::Collections::Generic::HashSet_1<T> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(T item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 92 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<int32_t>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<int32_t>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<int32_t>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<int32_t>
constexpr operator  ::System::Collections::Generic::ICollection_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<int32_t>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<int32_t>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<int32_t>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<int32_t>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<int32_t> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<int32_t> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<int32_t> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<int32_t>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<int32_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<int32_t> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<int32_t>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<int32_t> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<int32_t>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<int32_t> collection, ::System::Collections::Generic::IEqualityComparer_1<int32_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t> collection, ::System::Collections::Generic::IEqualityComparer_1<int32_t> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<int32_t> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(int32_t item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(int32_t item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<int32_t> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(int32_t item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<int32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<int32_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(int32_t item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<int32_t> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<int32_t> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<int32_t> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<int32_t> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<int32_t> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<int32_t> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<int32_t> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<int32_t> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(int32_t value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, int32_t value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<int32_t> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<int32_t> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<int32_t> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(int32_t item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<int32_t> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<int32_t> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<int32_t> set1, ::System::Collections::Generic::HashSet_1<int32_t> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(int32_t item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 265 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> set1, ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 389 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<uint64_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<uint64_t>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<uint64_t>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<uint64_t>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<uint64_t>
constexpr operator  ::System::Collections::Generic::ICollection_1<uint64_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<uint64_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint64_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<uint64_t>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<uint64_t>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<uint64_t>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<uint64_t>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<uint64_t>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<uint64_t> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<uint64_t> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<uint64_t> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<uint64_t> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<uint64_t>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<uint64_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<uint64_t> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<uint64_t>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<uint64_t> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<uint64_t> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<uint64_t>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<uint64_t> collection, ::System::Collections::Generic::IEqualityComparer_1<uint64_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<uint64_t> collection, ::System::Collections::Generic::IEqualityComparer_1<uint64_t> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<uint64_t> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(uint64_t item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(uint64_t item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<uint64_t> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(uint64_t item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<uint64_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<uint64_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(uint64_t item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<uint64_t> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<uint64_t> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<uint64_t> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<uint64_t> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<uint64_t> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<uint64_t> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<uint64_t> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<uint64_t> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(uint64_t value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, uint64_t value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<uint64_t> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<uint64_t> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<uint64_t> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(uint64_t item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<uint64_t> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<uint64_t> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<uint64_t> set1, ::System::Collections::Generic::HashSet_1<uint64_t> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(uint64_t item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 729 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<uint32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<uint32_t>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<uint32_t>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<uint32_t>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<uint32_t>
constexpr operator  ::System::Collections::Generic::ICollection_1<uint32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<uint32_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<uint32_t>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<uint32_t>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<uint32_t>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<uint32_t> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<uint32_t> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<uint32_t> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<uint32_t> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<uint32_t>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<uint32_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<uint32_t> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<uint32_t>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<uint32_t> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<uint32_t> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<uint32_t>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<uint32_t> collection, ::System::Collections::Generic::IEqualityComparer_1<uint32_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<uint32_t> collection, ::System::Collections::Generic::IEqualityComparer_1<uint32_t> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<uint32_t> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(uint32_t item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(uint32_t item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<uint32_t> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(uint32_t item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<uint32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<uint32_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(uint32_t item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<uint32_t> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<uint32_t> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<uint32_t> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<uint32_t> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<uint32_t> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<uint32_t> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<uint32_t> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<uint32_t> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(uint32_t value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, uint32_t value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<uint32_t> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<uint32_t> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<uint32_t> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(uint32_t item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<uint32_t> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<uint32_t> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<uint32_t> set1, ::System::Collections::Generic::HashSet_1<uint32_t> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(uint32_t item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 2491 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<::UnityEngine::ProBuilder::Edge> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ProBuilder::Edge>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::UnityEngine::ProBuilder::Edge>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(::UnityEngine::ProBuilder::Edge item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(::UnityEngine::ProBuilder::Edge item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<::UnityEngine::ProBuilder::Edge> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(::UnityEngine::ProBuilder::Edge item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ProBuilder::Edge> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::Edge> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(::UnityEngine::ProBuilder::Edge item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::UnityEngine::ProBuilder::Edge> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::UnityEngine::ProBuilder::Edge> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<::UnityEngine::ProBuilder::Edge> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(::UnityEngine::ProBuilder::Edge value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, ::UnityEngine::ProBuilder::Edge value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(::UnityEngine::ProBuilder::Edge item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::UnityEngine::ProBuilder::Edge> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> set1, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(::UnityEngine::ProBuilder::Edge item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 2492 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ProBuilder::EdgeLookup>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::UnityEngine::ProBuilder::EdgeLookup>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::EdgeLookup>
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::EdgeLookup>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ProBuilder::EdgeLookup>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ProBuilder::EdgeLookup>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(::UnityEngine::ProBuilder::EdgeLookup item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(::UnityEngine::ProBuilder::EdgeLookup item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<::UnityEngine::ProBuilder::EdgeLookup> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(::UnityEngine::ProBuilder::EdgeLookup item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::ProBuilder::EdgeLookup> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::EdgeLookup> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(::UnityEngine::ProBuilder::EdgeLookup item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::UnityEngine::ProBuilder::EdgeLookup> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::UnityEngine::ProBuilder::EdgeLookup> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<::UnityEngine::ProBuilder::EdgeLookup> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(::UnityEngine::ProBuilder::EdgeLookup value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, ::UnityEngine::ProBuilder::EdgeLookup value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(::UnityEngine::ProBuilder::EdgeLookup item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::UnityEngine::ProBuilder::EdgeLookup> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> set1, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(::UnityEngine::ProBuilder::EdgeLookup item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 2494 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<::System::Guid> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::System::Guid>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::System::Guid>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::System::Guid>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<::System::Guid>
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Guid>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Guid>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Guid>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::System::Guid>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::Guid>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::System::Guid>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::System::Guid>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::System::Guid>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<::System::Guid> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::System::Guid> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Guid> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<::System::Guid> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::System::Guid>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<::System::Guid> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<::System::Guid> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::System::Guid> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::System::Guid>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::System::Guid> collection, ::System::Collections::Generic::IEqualityComparer_1<::System::Guid> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid> collection, ::System::Collections::Generic::IEqualityComparer_1<::System::Guid> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<::System::Guid> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(::System::Guid item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(::System::Guid item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<::System::Guid> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(::System::Guid item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::System::Guid> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Guid> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(::System::Guid item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<::System::Guid> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<::System::Guid> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<::System::Guid> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<::System::Guid> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::System::Guid> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::System::Guid> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<::System::Guid> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<::System::Guid> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(::System::Guid value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, ::System::Guid value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::System::Guid> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::System::Guid> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::System::Guid> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(::System::Guid item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::System::Guid> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::System::Guid> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::System::Guid> set1, ::System::Collections::Generic::HashSet_1<::System::Guid> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(::System::Guid item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 2498 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::UnityEngine::InputSystem::Utilities::InternedString>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<::UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::InputSystem::Utilities::InternedString>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::InternedString>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(::UnityEngine::InputSystem::Utilities::InternedString item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(::UnityEngine::InputSystem::Utilities::InternedString item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(::UnityEngine::InputSystem::Utilities::InternedString item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(::UnityEngine::InputSystem::Utilities::InternedString item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<::UnityEngine::InputSystem::Utilities::InternedString> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(::UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, ::UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(::UnityEngine::InputSystem::Utilities::InternedString item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::UnityEngine::InputSystem::Utilities::InternedString> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> set1, ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(::UnityEngine::InputSystem::Utilities::InternedString item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 4825 })
// CS Name: System.Collections.Generic.HashSet`1
class CORDL_TYPE HashSet_1<::System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::System::Int32Enum>;

using Slot = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::System::Int32Enum>;

using ElementCount = ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::System::Int32Enum>;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<::System::Int32Enum>
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Int32Enum>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Int32Enum>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Int32Enum>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::System::Int32Enum>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::Int32Enum>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: " const&", def_value: None }]
constexpr HashSet_1(HashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
constexpr HashSet_1(HashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet_1& operator=(HashSet_1&& o) noexcept = default;
  constexpr HashSet_1& operator=(HashSet_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Lower31BitMask offset 0
static constexpr int32_t  Lower31BitMask{2147483647};

/// @brief Field StackAllocThreshold offset 0
static constexpr int32_t  StackAllocThreshold{100};

/// @brief Field ShrinkThreshold offset 0
static constexpr int32_t  ShrinkThreshold{3};

/// @brief Field CapacityName offset 0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

 ::ArrayW<int32_t> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__buckets() const;

 ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::System::Int32Enum>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::System::Int32Enum>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot<::System::Int32Enum>> __get__slots() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 int32_t __declspec(property(get=__get__freeList, put=__set__freeList))  _freeList;

constexpr void __set__freeList(int32_t value) ;

constexpr int32_t __get__freeList() const;

 ::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum> __get__comparer() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 ::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum> __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters []
explicit HashSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum> comparer) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::System::Int32Enum>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> collection) ;

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::Generic::IEnumerable_1<::System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum>", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> collection, ::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> collection, ::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum> comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HashSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::System::Collections::Generic::HashSet_1<::System::Int32Enum> source) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(::System::Int32Enum item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(::System::Int32Enum item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<::System::Int32Enum> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(::System::Int32Enum item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator<::System::Int32Enum> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Int32Enum> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(::System::Int32Enum item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnionWith(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void IntersectWith(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExceptWith(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool SetEquals(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::System::Int32Enum> array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::System::Int32Enum> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveWhere(::System::Predicate_1<::System::Int32Enum> match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEqualityComparer_1<::System::Int32Enum> get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
 void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Initialize(int32_t capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddIfNotPresent(::System::Int32Enum value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddValue(int32_t index, int32_t hashCode, ::System::Int32Enum value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::System::Int32Enum> other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalIndexOf(::System::Int32Enum item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount<::System::Int32Enum> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::System::Int32Enum> other, bool returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::System::Int32Enum> set1, ::System::Collections::Generic::HashSet_1<::System::Int32Enum> set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(::System::Int32Enum item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::HashSet_1, "System.Collections.Generic", "HashSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Enumerator, "System.Collections.Generic", "HashSet`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::____System__Collections__Generic__HashSet_1__ElementCount, "System.Collections.Generic", "HashSet`1/ElementCount");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::____System__Collections__Generic__HashSet_1__Slot, "System.Collections.Generic", "HashSet`1/Slot");
