#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__LowLevelList_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__LowLevelListWithIList_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class LowLevelListWithIList_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class LowLevelListWithIList_1<T>;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__LowLevelListWithIList_1__Enumerator;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
struct System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>;
}
// Type: ::Enumerator
// Type: System.Collections.Generic::LowLevelListWithIList`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3845)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3845), inst: 2 })
// CS Name: System.Collections.Generic.LowLevelListWithIList`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_list", ty: "System::Collections::Generic::LowLevelListWithIList_1<T>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__LowLevelListWithIList_1__Enumerator(System::Collections::Generic::LowLevelListWithIList_1<T> _list, int32_t _index, int32_t _version, T _current) noexcept;


                    constexpr System__Collections__Generic__LowLevelListWithIList_1__Enumerator(System__Collections__Generic__LowLevelListWithIList_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__LowLevelListWithIList_1__Enumerator(System__Collections__Generic__LowLevelListWithIList_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__LowLevelListWithIList_1__Enumerator& operator=(System__Collections__Generic__LowLevelListWithIList_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__LowLevelListWithIList_1__Enumerator& operator=(System__Collections__Generic__LowLevelListWithIList_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LowLevelListWithIList_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::LowLevelListWithIList_1<T> __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Generic::LowLevelListWithIList_1<T> value) ;

constexpr System::Collections::Generic::LowLevelListWithIList_1<T> __get__list() const;

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
 void _ctor(System::Collections::Generic::LowLevelListWithIList_1<T> list) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method MoveNextRare addr 0x0 size 0xffffffffffffffff virtual false final false
 bool MoveNextRare() ;

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
// Type: System.Collections.Generic::LowLevelListWithIList`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3844), inst: 2548 }), TypeDefinitionIndex(TypeDefinitionIndex(3844)), TypeDefinitionIndex(TypeDefinitionIndex(3846))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3846), inst: 2 })
// CS Name: System.Collections.Generic.LowLevelListWithIList`1
class CORDL_TYPE LowLevelListWithIList_1<T> : public System::Collections::Generic::LowLevelList_1<T> {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>;

/// @brief Convert operator to System::Collections::Generic::IList_1<T>
constexpr operator  System::Collections::Generic::IList_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr operator  System::Collections::Generic::ICollection_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LowLevelListWithIList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelListWithIList_1", modifiers: " const&", def_value: None }]
constexpr LowLevelListWithIList_1(LowLevelListWithIList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelListWithIList_1", modifiers: "&&", def_value: None }]
constexpr LowLevelListWithIList_1(LowLevelListWithIList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LowLevelListWithIList_1(void* ptr) noexcept : System::Collections::Generic::LowLevelList_1<T>(ptr) {
}


  constexpr LowLevelListWithIList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LowLevelListWithIList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LowLevelListWithIList_1& operator=(LowLevelListWithIList_1&& o) noexcept = default;
  constexpr LowLevelListWithIList_1& operator=(LowLevelListWithIList_1 const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;


// Methods

static System::Collections::Generic::LowLevelListWithIList_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::LowLevelListWithIList_1<T> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::LowLevelListWithIList_1, "System.Collections.Generic", "LowLevelListWithIList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator, "System.Collections.Generic", "LowLevelListWithIList`1/Enumerator");
