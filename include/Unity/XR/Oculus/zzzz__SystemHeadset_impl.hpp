#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Unity/XR/Oculus/zzzz__SystemHeadset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::SystemHeadset::SystemHeadset(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Unity::XR::Oculus::SystemHeadset::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::XR::Oculus::SystemHeadset::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::None{0};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Oculus_Quest{8};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Oculus_Quest_2{9};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Placeholder_10{10};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Placeholder_11{11};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Placeholder_12{12};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Placeholder_13{13};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Placeholder_14{14};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Rift_DK1{4096};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Rift_DK2{4097};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Rift_CV1{4098};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Rift_CB{4099};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Rift_S{4100};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Oculus_Link_Quest{4101};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::Oculus_Link_Quest_2{4102};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::PC_Placeholder_4103{4103};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::PC_Placeholder_4104{4104};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::PC_Placeholder_4105{4105};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::PC_Placeholder_4106{4106};
constexpr ::Unity::XR::Oculus::SystemHeadset  ::Unity::XR::Oculus::SystemHeadset::PC_Placeholder_4107{4107};
} // end anonymous namespace
