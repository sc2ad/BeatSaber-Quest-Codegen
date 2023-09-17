#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AveragingValueRecorder__AverageValueData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
namespace LiteNetLib {
struct ____LiteNetLib__NatPunchModule__RequestEventData;
}
namespace LiteNetLib {
struct ____LiteNetLib__NatPunchModule__SuccessEventData;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__EventDispatcher__EventRecord;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class Queue_1<T>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<float_t>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<int32_t>;
}
namespace System::Collections::Generic {
template<typename T>
struct ____System__Collections__Generic__Queue_1__Enumerator;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
struct ____System__Collections__Generic__Queue_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__Queue_1__Enumerator<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__Queue_1__Enumerator<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__Queue_1__Enumerator<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__Queue_1__Enumerator<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__Queue_1__Enumerator<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__Queue_1__Enumerator<float_t>;
}
namespace System::Collections::Generic {
template<>
struct ____System__Collections__Generic__Queue_1__Enumerator<int32_t>;
}
// Type: ::Enumerator
// Type: System.Collections.Generic::Queue`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3837)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3837), inst: 2 })
// CS Name: System.Collections.Generic.Queue`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__Queue_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<T>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "T", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__Queue_1__Enumerator(::System::Collections::Generic::Queue_1<T> _q, int32_t _version, int32_t _index, T _currentElement) noexcept;


                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__Queue_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::Queue_1<T> __declspec(property(get=__get__q, put=__set__q))  _q;

constexpr void __set__q(::System::Collections::Generic::Queue_1<T> value) ;

constexpr ::System::Collections::Generic::Queue_1<T> __get__q() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 T __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(T value) ;

constexpr T __get__currentElement() const;


// Properties

 T __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::Queue_1<T> q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3837)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3837), inst: 92 })
// CS Name: System.Collections.Generic.Queue`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__Queue_1__Enumerator<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__Queue_1__Enumerator(::System::Collections::Generic::Queue_1<int32_t> _q, int32_t _version, int32_t _index, int32_t _currentElement) noexcept;


                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__Queue_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::Queue_1<int32_t> __declspec(property(get=__get__q, put=__set__q))  _q;

constexpr void __set__q(::System::Collections::Generic::Queue_1<int32_t> value) ;

constexpr ::System::Collections::Generic::Queue_1<int32_t> __get__q() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(int32_t value) ;

constexpr int32_t __get__currentElement() const;


// Properties

 int32_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::Queue_1<int32_t> q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3837)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3837), inst: 374 })
// CS Name: System.Collections.Generic.Queue`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__Queue_1__Enumerator<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<float_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<float_t>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "float_t", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__Queue_1__Enumerator(::System::Collections::Generic::Queue_1<float_t> _q, int32_t _version, int32_t _index, float_t _currentElement) noexcept;


                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__Queue_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::Queue_1<float_t> __declspec(property(get=__get__q, put=__set__q))  _q;

constexpr void __set__q(::System::Collections::Generic::Queue_1<float_t> value) ;

constexpr ::System::Collections::Generic::Queue_1<float_t> __get__q() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 float_t __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(float_t value) ;

constexpr float_t __get__currentElement() const;


// Properties

 float_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::Queue_1<float_t> q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3837)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3837), inst: 4724 })
// CS Name: System.Collections.Generic.Queue`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__Queue_1__Enumerator<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> _q, int32_t _version, int32_t _index, ::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData _currentElement) noexcept;


                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__Queue_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> __declspec(property(get=__get__q, put=__set__q))  _q;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> __get__q() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 ::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData __get__currentElement() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3837))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3837), inst: 4725 })
// CS Name: System.Collections.Generic.Queue`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__Queue_1__Enumerator<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> _q, int32_t _version, int32_t _index, ::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord _currentElement) noexcept;


                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__Queue_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> __declspec(property(get=__get__q, put=__set__q))  _q;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> value) ;

constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> __get__q() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord __get__currentElement() const;


// Properties

 ::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3837))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3837), inst: 4726 })
