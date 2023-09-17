#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct ____UnityEngine__InputSystem__InputControlList_1__Enumerator;
}
namespace UnityEngine::InputSystem {
template<::cordl_internals::il2cpp_reference_type TControl>
struct InputControlList_1<TControl>;
}
namespace UnityEngine::InputSystem {
template<::cordl_internals::il2cpp_reference_type TControl>
struct ____UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>;
}
// Type: ::Enumerator
// Type: UnityEngine.InputSystem::InputControlList`1
// Type: ::Enumerator
namespace UnityEngine::InputSystem {
// cpp template
template<::cordl_internals::il2cpp_reference_type TControl>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6308))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6308), inst: 2 })
// CS Name: UnityEngine.InputSystem.InputControlList`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<TControl>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TControl>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Indices", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputControlList_1__Enumerator(void* m_Indices, int32_t m_Count, int32_t m_Current) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputControlList_1__Enumerator(____UnityEngine__InputSystem__InputControlList_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlList_1__Enumerator(____UnityEngine__InputSystem__InputControlList_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlList_1__Enumerator& operator=(____UnityEngine__InputSystem__InputControlList_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputControlList_1__Enumerator& operator=(____UnityEngine__InputSystem__InputControlList_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputControlList_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Indices, put=__set_m_Indices))  m_Indices;

constexpr void __set_m_Indices(void* value) ;

constexpr void* __get_m_Indices() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

 int32_t __declspec(property(get=__get_m_Current, put=__set_m_Current))  m_Current;

constexpr void __set_m_Current(int32_t value) ;

constexpr int32_t __get_m_Current() const;


// Properties

 TControl __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputControlList_1<TControl> list) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TControl get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlList`1
namespace UnityEngine::InputSystem {
// cpp template
template<::cordl_internals::il2cpp_reference_type TControl>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6309)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6309), inst: 2 })
// CS Name: UnityEngine.InputSystem.InputControlList`1
struct CORDL_TYPE InputControlList_1<TControl> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>;

/// @brief Convert operator to ::System::Collections::Generic::IList_1<TControl>
constexpr operator  ::System::Collections::Generic::IList_1<TControl>() const;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<TControl>
constexpr operator  ::System::Collections::Generic::ICollection_1<TControl>() const;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TControl>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TControl>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyList_1<TControl>
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<TControl>() const;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<TControl>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<TControl>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Indices", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr InputControlList_1(int32_t m_Count, ::Unity::Collections::NativeArray_1<uint64_t> m_Indices, ::Unity::Collections::Allocator m_Allocator) noexcept;


                    constexpr InputControlList_1(InputControlList_1 const&) = default;
                    constexpr InputControlList_1(InputControlList_1&&) = default;
                    constexpr InputControlList_1& operator=(InputControlList_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputControlList_1& operator=(InputControlList_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputControlList_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

 ::Unity::Collections::NativeArray_1<uint64_t> __declspec(property(get=__get_m_Indices, put=__set_m_Indices))  m_Indices;

constexpr void __set_m_Indices(::Unity::Collections::NativeArray_1<uint64_t> value) ;

constexpr ::Unity::Collections::NativeArray_1<uint64_t> __get_m_Indices() const;

 ::Unity::Collections::Allocator __declspec(property(get=__get_m_Allocator, put=__set_m_Allocator))  m_Allocator;

constexpr void __set_m_Allocator(::Unity::Collections::Allocator value) ;

constexpr ::Unity::Collections::Allocator __get_m_Allocator() const;

/// @brief Field kInvalidIndex offset 0
static constexpr uint64_t  kInvalidIndex{18446744073709551615u};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=get_Capacity, put=set_Capacity))  Capacity;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 TControl __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method set_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Capacity(int32_t value) ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 TControl get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_Item(int32_t index, TControl value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Unity::Collections::Allocator allocator, int32_t initialCapacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<TControl> values, ::Unity::Collections::Allocator allocator) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<TControl> values) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Resize(int32_t size) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(TControl item) ;

/// @brief Method AddSlice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TList>
 void AddSlice(TList list, int32_t count, int32_t destinationIndex, int32_t sourceIndex) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddRange(::System::Collections::Generic::IEnumerable_1<TControl> list, int32_t count, int32_t destinationIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(TControl item) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<TControl> array, int32_t arrayIndex) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t IndexOf(TControl item) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(TControl item, int32_t startIndex, int32_t count) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void Insert(int32_t index, TControl item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(TControl item) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(TControl item, int32_t startIndex, int32_t count) ;

/// @brief Method SwapElements addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapElements(int32_t index1, int32_t index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TCompare>
 void Sort(int32_t startIndex, int32_t count, TCompare comparer) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TControl> ToArray(bool dispose) ;

/// @brief Method AppendTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void AppendTo(ByRef<::ArrayW<TControl>> array, ByRef<int32_t> count) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<TControl> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method ToIndex addr 0x0 size 0xffffffffffffffff virtual false final false
static uint64_t ToIndex(TControl control) ;

/// @brief Method FromIndex addr 0x0 size 0xffffffffffffffff virtual false final false
static TControl FromIndex(uint64_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::InputControlList_1, "UnityEngine.InputSystem", "InputControlList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlList_1__Enumerator, "UnityEngine.InputSystem", "InputControlList`1/Enumerator");
