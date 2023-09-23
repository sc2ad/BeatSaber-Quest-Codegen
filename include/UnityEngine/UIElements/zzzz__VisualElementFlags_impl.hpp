#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::VisualElementFlags::VisualElementFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::VisualElementFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::VisualElementFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::WorldTransformDirty{1};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::WorldTransformInverseDirty{2};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::WorldClipDirty{4};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::BoundingBoxDirty{8};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::WorldBoundingBoxDirty{16};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::LayoutManual{32};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::CompositeRoot{64};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::RequireMeasureFunction{128};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::EnableViewDataPersistence{256};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::DisableClipping{512};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::NeedsAttachToPanelEvent{1024};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::HierarchyDisplayed{2048};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::StyleInitialized{4096};
constexpr UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::Init{2079};