// CS Name: System.Collections.Generic.Queue`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__Queue_1__Enumerator<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> _q, int32_t _version, int32_t _index, ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData _currentElement) noexcept;


                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__Queue_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> __declspec(property(get=__get__q, put=__set__q))  _q;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> __get__q() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData __get__currentElement() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3837))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3837), inst: 4727 })
// CS Name: System.Collections.Generic.Queue`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__Queue_1__Enumerator<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> _q, int32_t _version, int32_t _index, ::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData _currentElement) noexcept;


                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__Queue_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> __declspec(property(get=__get__q, put=__set__q))  _q;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> value) ;

constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> __get__q() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 ::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData value) ;

constexpr ::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData __get__currentElement() const;


// Properties

 ::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3837)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3837), inst: 4728 })
// CS Name: System.Collections.Generic.Queue`1::Enumerator
struct CORDL_TYPE ____System__Collections__Generic__Queue_1__Enumerator<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData", modifiers: "", def_value: None }]
constexpr ____System__Collections__Generic__Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> _q, int32_t _version, int32_t _index, ::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData _currentElement) noexcept;


                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator const&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator(____System__Collections__Generic__Queue_1__Enumerator&&) = default;
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Collections__Generic__Queue_1__Enumerator& operator=(____System__Collections__Generic__Queue_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Generic__Queue_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> __declspec(property(get=__get__q, put=__set__q))  _q;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> value) ;

constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> __get__q() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 ::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData value) ;

constexpr ::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData __get__currentElement() const;


// Properties

 ::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3838), inst: 2 })
