#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ISortedListItemProcessor_1;
}
// Type: ::ISortedListItemProcessor`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14958))
// CS Name: ISortedListItemProcessor`1
class CORDL_TYPE ISortedListItemProcessor_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISortedListItemProcessor_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISortedListItemProcessor_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ProcessInsertedData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<T> insertedNode) ;

/// @brief Method ProcessBeforeDeleteData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<T> nodeToDelete) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ISortedListItemProcessor_1, "", "ISortedListItemProcessor`1");
