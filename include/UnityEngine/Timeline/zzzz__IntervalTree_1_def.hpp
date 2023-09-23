#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Timeline {
struct IntervalTreeNode;
}
// Forward declare root types
namespace UnityEngine::Timeline {
template<typename T>
class IntervalTree_1;
}
namespace UnityEngine::Timeline {
template<::cordl_internals::il2cpp_reference_type T>
class IntervalTree_1<T>;
}
namespace UnityEngine::Timeline {
template<typename T>
struct UnityEngine__Timeline__IntervalTree_1__Entry;
}
// Type: ::Entry
namespace UnityEngine::Timeline {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14091))
// CS Name: UnityEngine.Timeline.IntervalTree`1::Entry
struct CORDL_TYPE UnityEngine__Timeline__IntervalTree_1__Entry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "intervalStart", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "intervalEnd", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "item", ty: "T", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__IntervalTree_1__Entry(int64_t intervalStart, int64_t intervalEnd, T item) noexcept;


                    constexpr UnityEngine__Timeline__IntervalTree_1__Entry(UnityEngine__Timeline__IntervalTree_1__Entry const&) = default;
                    constexpr UnityEngine__Timeline__IntervalTree_1__Entry(UnityEngine__Timeline__IntervalTree_1__Entry&&) = default;
                    constexpr UnityEngine__Timeline__IntervalTree_1__Entry& operator=(UnityEngine__Timeline__IntervalTree_1__Entry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__IntervalTree_1__Entry& operator=(UnityEngine__Timeline__IntervalTree_1__Entry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__IntervalTree_1__Entry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int64_t __declspec(property(get=__get_intervalStart, put=__set_intervalStart))  intervalStart;

constexpr void __set_intervalStart(int64_t value) ;

constexpr int64_t __get_intervalStart() const;

 int64_t __declspec(property(get=__get_intervalEnd, put=__set_intervalEnd))  intervalEnd;

constexpr void __set_intervalEnd(int64_t value) ;

constexpr int64_t __get_intervalEnd() const;

 T __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(T value) ;

constexpr T __get_item() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::IntervalTree`1
// Type: UnityEngine.Timeline::IntervalTree`1
namespace UnityEngine::Timeline {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14092))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14092), inst: 2 })
// CS Name: UnityEngine.Timeline.IntervalTree`1
class CORDL_TYPE IntervalTree_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Entry = UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~IntervalTree_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree_1", modifiers: " const&", def_value: None }]
constexpr IntervalTree_1(IntervalTree_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree_1", modifiers: "&&", def_value: None }]
constexpr IntervalTree_1(IntervalTree_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntervalTree_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntervalTree_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntervalTree_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntervalTree_1& operator=(IntervalTree_1&& o) noexcept = default;
  constexpr IntervalTree_1& operator=(IntervalTree_1 const& o) noexcept = default;
                


// Fields

/// @brief Field kMinNodeSize offset 0
static constexpr int32_t  kMinNodeSize{10};

/// @brief Field kInvalidNode offset 0
static constexpr int32_t  kInvalidNode{-1};

/// @brief Field kCenterUnknown offset 0
static constexpr int64_t  kCenterUnknown{9223372036854775807};

 System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry<T>> __declspec(property(get=__get_m_Entries, put=__set_m_Entries))  m_Entries;

constexpr void __set_m_Entries(System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry<T>> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry<T>> __get_m_Entries() const;

 System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode> __declspec(property(get=__get_m_Nodes, put=__set_m_Nodes))  m_Nodes;

constexpr void __set_m_Nodes(System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode> __get_m_Nodes() const;

 bool __declspec(property(get=__get__dirty_k__BackingField, put=__set__dirty_k__BackingField))  _dirty_k__BackingField;

constexpr void __set__dirty_k__BackingField(bool value) ;

constexpr bool __get__dirty_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_dirty, put=set_dirty))  dirty;


// Methods

/// @brief Method get_dirty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_dirty() ;

/// @brief Method set_dirty addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dirty(bool value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item) ;

/// @brief Method IntersectsWith addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectsWith(int64_t value, System::Collections::Generic::List_1<T> results) ;

/// @brief Method IntersectsWithRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void IntersectsWithRange(int64_t start, int64_t end, System::Collections::Generic::List_1<T> results) ;

/// @brief Method UpdateIntervals addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateIntervals() ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual false final false
 void Query(UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t value, System::Collections::Generic::List_1<T> results) ;

/// @brief Method QueryRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueryRange(UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t start, int64_t end, System::Collections::Generic::List_1<T> results) ;

/// @brief Method Rebuild addr 0x0 size 0xffffffffffffffff virtual false final false
 void Rebuild() ;

/// @brief Method Rebuild addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Rebuild(int32_t start, int32_t end) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit IntervalTree_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Timeline::IntervalTree_1, "UnityEngine.Timeline", "IntervalTree`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry, "UnityEngine.Timeline", "IntervalTree`1/Entry");
