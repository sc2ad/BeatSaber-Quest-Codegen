#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Collections {
class ICollection;
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
struct System__Collections__Generic__LinkedList_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::ResourceManagement::Util {
struct UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<>
class LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class LinkedList_1<T>;
}
namespace System::Collections::Generic {
template<>
class LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>;
}
namespace System::Collections::Generic {
template<>
class LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__LinkedList_1__Enumerator;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__LinkedList_1__Enumerator<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__LinkedList_1__Enumerator<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
struct System__Collections__Generic__LinkedList_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__LinkedList_1__Enumerator<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__LinkedList_1__Enumerator<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>;
}
// Type: ::Enumerator
// Type: System.Collections.Generic::LinkedList`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8384))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8384), inst: 6973 })
// CS Name: System.Collections.Generic.LinkedList`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__LinkedList_1__Enumerator<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

// Ctor Parameters [CppParam { name: "_list", ty: "System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__LinkedList_1__Enumerator(System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> _list, System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> _node, int32_t _version, System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> _current, int32_t _index) noexcept;


                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LinkedList_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get__list() const;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get__node() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get__current() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8384)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8384), inst: 6250 })
// CS Name: System.Collections.Generic.LinkedList`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__LinkedList_1__Enumerator<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

// Ctor Parameters [CppParam { name: "_list", ty: "System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__LinkedList_1__Enumerator(System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> _list, System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> _node, int32_t _version, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> _current, int32_t _index) noexcept;


                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LinkedList_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get__list() const;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get__node() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get__current() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8384))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8384), inst: 3836 })
// CS Name: System.Collections.Generic.LinkedList`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__LinkedList_1__Enumerator<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

// Ctor Parameters [CppParam { name: "_list", ty: "System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__LinkedList_1__Enumerator(System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> _list, System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> _node, int32_t _version, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree _current, int32_t _index) noexcept;


                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LinkedList_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> value) ;

constexpr System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __get__list() const;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __get__node() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree __get__current() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8384))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8384), inst: 3829 })
// CS Name: System.Collections.Generic.LinkedList`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__LinkedList_1__Enumerator<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

// Ctor Parameters [CppParam { name: "_list", ty: "System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__LinkedList_1__Enumerator(System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> _list, System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> _node, int32_t _version, UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo _current, int32_t _index) noexcept;


                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LinkedList_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> value) ;

constexpr System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __get__list() const;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __get__node() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

constexpr UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo __get__current() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8384)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8384), inst: 2 })
// CS Name: System.Collections.Generic.LinkedList`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__LinkedList_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

