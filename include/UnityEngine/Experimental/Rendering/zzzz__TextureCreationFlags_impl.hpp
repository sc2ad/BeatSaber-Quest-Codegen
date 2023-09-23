#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Experimental::Rendering::TextureCreationFlags::TextureCreationFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Experimental::Rendering::TextureCreationFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Experimental::Rendering::TextureCreationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::None{0};
constexpr UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::MipChain{1};
constexpr UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::Crunch{64};
