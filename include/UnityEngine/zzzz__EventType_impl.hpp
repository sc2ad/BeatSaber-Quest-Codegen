#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::EventType::EventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::EventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::EventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::EventType  UnityEngine::EventType::MouseDown{0};
constexpr UnityEngine::EventType  UnityEngine::EventType::MouseUp{1};
constexpr UnityEngine::EventType  UnityEngine::EventType::MouseMove{2};
constexpr UnityEngine::EventType  UnityEngine::EventType::MouseDrag{3};
constexpr UnityEngine::EventType  UnityEngine::EventType::KeyDown{4};
constexpr UnityEngine::EventType  UnityEngine::EventType::KeyUp{5};
constexpr UnityEngine::EventType  UnityEngine::EventType::ScrollWheel{6};
constexpr UnityEngine::EventType  UnityEngine::EventType::Repaint{7};
constexpr UnityEngine::EventType  UnityEngine::EventType::Layout{8};
constexpr UnityEngine::EventType  UnityEngine::EventType::DragUpdated{9};
constexpr UnityEngine::EventType  UnityEngine::EventType::DragPerform{10};
constexpr UnityEngine::EventType  UnityEngine::EventType::DragExited{15};
constexpr UnityEngine::EventType  UnityEngine::EventType::Ignore{11};
constexpr UnityEngine::EventType  UnityEngine::EventType::Used{12};
constexpr UnityEngine::EventType  UnityEngine::EventType::ValidateCommand{13};
constexpr UnityEngine::EventType  UnityEngine::EventType::ExecuteCommand{14};
constexpr UnityEngine::EventType  UnityEngine::EventType::ContextClick{16};
constexpr UnityEngine::EventType  UnityEngine::EventType::MouseEnterWindow{20};
constexpr UnityEngine::EventType  UnityEngine::EventType::MouseLeaveWindow{21};
constexpr UnityEngine::EventType  UnityEngine::EventType::TouchDown{30};
constexpr UnityEngine::EventType  UnityEngine::EventType::TouchUp{31};
constexpr UnityEngine::EventType  UnityEngine::EventType::TouchMove{32};
constexpr UnityEngine::EventType  UnityEngine::EventType::TouchEnter{33};
constexpr UnityEngine::EventType  UnityEngine::EventType::TouchLeave{34};
constexpr UnityEngine::EventType  UnityEngine::EventType::TouchStationary{35};
constexpr UnityEngine::EventType  UnityEngine::EventType::mouseDown{0};
constexpr UnityEngine::EventType  UnityEngine::EventType::mouseUp{1};
constexpr UnityEngine::EventType  UnityEngine::EventType::mouseMove{2};
constexpr UnityEngine::EventType  UnityEngine::EventType::mouseDrag{3};
constexpr UnityEngine::EventType  UnityEngine::EventType::keyDown{4};
constexpr UnityEngine::EventType  UnityEngine::EventType::keyUp{5};
constexpr UnityEngine::EventType  UnityEngine::EventType::scrollWheel{6};
constexpr UnityEngine::EventType  UnityEngine::EventType::repaint{7};
constexpr UnityEngine::EventType  UnityEngine::EventType::layout{8};
constexpr UnityEngine::EventType  UnityEngine::EventType::dragUpdated{9};
constexpr UnityEngine::EventType  UnityEngine::EventType::dragPerform{10};
constexpr UnityEngine::EventType  UnityEngine::EventType::ignore{11};
constexpr UnityEngine::EventType  UnityEngine::EventType::used{12};
