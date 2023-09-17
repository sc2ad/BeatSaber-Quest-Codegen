#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
// Type: UnityEngine.ProBuilder.KdTree::IPriorityQueue`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<typename TItem,typename TPriority>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15797))
// CS Name: UnityEngine.ProBuilder.KdTree.IPriorityQueue`2
class CORDL_TYPE IPriorityQueue_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPriorityQueue_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPriorityQueue_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final false
 void Enqueue(TItem item, TPriority priority) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final false
 TItem Dequeue() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2, "UnityEngine.ProBuilder.KdTree", "IPriorityQueue`2");
