#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TDistance>
class INearestNeighbourList_2;
}
// Type: UnityEngine.ProBuilder.KdTree::INearestNeighbourList`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<typename TItem,typename TDistance>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15805))
// CS Name: UnityEngine.ProBuilder.KdTree.INearestNeighbourList`2
class CORDL_TYPE INearestNeighbourList_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INearestNeighbourList_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INearestNeighbourList_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_MaxCapacity))  MaxCapacity;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Add(TItem item, TDistance distance) ;

/// @brief Method GetFurtherest addr 0x0 size 0xffffffffffffffff virtual true final false
 TItem GetFurtherest() ;

/// @brief Method RemoveFurtherest addr 0x0 size 0xffffffffffffffff virtual true final false
 TItem RemoveFurtherest() ;

/// @brief Method get_MaxCapacity addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_MaxCapacity() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2, "UnityEngine.ProBuilder.KdTree", "INearestNeighbourList`2");
