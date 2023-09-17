#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
template<typename T>
class ISortedListItemProcessor_1;
}
namespace GlobalNamespace {
template<typename T>
class ISortedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T,typename TBase>
class SortedList_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TBase>
class SortedList_2<T,TBase>;
}
// Type: ::SortedList`2
// Type: ::SortedList`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TBase>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14961))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14961), inst: 80 })
// CS Name: SortedList`2
class CORDL_TYPE SortedList_2<T,TBase> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ISortedList_1<TBase>
constexpr operator  ::GlobalNamespace::ISortedList_1<TBase>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SortedList_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: " const&", def_value: None }]
constexpr SortedList_2(SortedList_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "&&", def_value: None }]
constexpr SortedList_2(SortedList_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortedList_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SortedList_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortedList_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortedList_2& operator=(SortedList_2&& o) noexcept = default;
  constexpr SortedList_2& operator=(SortedList_2 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::LinkedList_1<TBase> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::System::Collections::Generic::LinkedList_1<TBase> value) ;

constexpr ::System::Collections::Generic::LinkedList_1<TBase> __get__items() const;

 ::GlobalNamespace::ISortedListItemProcessor_1<TBase> __declspec(property(get=__get__sortedListDataProcessor, put=__set__sortedListDataProcessor))  _sortedListDataProcessor;

constexpr void __set__sortedListDataProcessor(::GlobalNamespace::ISortedListItemProcessor_1<TBase> value) ;

constexpr ::GlobalNamespace::ISortedListItemProcessor_1<TBase> __get__sortedListDataProcessor() const;

 ::System::Collections::Generic::LinkedListNode_1<TBase> __declspec(property(get=__get__lastUsedNode, put=__set__lastUsedNode))  _lastUsedNode;

constexpr void __set__lastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase> value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<TBase> __get__lastUsedNode() const;


// Properties

 int32_t __declspec(property(get=get_count))  count;

 ::System::Collections::Generic::LinkedList_1<TBase> __declspec(property(get=get_items))  items;


// Methods

/// @brief Method get_count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_count() ;

/// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::LinkedList_1<TBase> get_items() ;

// Ctor Parameters [CppParam { name: "sortedListDataProcessor", ty: "::GlobalNamespace::ISortedListItemProcessor_1<TBase>", modifiers: "", def_value: None }]
explicit SortedList_2(::GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::LinkedListNode_1<TBase> Insert(TBase newItem) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(::System::Collections::Generic::LinkedListNode_1<TBase> node) ;

/// @brief Method TouchLastUsedNode addr 0x0 size 0xffffffffffffffff virtual true final true
 void TouchLastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase> node) ;

/// @brief Method InsertInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::LinkedListNode_1<TBase> InsertInternal(TBase newItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SortedList_2, "", "SortedList`2");
