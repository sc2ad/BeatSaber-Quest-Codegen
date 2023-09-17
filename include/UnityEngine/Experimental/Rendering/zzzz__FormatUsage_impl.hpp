#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Experimental/Rendering/zzzz__FormatUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage::FormatUsage(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Experimental::Rendering::FormatUsage::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::Rendering::FormatUsage::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::Sample{0};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::Linear{1};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::Sparse{2};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::Render{4};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::Blend{5};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::GetPixels{6};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::SetPixels{7};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::SetPixels32{8};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::ReadPixels{9};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::LoadStore{10};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::MSAA2x{11};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::MSAA4x{12};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::MSAA8x{13};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  ::UnityEngine::Experimental::Rendering::FormatUsage::StencilSampling{16};
} // end anonymous namespace
