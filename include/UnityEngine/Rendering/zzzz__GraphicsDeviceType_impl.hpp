#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::GraphicsDeviceType::GraphicsDeviceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::GraphicsDeviceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::GraphicsDeviceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::OpenGL2{0};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Direct3D9{1};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Direct3D11{2};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStation3{3};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Null{4};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Xbox360{6};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::OpenGLES2{8};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::OpenGLES3{11};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStationVita{12};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStation4{13};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::XboxOne{14};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStationMobile{15};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Metal{16};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::OpenGLCore{17};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Direct3D12{18};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::N3DS{19};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Vulkan{21};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Switch{22};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::XboxOneD3D12{23};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::GameCoreXboxOne{24};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::GameCoreScarlett{-1};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::GameCoreXboxSeries{25};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStation5{26};
constexpr UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStation5NGGC{27};
