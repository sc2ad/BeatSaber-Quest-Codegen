#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextureFormat::TextureFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextureFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextureFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::Alpha8{1};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ARGB4444{2};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGB24{3};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGBA32{4};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ARGB32{5};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGB565{7};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::R16{9};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::DXT1{10};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::DXT5{12};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGBA4444{13};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::BGRA32{14};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RHalf{15};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGHalf{16};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGBAHalf{17};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RFloat{18};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGFloat{19};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGBAFloat{20};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::YUY2{21};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGB9e5Float{22};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::BC4{26};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::BC5{27};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::BC6H{24};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::BC7{25};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::DXT1Crunched{28};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::DXT5Crunched{29};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::PVRTC_RGB2{30};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::PVRTC_RGBA2{31};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::PVRTC_RGB4{32};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::PVRTC_RGBA4{33};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ETC_RGB4{34};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::EAC_R{41};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::EAC_R_SIGNED{42};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::EAC_RG{43};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::EAC_RG_SIGNED{44};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ETC2_RGB{45};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ETC2_RGBA1{46};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ETC2_RGBA8{47};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_4x4{48};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_5x5{49};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_6x6{50};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_8x8{51};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_10x10{52};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_12x12{53};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ETC_RGB4_3DS{60};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ETC_RGBA8_3DS{61};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RG16{62};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::R8{63};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ETC_RGB4Crunched{64};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ETC2_RGBA8Crunched{65};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_HDR_4x4{66};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_HDR_5x5{67};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_HDR_6x6{68};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_HDR_8x8{69};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_HDR_10x10{70};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_HDR_12x12{71};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RG32{72};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGB48{73};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::RGBA64{74};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGB_4x4{48};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGB_5x5{49};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGB_6x6{50};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGB_8x8{51};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGB_10x10{52};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGB_12x12{53};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGBA_4x4{54};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGBA_5x5{55};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGBA_6x6{56};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGBA_8x8{57};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGBA_10x10{58};
constexpr UnityEngine::TextureFormat  UnityEngine::TextureFormat::ASTC_RGBA_12x12{59};
