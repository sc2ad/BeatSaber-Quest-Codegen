#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class Set_1;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class Set_1<TElement>;
}
namespace System::Linq {
template<>
class Set_1<UnityEngine::ProBuilder::Edge>;
}
namespace System::Linq {
template<>
class Set_1<UnityEngine::ProBuilder::EdgeLookup>;
}
namespace System::Linq {
template<>
class Set_1<UnityEngine::SceneManagement::Scene>;
}
namespace System::Linq {
template<>
class Set_1<char16_t>;
}
namespace System::Linq {
template<>
class Set_1<int32_t>;
}
namespace System::Linq {
template<typename TElement>
struct System__Linq__Set_1__Slot;
}
// Type: ::Slot
namespace System::Linq {
// cpp template
template<typename TElement>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14568))
// CS Name: System.Linq.Set`1::Slot
struct CORDL_TYPE System__Linq__Set_1__Slot : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TElement", modifiers: "", def_value: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Linq__Set_1__Slot(int32_t hashCode, TElement value, int32_t next) noexcept;


                    constexpr System__Linq__Set_1__Slot(System__Linq__Set_1__Slot const&) = default;
                    constexpr System__Linq__Set_1__Slot(System__Linq__Set_1__Slot&&) = default;
                    constexpr System__Linq__Set_1__Slot& operator=(System__Linq__Set_1__Slot const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Linq__Set_1__Slot& operator=(System__Linq__Set_1__Slot&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Linq__Set_1__Slot(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_hashCode, put=__set_hashCode))  hashCode;

constexpr void __set_hashCode(int32_t value) ;

constexpr int32_t __get_hashCode() const;

 TElement __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(TElement value) ;

constexpr TElement __get_value() const;

 int32_t __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(int32_t value) ;

constexpr int32_t __get_next() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14569), inst: 2 })
// CS Name: System.Linq.Set`1
class CORDL_TYPE Set_1<TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Slot = System::Linq::System__Linq__Set_1__Slot<TElement>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Set_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: " const&", def_value: None }]
constexpr Set_1(Set_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
constexpr Set_1(Set_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Set_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Set_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Set_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Set_1& operator=(Set_1&& o) noexcept = default;
  constexpr Set_1& operator=(Set_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_buckets, put=__set_buckets))  buckets;

constexpr void __set_buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_buckets() const;

 ::ArrayW<System::Linq::System__Linq__Set_1__Slot<TElement>> __declspec(property(get=__get_slots, put=__set_slots))  slots;

constexpr void __set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<TElement>> value) ;

constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<TElement>> __get_slots() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_freeList, put=__set_freeList))  freeList;

constexpr void __set_freeList(int32_t value) ;

constexpr int32_t __get_freeList() const;

 System::Collections::Generic::IEqualityComparer_1<TElement> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IEqualityComparer_1<TElement> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<TElement> __get_comparer() const;


// Methods

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<TElement>", modifiers: "", def_value: None }]
explicit Set_1(System::Collections::Generic::IEqualityComparer_1<TElement> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<TElement> comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Add(TElement value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Find(TElement value, bool add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(TElement value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14569), inst: 92 })
// CS Name: System.Linq.Set`1
class CORDL_TYPE Set_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Slot = System::Linq::System__Linq__Set_1__Slot<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Set_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: " const&", def_value: None }]
constexpr Set_1(Set_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
constexpr Set_1(Set_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Set_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Set_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Set_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Set_1& operator=(Set_1&& o) noexcept = default;
  constexpr Set_1& operator=(Set_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_buckets, put=__set_buckets))  buckets;

constexpr void __set_buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_buckets() const;

 ::ArrayW<System::Linq::System__Linq__Set_1__Slot<int32_t>> __declspec(property(get=__get_slots, put=__set_slots))  slots;

constexpr void __set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<int32_t>> value) ;

constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<int32_t>> __get_slots() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_freeList, put=__set_freeList))  freeList;

constexpr void __set_freeList(int32_t value) ;

constexpr int32_t __get_freeList() const;

 System::Collections::Generic::IEqualityComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IEqualityComparer_1<int32_t> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<int32_t> __get_comparer() const;


// Methods

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<int32_t>", modifiers: "", def_value: None }]
explicit Set_1(System::Collections::Generic::IEqualityComparer_1<int32_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<int32_t> comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Add(int32_t value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Find(int32_t value, bool add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14569), inst: 279 })
// CS Name: System.Linq.Set`1
class CORDL_TYPE Set_1<char16_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Slot = System::Linq::System__Linq__Set_1__Slot<char16_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Set_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: " const&", def_value: None }]
constexpr Set_1(Set_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
constexpr Set_1(Set_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Set_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Set_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Set_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Set_1& operator=(Set_1&& o) noexcept = default;
  constexpr Set_1& operator=(Set_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_buckets, put=__set_buckets))  buckets;

constexpr void __set_buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_buckets() const;

 ::ArrayW<System::Linq::System__Linq__Set_1__Slot<char16_t>> __declspec(property(get=__get_slots, put=__set_slots))  slots;

constexpr void __set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<char16_t>> value) ;

constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<char16_t>> __get_slots() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_freeList, put=__set_freeList))  freeList;

constexpr void __set_freeList(int32_t value) ;

constexpr int32_t __get_freeList() const;

 System::Collections::Generic::IEqualityComparer_1<char16_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IEqualityComparer_1<char16_t> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<char16_t> __get_comparer() const;


// Methods

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<char16_t>", modifiers: "", def_value: None }]
explicit Set_1(System::Collections::Generic::IEqualityComparer_1<char16_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<char16_t> comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Add(char16_t value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Find(char16_t value, bool add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(char16_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14569), inst: 2491 })
// CS Name: System.Linq.Set`1
class CORDL_TYPE Set_1<UnityEngine::ProBuilder::Edge> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Slot = System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::Edge>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Set_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: " const&", def_value: None }]
constexpr Set_1(Set_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
constexpr Set_1(Set_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Set_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Set_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Set_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Set_1& operator=(Set_1&& o) noexcept = default;
  constexpr Set_1& operator=(Set_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_buckets, put=__set_buckets))  buckets;

constexpr void __set_buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_buckets() const;

 ::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::Edge>> __declspec(property(get=__get_slots, put=__set_slots))  slots;

constexpr void __set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::Edge>> value) ;

constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::Edge>> __get_slots() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_freeList, put=__set_freeList))  freeList;

constexpr void __set_freeList(int32_t value) ;

constexpr int32_t __get_freeList() const;

 System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge> __get_comparer() const;


// Methods

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }]
explicit Set_1(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge> comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Add(UnityEngine::ProBuilder::Edge value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Find(UnityEngine::ProBuilder::Edge value, bool add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(UnityEngine::ProBuilder::Edge value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14569), inst: 2492 })
// CS Name: System.Linq.Set`1
class CORDL_TYPE Set_1<UnityEngine::ProBuilder::EdgeLookup> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Slot = System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::EdgeLookup>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Set_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: " const&", def_value: None }]
constexpr Set_1(Set_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
constexpr Set_1(Set_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Set_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Set_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Set_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Set_1& operator=(Set_1&& o) noexcept = default;
  constexpr Set_1& operator=(Set_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_buckets, put=__set_buckets))  buckets;

constexpr void __set_buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_buckets() const;

 ::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::EdgeLookup>> __declspec(property(get=__get_slots, put=__set_slots))  slots;

constexpr void __set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::EdgeLookup>> value) ;

constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::EdgeLookup>> __get_slots() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_freeList, put=__set_freeList))  freeList;

constexpr void __set_freeList(int32_t value) ;

constexpr int32_t __get_freeList() const;

 System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> __get_comparer() const;


// Methods

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>", modifiers: "", def_value: None }]
explicit Set_1(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Add(UnityEngine::ProBuilder::EdgeLookup value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Find(UnityEngine::ProBuilder::EdgeLookup value, bool add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(UnityEngine::ProBuilder::EdgeLookup value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14569), inst: 3012 })
// CS Name: System.Linq.Set`1
class CORDL_TYPE Set_1<UnityEngine::SceneManagement::Scene> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Slot = System::Linq::System__Linq__Set_1__Slot<UnityEngine::SceneManagement::Scene>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Set_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: " const&", def_value: None }]
constexpr Set_1(Set_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
constexpr Set_1(Set_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Set_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Set_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Set_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Set_1& operator=(Set_1&& o) noexcept = default;
  constexpr Set_1& operator=(Set_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_buckets, put=__set_buckets))  buckets;

constexpr void __set_buckets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_buckets() const;

 ::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::SceneManagement::Scene>> __declspec(property(get=__get_slots, put=__set_slots))  slots;

constexpr void __set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::SceneManagement::Scene>> value) ;

constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::SceneManagement::Scene>> __get_slots() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_freeList, put=__set_freeList))  freeList;

constexpr void __set_freeList(int32_t value) ;

constexpr int32_t __get_freeList() const;

 System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene> __get_comparer() const;


// Methods

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene>", modifiers: "", def_value: None }]
explicit Set_1(System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene> comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Add(UnityEngine::SceneManagement::Scene value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Find(UnityEngine::SceneManagement::Scene value, bool add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(UnityEngine::SceneManagement::Scene value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Set_1, "System.Linq", "Set`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Linq::System__Linq__Set_1__Slot, "System.Linq", "Set`1/Slot");
