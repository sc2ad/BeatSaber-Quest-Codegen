#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::RuntimePlatform::RuntimePlatform(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::RuntimePlatform::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::RuntimePlatform::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::OSXEditor{0};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::OSXPlayer{1};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WindowsPlayer{2};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::OSXWebPlayer{3};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::OSXDashboardPlayer{4};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WindowsWebPlayer{5};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WindowsEditor{7};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::IPhonePlayer{8};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::XBOX360{10};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::PS3{9};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::Android{11};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::NaCl{12};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::FlashPlayer{15};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::LinuxPlayer{13};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::LinuxEditor{16};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WebGLPlayer{17};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::MetroPlayerX86{18};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WSAPlayerX86{18};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::MetroPlayerX64{19};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WSAPlayerX64{19};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::MetroPlayerARM{20};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WSAPlayerARM{20};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WP8Player{21};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::BlackBerryPlayer{22};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::TizenPlayer{23};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::PSP2{24};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::PS4{25};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::PSM{26};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::XboxOne{27};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::SamsungTVPlayer{28};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WiiU{30};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::tvOS{31};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::Switch{32};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::Lumin{33};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::Stadia{34};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::CloudRendering{35};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::GameCoreScarlett{-1};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::GameCoreXboxSeries{36};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::GameCoreXboxOne{37};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::PS5{38};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::EmbeddedLinuxArm64{39};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::EmbeddedLinuxArm32{40};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::EmbeddedLinuxX64{41};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::EmbeddedLinuxX86{42};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::LinuxServer{43};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::WindowsServer{44};
constexpr UnityEngine::RuntimePlatform  UnityEngine::RuntimePlatform::OSXServer{45};
