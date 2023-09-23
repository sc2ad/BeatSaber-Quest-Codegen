#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Linq {
template<typename TElement>
class EnumerableSorter_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace Zenject {
struct Zenject__DisposableManager__DisposableInfo;
}
namespace Zenject {
struct Zenject__PoolableManager__PoolableInfo;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement,typename TKey>
class EnumerableSorter_2;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement,::cordl_internals::il2cpp_reference_type TKey>
class EnumerableSorter_2<TElement,TKey>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class EnumerableSorter_2<TElement,uint32_t>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class EnumerableSorter_2<TElement,int32_t>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class EnumerableSorter_2<TElement,float_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<float_t,float_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<int32_t,float_t>;
}
// Type: System.Linq::EnumerableSorter`2
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement,::cordl_internals::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14575)), TypeDefinitionIndex(TypeDefinitionIndex(14574)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 80 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<TElement,TKey> : public System::Linq::EnumerableSorter_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<TElement>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TElement,TKey> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<TElement,TKey> value) ;

constexpr System::Func_2<TElement,TKey> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<TKey> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<TKey> value) ;

constexpr System::Collections::Generic::IComparer_1<TKey> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<TElement> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<TElement> value) ;

constexpr System::Linq::EnumerableSorter_1<TElement> __get_next() const;

 ::ArrayW<TKey> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<TKey> value) ;

constexpr ::ArrayW<TKey> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<TElement,TKey>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<TKey>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<TElement>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<TElement,TKey> keySelector, System::Collections::Generic::IComparer_1<TKey> comparer, bool descending, System::Linq::EnumerableSorter_1<TElement> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<TElement,TKey> keySelector, System::Collections::Generic::IComparer_1<TKey> comparer, bool descending, System::Linq::EnumerableSorter_1<TElement> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<TElement> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14575)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 }), TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 512 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<int32_t,float_t> : public System::Linq::EnumerableSorter_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<int32_t>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<int32_t,float_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<int32_t,float_t> value) ;

constexpr System::Func_2<int32_t,float_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<float_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<float_t> value) ;

constexpr System::Collections::Generic::IComparer_1<float_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<int32_t> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<int32_t> value) ;

constexpr System::Linq::EnumerableSorter_1<int32_t> __get_next() const;

 ::ArrayW<float_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<int32_t,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<int32_t>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<int32_t,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, System::Linq::EnumerableSorter_1<int32_t> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<int32_t,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, System::Linq::EnumerableSorter_1<int32_t> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<int32_t> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14575)), TypeDefinitionIndex(TypeDefinitionIndex(14574)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 561 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<float_t,float_t> : public System::Linq::EnumerableSorter_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<float_t>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<float_t,float_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<float_t,float_t> value) ;

constexpr System::Func_2<float_t,float_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<float_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<float_t> value) ;

constexpr System::Collections::Generic::IComparer_1<float_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<float_t> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<float_t> value) ;

constexpr System::Linq::EnumerableSorter_1<float_t> __get_next() const;

 ::ArrayW<float_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<float_t,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<float_t>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<float_t,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, System::Linq::EnumerableSorter_1<float_t> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<float_t,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, System::Linq::EnumerableSorter_1<float_t> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<float_t> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14575)), TypeDefinitionIndex(TypeDefinitionIndex(14574)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 1548 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<TElement,int32_t> : public System::Linq::EnumerableSorter_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<TElement>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TElement,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<TElement,int32_t> value) ;

constexpr System::Func_2<TElement,int32_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<TElement> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<TElement> value) ;

constexpr System::Linq::EnumerableSorter_1<TElement> __get_next() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<TElement,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<TElement>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<TElement,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<TElement> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<TElement,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<TElement> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<TElement> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 }), TypeDefinitionIndex(TypeDefinitionIndex(14575)), TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 1553 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<TElement,float_t> : public System::Linq::EnumerableSorter_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<TElement>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TElement,float_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<TElement,float_t> value) ;

constexpr System::Func_2<TElement,float_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<float_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<float_t> value) ;

constexpr System::Collections::Generic::IComparer_1<float_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<TElement> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<TElement> value) ;

constexpr System::Linq::EnumerableSorter_1<TElement> __get_next() const;

 ::ArrayW<float_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<TElement,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<TElement>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<TElement,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, System::Linq::EnumerableSorter_1<TElement> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<TElement,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, System::Linq::EnumerableSorter_1<TElement> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<TElement> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14575)), TypeDefinitionIndex(TypeDefinitionIndex(14574)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 1557 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<TElement,uint32_t> : public System::Linq::EnumerableSorter_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<TElement>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TElement,uint32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<TElement,uint32_t> value) ;

constexpr System::Func_2<TElement,uint32_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<uint32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<uint32_t> value) ;

constexpr System::Collections::Generic::IComparer_1<uint32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<TElement> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<TElement> value) ;

constexpr System::Linq::EnumerableSorter_1<TElement> __get_next() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<TElement,uint32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<TElement>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<TElement,uint32_t> keySelector, System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<TElement> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<TElement,uint32_t> keySelector, System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<TElement> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<TElement> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14575)), TypeDefinitionIndex(TypeDefinitionIndex(14574)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 2190 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> : public System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> value) ;

constexpr System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

constexpr System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get_next() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14574)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 }), TypeDefinitionIndex(TypeDefinitionIndex(14575))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 2213 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> : public System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> value) ;

constexpr System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<uint32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<uint32_t> value) ;

constexpr System::Collections::Generic::IComparer_1<uint32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) ;

constexpr System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __get_next() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> keySelector, System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> keySelector, System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14575)), TypeDefinitionIndex(TypeDefinitionIndex(14574)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 2345 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> : public System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> value) ;

constexpr System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo> value) ;

constexpr System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo> __get_next() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14575)), TypeDefinitionIndex(TypeDefinitionIndex(14574)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 2363 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> : public System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> value) ;

constexpr System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo> value) ;

constexpr System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo> __get_next() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14575)), TypeDefinitionIndex(TypeDefinitionIndex(14574)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 1594 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14575), inst: 7119 })
// CS Name: System.Linq.EnumerableSorter`2
class CORDL_TYPE EnumerableSorter_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> : public System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnumerableSorter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_2(EnumerableSorter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_2(void* ptr) noexcept : System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr EnumerableSorter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2&& o) noexcept = default;
  constexpr EnumerableSorter_2& operator=(EnumerableSorter_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> value) ;

constexpr System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> __get_keySelector() const;

 System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;

 System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __get_next() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "keySelector", ty: "System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }]
explicit EnumerableSorter_2(System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::EnumerableSorter_2, "System.Linq", "EnumerableSorter`2");
