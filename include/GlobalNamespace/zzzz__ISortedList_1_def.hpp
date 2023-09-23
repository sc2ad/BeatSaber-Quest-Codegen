#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ISortedList_1;
}
// Type: ::ISortedList`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14959))
// CS Name: ISortedList`1
class CORDL_TYPE ISortedList_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISortedList_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISortedList_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_count))  count;

 System::Collections::Generic::LinkedList_1<T> __declspec(property(get=get_items))  items;


// Methods

/// @brief Method get_count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_count() ;

/// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::LinkedList_1<T> get_items() ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::LinkedListNode_1<T> Insert(T newItem) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 void Remove(System::Collections::Generic::LinkedListNode_1<T> node) ;

/// @brief Method TouchLastUsedNode addr 0x0 size 0xffffffffffffffff virtual true final false
 void TouchLastUsedNode(System::Collections::Generic::LinkedListNode_1<T> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ISortedList_1, "", "ISortedList`1");