// CS Name: System.Collections.Generic.Queue`1
class CORDL_TYPE Queue_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<T>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Queue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: " const&", def_value: None }]
constexpr Queue_1(Queue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
constexpr Queue_1(Queue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Queue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Queue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Queue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Queue_1& operator=(Queue_1&& o) noexcept = default;
  constexpr Queue_1& operator=(Queue_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__array() const;

 int32_t __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(int32_t value) ;

constexpr int32_t __get__head() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field MinimumGrow offset 0
static constexpr int32_t  MinimumGrow{4};

/// @brief Field GrowFactor offset 0
static constexpr int32_t  GrowFactor{200};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit Queue_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Queue_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(T item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 T Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 T Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(T item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
 void MoveNext(ByRef<int32_t> index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3838), inst: 92 })
// CS Name: System.Collections.Generic.Queue`1
class CORDL_TYPE Queue_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<int32_t>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<int32_t>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<int32_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Queue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: " const&", def_value: None }]
constexpr Queue_1(Queue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
constexpr Queue_1(Queue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Queue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Queue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Queue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Queue_1& operator=(Queue_1&& o) noexcept = default;
  constexpr Queue_1& operator=(Queue_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__array() const;

 int32_t __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(int32_t value) ;

constexpr int32_t __get__head() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field MinimumGrow offset 0
static constexpr int32_t  MinimumGrow{4};

/// @brief Field GrowFactor offset 0
static constexpr int32_t  GrowFactor{200};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit Queue_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Queue_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(int32_t item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<int32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<int32_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(int32_t item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
 void MoveNext(ByRef<int32_t> index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3838), inst: 374 })
// CS Name: System.Collections.Generic.Queue`1
class CORDL_TYPE Queue_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<float_t>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<float_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<float_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<float_t>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<float_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Queue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: " const&", def_value: None }]
constexpr Queue_1(Queue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
constexpr Queue_1(Queue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Queue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Queue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Queue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Queue_1& operator=(Queue_1&& o) noexcept = default;
  constexpr Queue_1& operator=(Queue_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__array() const;

 int32_t __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(int32_t value) ;

constexpr int32_t __get__head() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field MinimumGrow offset 0
static constexpr int32_t  MinimumGrow{4};

/// @brief Field GrowFactor offset 0
static constexpr int32_t  GrowFactor{200};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit Queue_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Queue_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(float_t item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<float_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<float_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(float_t item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<float_t> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
 void MoveNext(ByRef<int32_t> index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3838), inst: 4724 })
// CS Name: System.Collections.Generic.Queue`1
class CORDL_TYPE Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Queue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: " const&", def_value: None }]
constexpr Queue_1(Queue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
constexpr Queue_1(Queue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Queue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Queue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Queue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Queue_1& operator=(Queue_1&& o) noexcept = default;
  constexpr Queue_1& operator=(Queue_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> __get__array() const;

 int32_t __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(int32_t value) ;

constexpr int32_t __get__head() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field MinimumGrow offset 0
static constexpr int32_t  MinimumGrow{4};

/// @brief Field GrowFactor offset 0
static constexpr int32_t  GrowFactor{200};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit Queue_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Queue_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
 void MoveNext(ByRef<int32_t> index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3838), inst: 4725 })
// CS Name: System.Collections.Generic.Queue`1
class CORDL_TYPE Queue_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Queue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: " const&", def_value: None }]
constexpr Queue_1(Queue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
constexpr Queue_1(Queue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Queue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Queue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Queue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Queue_1& operator=(Queue_1&& o) noexcept = default;
  constexpr Queue_1& operator=(Queue_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> __get__array() const;

 int32_t __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(int32_t value) ;

constexpr int32_t __get__head() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field MinimumGrow offset 0
static constexpr int32_t  MinimumGrow{4};

/// @brief Field GrowFactor offset 0
static constexpr int32_t  GrowFactor{200};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit Queue_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Queue_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
 void MoveNext(ByRef<int32_t> index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3838), inst: 4726 })
// CS Name: System.Collections.Generic.Queue`1
class CORDL_TYPE Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Queue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: " const&", def_value: None }]
constexpr Queue_1(Queue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
constexpr Queue_1(Queue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Queue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Queue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Queue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Queue_1& operator=(Queue_1&& o) noexcept = default;
  constexpr Queue_1& operator=(Queue_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> __get__array() const;

 int32_t __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(int32_t value) ;

constexpr int32_t __get__head() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field MinimumGrow offset 0
static constexpr int32_t  MinimumGrow{4};

/// @brief Field GrowFactor offset 0
static constexpr int32_t  GrowFactor{200};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit Queue_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Queue_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
 void MoveNext(ByRef<int32_t> index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3838), inst: 4727 })
// CS Name: System.Collections.Generic.Queue`1
class CORDL_TYPE Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Queue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: " const&", def_value: None }]
constexpr Queue_1(Queue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
constexpr Queue_1(Queue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Queue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Queue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Queue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Queue_1& operator=(Queue_1&& o) noexcept = default;
  constexpr Queue_1& operator=(Queue_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> value) ;

constexpr ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> __get__array() const;

 int32_t __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(int32_t value) ;

constexpr int32_t __get__head() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field MinimumGrow offset 0
static constexpr int32_t  MinimumGrow{4};

/// @brief Field GrowFactor offset 0
static constexpr int32_t  GrowFactor{200};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit Queue_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Queue_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
 void MoveNext(ByRef<int32_t> index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3838))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3838), inst: 4728 })
// CS Name: System.Collections.Generic.Queue`1
class CORDL_TYPE Queue_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Queue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: " const&", def_value: None }]
constexpr Queue_1(Queue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
constexpr Queue_1(Queue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Queue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Queue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Queue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Queue_1& operator=(Queue_1&& o) noexcept = default;
  constexpr Queue_1& operator=(Queue_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> value) ;

constexpr ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> __get__array() const;

 int32_t __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(int32_t value) ;

constexpr int32_t __get__head() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field MinimumGrow offset 0
static constexpr int32_t  MinimumGrow{4};

/// @brief Field GrowFactor offset 0
static constexpr int32_t  GrowFactor{200};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters []
explicit Queue_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Queue_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCapacity(int32_t capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
 void MoveNext(ByRef<int32_t> index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Queue_1, "System.Collections.Generic", "Queue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::____System__Collections__Generic__Queue_1__Enumerator, "System.Collections.Generic", "Queue`1/Enumerator");
