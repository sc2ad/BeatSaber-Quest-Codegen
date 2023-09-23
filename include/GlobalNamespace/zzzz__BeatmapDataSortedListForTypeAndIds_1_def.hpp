#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
template<typename T>
class ISortedListItemProcessor_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
template<typename T>
class ISortedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase>
class BeatmapDataSortedListForTypeAndIds_1;
}
namespace GlobalNamespace {
template<typename TBase>
class GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TBase>
class BeatmapDataSortedListForTypeAndIds_1<TBase>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TBase>
class GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c<TBase>;
}
// Type: ::<>c
// Type: ::BeatmapDataSortedListForTypeAndIds`1
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4284))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4284), inst: 2 })
// CS Name: BeatmapDataSortedListForTypeAndIds`1::<>c
class CORDL_TYPE GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c<TBase> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c(GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c(GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c& operator=(GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c& operator=(GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c<TBase> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c<TBase> value) ;

static GlobalNamespace::GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c<TBase> __get___9() ;

static System::Func_2<GlobalNamespace::ISortedList_1<TBase>,System::Collections::Generic::LinkedListNode_1<TBase>> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Func_2<GlobalNamespace::ISortedList_1<TBase>,System::Collections::Generic::LinkedListNode_1<TBase>> value) ;

static System::Func_2<GlobalNamespace::ISortedList_1<TBase>,System::Collections::Generic::LinkedListNode_1<TBase>> __get___9__1_0() ;

static System::Func_2<System::Collections::Generic::LinkedListNode_1<TBase>,bool> __declspec(property(get=__get___9__1_1, put=__set___9__1_1))  __9__1_1;

static void __set___9__1_1(System::Func_2<System::Collections::Generic::LinkedListNode_1<TBase>,bool> value) ;

static System::Func_2<System::Collections::Generic::LinkedListNode_1<TBase>,bool> __get___9__1_1() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <get_sortedListHeads>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<TBase> _get_sortedListHeads_b__1_0(GlobalNamespace::ISortedList_1<TBase> listItem) ;

/// @brief Method <get_sortedListHeads>b__1_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _get_sortedListHeads_b__1_1(System::Collections::Generic::LinkedListNode_1<TBase> head) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataSortedListForTypeAndIds`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4285))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4285), inst: 2 })
// CS Name: BeatmapDataSortedListForTypeAndIds`1
class CORDL_TYPE BeatmapDataSortedListForTypeAndIds_1<TBase> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c<TBase>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapDataSortedListForTypeAndIds_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSortedListForTypeAndIds_1", modifiers: " const&", def_value: None }]
constexpr BeatmapDataSortedListForTypeAndIds_1(BeatmapDataSortedListForTypeAndIds_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSortedListForTypeAndIds_1", modifiers: "&&", def_value: None }]
constexpr BeatmapDataSortedListForTypeAndIds_1(BeatmapDataSortedListForTypeAndIds_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataSortedListForTypeAndIds_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataSortedListForTypeAndIds_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataSortedListForTypeAndIds_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataSortedListForTypeAndIds_1& operator=(BeatmapDataSortedListForTypeAndIds_1&& o) noexcept = default;
  constexpr BeatmapDataSortedListForTypeAndIds_1& operator=(BeatmapDataSortedListForTypeAndIds_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,int32_t>,GlobalNamespace::ISortedList_1<TBase>> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,int32_t>,GlobalNamespace::ISortedList_1<TBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,int32_t>,GlobalNamespace::ISortedList_1<TBase>> __get__items() const;

 System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::ISortedListItemProcessor_1<TBase>> __declspec(property(get=__get__sortedListsDataProcessors, put=__set__sortedListsDataProcessors))  _sortedListsDataProcessors;

constexpr void __set__sortedListsDataProcessors(System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::ISortedListItemProcessor_1<TBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::ISortedListItemProcessor_1<TBase>> __get__sortedListsDataProcessors() const;

 System::Collections::Generic::Dictionary_2<TBase,System::Collections::Generic::LinkedListNode_1<TBase>> __declspec(property(get=__get__itemToNodeMap, put=__set__itemToNodeMap))  _itemToNodeMap;

constexpr void __set__itemToNodeMap(System::Collections::Generic::Dictionary_2<TBase,System::Collections::Generic::LinkedListNode_1<TBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<TBase,System::Collections::Generic::LinkedListNode_1<TBase>> __get__itemToNodeMap() const;


// Properties

 ::ArrayW<System::Collections::Generic::LinkedListNode_1<TBase>> __declspec(property(get=get_sortedListHeads))  sortedListHeads;


// Methods

/// @brief Method get_sortedListHeads addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<System::Collections::Generic::LinkedListNode_1<TBase>> get_sortedListHeads() ;

/// @brief Method InsertItem addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::LinkedListNode_1<TBase> InsertItem(TBase item) ;

/// @brief Method RemoveItem addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveItem(TBase item) ;

/// @brief Method GetCount addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 int32_t GetCount(int32_t typeIdentifier) ;

/// @brief Method GetItems addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> GetItems(int32_t typeIdentifier) ;

/// @brief Method GetList addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::ISortedList_1<TBase> GetList(System::Type type, int32_t typeIdentifier) ;

/// @brief Method RemoveList addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveList(System::Type type, int32_t typeIdentifier) ;

// Ctor Parameters []
explicit BeatmapDataSortedListForTypeAndIds_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1, "", "BeatmapDataSortedListForTypeAndIds`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__BeatmapDataSortedListForTypeAndIds_1____c, "", "BeatmapDataSortedListForTypeAndIds`1/<>c");
