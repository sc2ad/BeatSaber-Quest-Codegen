#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/zzzz__TMP_VertexDataUpdateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TMP_VertexDataUpdateFlags::TMP_VertexDataUpdateFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::TMP_VertexDataUpdateFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_VertexDataUpdateFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::None{0};
constexpr TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Vertices{1};
constexpr TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Uv0{2};
constexpr TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Uv2{4};
constexpr TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Uv4{8};
constexpr TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Colors32{16};
constexpr TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::All{255};
