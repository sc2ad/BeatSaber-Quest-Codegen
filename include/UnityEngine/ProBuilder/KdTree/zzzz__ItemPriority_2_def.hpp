#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
struct ItemPriority_2;
}
// Type: UnityEngine.ProBuilder.KdTree::ItemPriority`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<typename TItem,typename TPriority>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15807))
// CS Name: UnityEngine.ProBuilder.KdTree.ItemPriority`2
struct CORDL_TYPE ItemPriority_2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Item", ty: "TItem", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "TPriority", modifiers: "", def_value: None }]
constexpr ItemPriority_2(TItem Item, TPriority Priority) noexcept;


                    constexpr ItemPriority_2(ItemPriority_2 const&) = default;
                    constexpr ItemPriority_2(ItemPriority_2&&) = default;
                    constexpr ItemPriority_2& operator=(ItemPriority_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ItemPriority_2& operator=(ItemPriority_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ItemPriority_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 TItem __declspec(property(get=__get_Item, put=__set_Item))  Item;

constexpr void __set_Item(TItem value) ;

constexpr TItem __get_Item() const;

 TPriority __declspec(property(get=__get_Priority, put=__set_Priority))  Priority;

constexpr void __set_Priority(TPriority value) ;

constexpr TPriority __get_Priority() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ProBuilder::KdTree::ItemPriority_2, "UnityEngine.ProBuilder.KdTree", "ItemPriority`2");