// Ctor Parameters [CppParam { name: "_list", ty: "System::Collections::Generic::LinkedList_1<T>", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "System::Collections::Generic::LinkedListNode_1<T>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__LinkedList_1__Enumerator(System::Collections::Generic::LinkedList_1<T> _list, System::Collections::Generic::LinkedListNode_1<T> _node, int32_t _version, T _current, int32_t _index) noexcept;


                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator(System__Collections__Generic__LinkedList_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__LinkedList_1__Enumerator& operator=(System__Collections__Generic__LinkedList_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LinkedList_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::LinkedList_1<T> __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Generic::LinkedList_1<T> value) ;

constexpr System::Collections::Generic::LinkedList_1<T> __get__list() const;

 System::Collections::Generic::LinkedListNode_1<T> __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(System::Collections::Generic::LinkedListNode_1<T> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<T> __get__node() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 T __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(T value) ;

constexpr T __get__current() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 T __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::LinkedList_1<T> list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8385))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8385), inst: 6973 })
// CS Name: System.Collections.Generic.LinkedList`1
class CORDL_TYPE LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::ICollection_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LinkedList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: " const&", def_value: None }]
constexpr LinkedList_1(LinkedList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
constexpr LinkedList_1(LinkedList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedList_1& operator=(LinkedList_1&& o) noexcept = default;
  constexpr LinkedList_1& operator=(LinkedList_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_head() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get__siInfo() const;

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0
static constexpr ::ConstString  ValuesName{u"Data"};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_First))  First;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Last))  Last;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::LinkedList_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> AddAfter(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node, System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> AddBefore(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node, System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddBefore(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node, System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> AddFirst(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddFirst(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> AddLast(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddLast(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> array, int32_t index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> Find(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeBefore(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node, System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeToEmptyList(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalRemoveNode(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNewNode(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNode(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8385))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8385), inst: 6250 })
// CS Name: System.Collections.Generic.LinkedList`1
class CORDL_TYPE LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::ICollection_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LinkedList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: " const&", def_value: None }]
constexpr LinkedList_1(LinkedList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
constexpr LinkedList_1(LinkedList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedList_1& operator=(LinkedList_1&& o) noexcept = default;
  constexpr LinkedList_1& operator=(LinkedList_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_head() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get__siInfo() const;

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0
static constexpr ::ConstString  ValuesName{u"Data"};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_First))  First;

 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Last))  Last;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::LinkedList_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> AddAfter(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> AddBefore(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddBefore(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node, System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> AddFirst(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddFirst(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> AddLast(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddLast(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> array, int32_t index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> Find(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeBefore(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node, System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeToEmptyList(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalRemoveNode(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNewNode(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNode(System::Collections::Generic::LinkedListNode_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8385))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8385), inst: 3836 })
// CS Name: System.Collections.Generic.LinkedList`1
class CORDL_TYPE LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>
constexpr operator  System::Collections::Generic::ICollection_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LinkedList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: " const&", def_value: None }]
constexpr LinkedList_1(LinkedList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
constexpr LinkedList_1(LinkedList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedList_1& operator=(LinkedList_1&& o) noexcept = default;
  constexpr LinkedList_1& operator=(LinkedList_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __get_head() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get__siInfo() const;

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0
static constexpr ::ConstString  ValuesName{u"Data"};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=get_First))  First;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=get_Last))  Last;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> AddAfter(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> AddBefore(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddBefore(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node, System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> AddFirst(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddFirst(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> AddLast(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddLast(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> array, int32_t index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> Find(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeBefore(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node, System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeToEmptyList(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalRemoveNode(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNewNode(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNode(System::Collections::Generic::LinkedListNode_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8385))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8385), inst: 3829 })
// CS Name: System.Collections.Generic.LinkedList`1
class CORDL_TYPE LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>
constexpr operator  System::Collections::Generic::ICollection_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LinkedList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: " const&", def_value: None }]
constexpr LinkedList_1(LinkedList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
constexpr LinkedList_1(LinkedList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedList_1& operator=(LinkedList_1&& o) noexcept = default;
  constexpr LinkedList_1& operator=(LinkedList_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __get_head() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get__siInfo() const;

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0
static constexpr ::ConstString  ValuesName{u"Data"};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=get_First))  First;

 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=get_Last))  Last;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> AddAfter(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node, UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> AddBefore(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node, UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddBefore(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node, System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> AddFirst(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddFirst(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> AddLast(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddLast(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> array, int32_t index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> Find(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeBefore(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node, System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeToEmptyList(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalRemoveNode(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNewNode(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNode(System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8385))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8385), inst: 2 })
// CS Name: System.Collections.Generic.LinkedList`1
class CORDL_TYPE LinkedList_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<T>;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr operator  System::Collections::Generic::ICollection_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LinkedList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: " const&", def_value: None }]
constexpr LinkedList_1(LinkedList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
constexpr LinkedList_1(LinkedList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedList_1& operator=(LinkedList_1&& o) noexcept = default;
  constexpr LinkedList_1& operator=(LinkedList_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedListNode_1<T> __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(System::Collections::Generic::LinkedListNode_1<T> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<T> __get_head() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get__siInfo() const;

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0
static constexpr ::ConstString  ValuesName{u"Data"};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::LinkedListNode_1<T> __declspec(property(get=get_First))  First;

 System::Collections::Generic::LinkedListNode_1<T> __declspec(property(get=get_Last))  Last;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::LinkedList_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::LinkedList_1<T> New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<T> get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<T> get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(T value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<T> AddAfter(System::Collections::Generic::LinkedListNode_1<T> node, T value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<T> AddBefore(System::Collections::Generic::LinkedListNode_1<T> node, T value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddBefore(System::Collections::Generic::LinkedListNode_1<T> node, System::Collections::Generic::LinkedListNode_1<T> newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<T> AddFirst(T value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddFirst(System::Collections::Generic::LinkedListNode_1<T> node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<T> AddLast(T value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddLast(System::Collections::Generic::LinkedListNode_1<T> node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(T value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<T> Find(T value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(T value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Collections::Generic::LinkedListNode_1<T> node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeBefore(System::Collections::Generic::LinkedListNode_1<T> node, System::Collections::Generic::LinkedListNode_1<T> newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalInsertNodeToEmptyList(System::Collections::Generic::LinkedListNode_1<T> newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalRemoveNode(System::Collections::Generic::LinkedListNode_1<T> node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNewNode(System::Collections::Generic::LinkedListNode_1<T> node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void ValidateNode(System::Collections::Generic::LinkedListNode_1<T> node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::LinkedList_1, "System.Collections.Generic", "LinkedList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Collections::Generic::System__Collections__Generic__LinkedList_1__Enumerator, "System.Collections.Generic", "LinkedList`1/Enumerator");
