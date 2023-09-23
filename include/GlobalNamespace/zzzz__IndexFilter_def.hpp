#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType;
}
namespace GlobalNamespace {
struct GlobalNamespace__IndexFilter__IndexFilterRandomType;
}
namespace GlobalNamespace {
class GlobalNamespace__IndexFilter___GetEnumerator_d__19;
}
namespace GlobalNamespace {
class GlobalNamespace__IndexFilter___GetValues_d__20;
}
namespace GlobalNamespace {
class IndexFilter;
}
// Type: ::IndexFilterRandomType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4331))
// CS Name: IndexFilter::IndexFilterRandomType
struct CORDL_TYPE GlobalNamespace__IndexFilter__IndexFilterRandomType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__IndexFilter__IndexFilterRandomType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__IndexFilter__IndexFilterRandomType(GlobalNamespace__IndexFilter__IndexFilterRandomType const&) = default;
                    constexpr GlobalNamespace__IndexFilter__IndexFilterRandomType(GlobalNamespace__IndexFilter__IndexFilterRandomType&&) = default;
                    constexpr GlobalNamespace__IndexFilter__IndexFilterRandomType& operator=(GlobalNamespace__IndexFilter__IndexFilterRandomType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__IndexFilter__IndexFilterRandomType& operator=(GlobalNamespace__IndexFilter__IndexFilterRandomType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IndexFilter__IndexFilterRandomType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__IndexFilter__IndexFilterRandomType_Unwrapped : int32_t {
__NoRandom = 0,
__KeepOrder = 1,
__RandomElements = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__IndexFilter__IndexFilterRandomType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__IndexFilter__IndexFilterRandomType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoRandom offset 0
static GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType const NoRandom;

/// @brief Field KeepOrder offset 0
static GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType const KeepOrder;

/// @brief Field RandomElements offset 0
static GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType const RandomElements;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IndexFilterLimitAlsoAffectType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4332))
// CS Name: IndexFilter::IndexFilterLimitAlsoAffectType
struct CORDL_TYPE GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType(GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType const&) = default;
                    constexpr GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType(GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType&&) = default;
                    constexpr GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType& operator=(GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType& operator=(GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType_Unwrapped : int32_t {
__None = 0,
__Duration = 1,
__Distribution = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType const None;

/// @brief Field Duration offset 0
static GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType const Duration;

/// @brief Field Distribution offset 0
static GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType const Distribution;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetEnumerator>d__19
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4333))
// CS Name: IndexFilter::<GetEnumerator>d__19
class CORDL_TYPE GlobalNamespace__IndexFilter___GetEnumerator_d__19 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__IndexFilter___GetEnumerator_d__19() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IndexFilter___GetEnumerator_d__19", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IndexFilter___GetEnumerator_d__19(GlobalNamespace__IndexFilter___GetEnumerator_d__19 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IndexFilter___GetEnumerator_d__19", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IndexFilter___GetEnumerator_d__19(GlobalNamespace__IndexFilter___GetEnumerator_d__19&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IndexFilter___GetEnumerator_d__19(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__IndexFilter___GetEnumerator_d__19& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IndexFilter___GetEnumerator_d__19& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IndexFilter___GetEnumerator_d__19& operator=(GlobalNamespace__IndexFilter___GetEnumerator_d__19&& o) noexcept = default;
  constexpr GlobalNamespace__IndexFilter___GetEnumerator_d__19& operator=(GlobalNamespace__IndexFilter___GetEnumerator_d__19 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::ValueTuple_3<int32_t,int32_t,int32_t> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::ValueTuple_3<int32_t,int32_t,int32_t> value) ;

constexpr System::ValueTuple_3<int32_t,int32_t,int32_t> __get___2__current() const;

 GlobalNamespace::IndexFilter __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::IndexFilter value) ;

constexpr GlobalNamespace::IndexFilter __get___4__this() const;

 bool __declspec(property(get=__get__shouldLimitDurationOrder_5__2, put=__set__shouldLimitDurationOrder_5__2))  _shouldLimitDurationOrder_5__2;

constexpr void __set__shouldLimitDurationOrder_5__2(bool value) ;

constexpr bool __get__shouldLimitDurationOrder_5__2() const;

 bool __declspec(property(get=__get__shouldLimitDistributionOrder_5__3, put=__set__shouldLimitDistributionOrder_5__3))  _shouldLimitDistributionOrder_5__3;

constexpr void __set__shouldLimitDistributionOrder_5__3(bool value) ;

constexpr bool __get__shouldLimitDistributionOrder_5__3() const;

 int32_t __declspec(property(get=__get__limitedOrderIndex_5__4, put=__set__limitedOrderIndex_5__4))  _limitedOrderIndex_5__4;

constexpr void __set__limitedOrderIndex_5__4(int32_t value) ;

constexpr int32_t __get__limitedOrderIndex_5__4() const;

 System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<int32_t,int32_t>> __declspec(property(get=__get___7__wrap4, put=__set___7__wrap4))  __7__wrap4;

constexpr void __set___7__wrap4(System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<int32_t,int32_t>> value) ;

constexpr System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<int32_t,int32_t>> __get___7__wrap4() const;

 int32_t __declspec(property(get=__get__elementId_5__6, put=__set__elementId_5__6))  _elementId_5__6;

constexpr void __set__elementId_5__6(int32_t value) ;

constexpr int32_t __get__elementId_5__6() const;

 int32_t __declspec(property(get=__get__index_5__7, put=__set__index_5__7))  _index_5__7;

constexpr void __set__index_5__7(int32_t value) ;

constexpr int32_t __get__index_5__7() const;

 int32_t __declspec(property(get=__get__localChunkIndex_5__8, put=__set__localChunkIndex_5__8))  _localChunkIndex_5__8;

constexpr void __set__localChunkIndex_5__8(int32_t value) ;

constexpr int32_t __get__localChunkIndex_5__8() const;


// Properties

 System::ValueTuple_3<int32_t,int32_t,int32_t> __declspec(property(get=System_Collections_Generic_IEnumerator_(System_Int32element,System_Int32durationOrder,System_Int32distributionOrder)__get_Current))  System_Collections_Generic_IEnumerator_(System_Int32element,System_Int32durationOrder,System_Int32distributionOrder)__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__IndexFilter___GetEnumerator_d__19(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21dd850 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21dd928 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21dd944 size 0x508 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x21dde4c size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<(System.Int32element,System.Int32durationOrder,System.Int32distributionOrder)>.get_Current addr 0x21ddefc size 0x10 virtual true final true
 System::ValueTuple_3<int32_t,int32_t,int32_t> System_Collections_Generic_IEnumerator_(System_Int32element,System_Int32durationOrder,System_Int32distributionOrder)__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21ddf0c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21ddf4c size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetValues>d__20
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4334))
// CS Name: IndexFilter::<GetValues>d__20
class CORDL_TYPE GlobalNamespace__IndexFilter___GetValues_d__20 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<int32_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<int32_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<int32_t>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__IndexFilter___GetValues_d__20() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IndexFilter___GetValues_d__20", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IndexFilter___GetValues_d__20(GlobalNamespace__IndexFilter___GetValues_d__20 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IndexFilter___GetValues_d__20", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IndexFilter___GetValues_d__20(GlobalNamespace__IndexFilter___GetValues_d__20&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IndexFilter___GetValues_d__20(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__IndexFilter___GetValues_d__20& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IndexFilter___GetValues_d__20& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IndexFilter___GetValues_d__20& operator=(GlobalNamespace__IndexFilter___GetValues_d__20&& o) noexcept = default;
  constexpr GlobalNamespace__IndexFilter___GetValues_d__20& operator=(GlobalNamespace__IndexFilter___GetValues_d__20 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 int32_t __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(int32_t value) ;

constexpr int32_t __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 GlobalNamespace::IndexFilter __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::IndexFilter value) ;

constexpr GlobalNamespace::IndexFilter __get___4__this() const;

 int32_t __declspec(property(get=__get__value_5__2, put=__set__value_5__2))  _value_5__2;

constexpr void __set__value_5__2(int32_t value) ;

constexpr int32_t __get__value_5__2() const;

 int32_t __declspec(property(get=__get__i_5__3, put=__set__i_5__3))  _i_5__3;

constexpr void __set__i_5__3(int32_t value) ;

constexpr int32_t __get__i_5__3() const;


// Properties

 int32_t __declspec(property(get=System_Collections_Generic_IEnumerator_System_Int32__get_Current))  System_Collections_Generic_IEnumerator_System_Int32__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__IndexFilter___GetValues_d__20(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21dd8f0 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21ddfb0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21ddfb4 size 0x80 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current addr 0x21de034 size 0x8 virtual true final true
 int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21de03c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21de07c size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator addr 0x21de0d8 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<int32_t> System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x21de17c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IndexFilter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4335))
// CS Name: IndexFilter
class CORDL_TYPE IndexFilter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetValues_d__20 = GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20;

using _GetEnumerator_d__19 = GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19;

using IndexFilterLimitAlsoAffectType = GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType;

using IndexFilterRandomType = GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~IndexFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "IndexFilter", modifiers: " const&", def_value: None }]
constexpr IndexFilter(IndexFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IndexFilter", modifiers: "&&", def_value: None }]
constexpr IndexFilter(IndexFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IndexFilter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IndexFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IndexFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IndexFilter& operator=(IndexFilter&& o) noexcept = default;
  constexpr IndexFilter& operator=(IndexFilter const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType __declspec(property(get=__get__random, put=__set__random))  _random;

constexpr void __set__random(GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType value) ;

constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType __get__random() const;

 int32_t __declspec(property(get=__get__seed, put=__set__seed))  _seed;

constexpr void __set__seed(int32_t value) ;

constexpr int32_t __get__seed() const;

 int32_t __declspec(property(get=__get__groupSize, put=__set__groupSize))  _groupSize;

constexpr void __set__groupSize(int32_t value) ;

constexpr int32_t __get__groupSize() const;

 int32_t __declspec(property(get=__get__chunkSize, put=__set__chunkSize))  _chunkSize;

constexpr void __set__chunkSize(int32_t value) ;

constexpr int32_t __get__chunkSize() const;

 int32_t __declspec(property(get=__get__visibleCount, put=__set__visibleCount))  _visibleCount;

constexpr void __set__visibleCount(int32_t value) ;

constexpr int32_t __get__visibleCount() const;

 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType __declspec(property(get=__get__limitAlsoAffectType, put=__set__limitAlsoAffectType))  _limitAlsoAffectType;

constexpr void __set__limitAlsoAffectType(GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType value) ;

constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType __get__limitAlsoAffectType() const;

 int32_t __declspec(property(get=__get__start, put=__set__start))  _start;

constexpr void __set__start(int32_t value) ;

constexpr int32_t __get__start() const;

 int32_t __declspec(property(get=__get__step, put=__set__step))  _step;

constexpr void __set__step(int32_t value) ;

constexpr int32_t __get__step() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=get_VisibleCount))  VisibleCount;

 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType __declspec(property(get=get_limitAlsoAffectType))  limitAlsoAffectType;


// Methods

/// @brief Method get_Count addr 0x21dd750 size 0x8 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_VisibleCount addr 0x21dd758 size 0x8 virtual false final false
 int32_t get_VisibleCount() ;

/// @brief Method get_limitAlsoAffectType addr 0x21dd760 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType get_limitAlsoAffectType() ;

// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "step", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "groupSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "random", ty: "GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType", modifiers: "", def_value: None }, CppParam { name: "seed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "limitAlsoAffectType", ty: "GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType", modifiers: "", def_value: None }]
explicit IndexFilter(int32_t start, int32_t step, int32_t count, int32_t groupSize, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType) ;

/// @brief Method .ctor addr 0x21dd768 size 0xe8 virtual false final false
 void _ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType) ;

// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "groupSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "random", ty: "GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType", modifiers: "", def_value: None }, CppParam { name: "seed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "limitAlsoAffectType", ty: "GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType", modifiers: "", def_value: None }]
explicit IndexFilter(int32_t start, int32_t end, int32_t groupSize, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType) ;

/// @brief Method .ctor addr 0x21db8d4 size 0xe0 virtual false final false
 void _ctor(int32_t start, int32_t end, int32_t groupSize, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType) ;

/// @brief Method GetEnumerator addr 0x21db080 size 0x68 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<int32_t,int32_t,int32_t>> GetEnumerator() ;

/// @brief Method GetValues addr 0x21dd878 size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> GetValues() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x21dd924 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType, "", "IndexFilter/IndexFilterLimitAlsoAffectType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType, "", "IndexFilter/IndexFilterRandomType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19, "", "IndexFilter/<GetEnumerator>d__19");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20, "", "IndexFilter/<GetValues>d__20");
NEED_NO_BOX(GlobalNamespace::IndexFilter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IndexFilter, "", "IndexFilter");
