#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/KdTree/zzzz__ItemPriority_2_def.hpp"
// Ctor Parameters [CppParam { name: "Item", ty: "TItem", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Priority", ty: "TPriority", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::ProBuilder::KdTree::ItemPriority_2::ItemPriority_2(TItem Item, TPriority Priority) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item = Item;
this->Priority = Priority;
}
constexpr void ::UnityEngine::ProBuilder::KdTree::ItemPriority_2::__set_Item(TItem value)  {
::cordl_internals::setInstanceField<TItem, 0x0>(this->__instance, std::forward<TItem>(value));
}
constexpr TItem ::UnityEngine::ProBuilder::KdTree::ItemPriority_2::__get_Item() const {
return ::cordl_internals::getInstanceField<TItem, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::ItemPriority_2::__set_Priority(TPriority value)  {
::cordl_internals::setInstanceField<TPriority, 0x8>(this->__instance, std::forward<TPriority>(value));
}
constexpr TPriority ::UnityEngine::ProBuilder::KdTree::ItemPriority_2::__get_Priority() const {
return ::cordl_internals::getInstanceField<TPriority, 0x8>(this->__instance);
}
} // end anonymous namespace
