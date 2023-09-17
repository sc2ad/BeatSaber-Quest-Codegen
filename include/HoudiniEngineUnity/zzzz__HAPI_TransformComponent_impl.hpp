#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_TransformComponent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TransformComponent(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_TransformComponent::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_TransformComponent::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_TX{0};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_TY{1};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_TZ{2};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_RX{3};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_RY{4};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_RZ{5};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_QX{6};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_QY{7};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_QZ{8};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_QW{9};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_SX{10};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_SY{11};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_SZ{12};
} // end anonymous namespace
