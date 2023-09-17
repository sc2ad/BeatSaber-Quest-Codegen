#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__TextAlignmentOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextAlignmentOptions::TextAlignmentOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::TextAlignmentOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TextAlignmentOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::TopLeft{257};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Top{258};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::TopRight{260};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::TopJustified{264};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::TopFlush{272};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::TopGeoAligned{288};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Left{513};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Center{514};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Right{516};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Justified{520};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Flush{528};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::CenterGeoAligned{544};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BottomLeft{1025};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Bottom{1026};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BottomRight{1028};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BottomJustified{1032};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BottomFlush{1040};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BottomGeoAligned{1056};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BaselineLeft{2049};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Baseline{2050};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BaselineRight{2052};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BaselineJustified{2056};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BaselineFlush{2064};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::BaselineGeoAligned{2080};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::MidlineLeft{4097};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Midline{4098};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::MidlineRight{4100};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::MidlineJustified{4104};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::MidlineFlush{4112};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::MidlineGeoAligned{4128};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::CaplineLeft{8193};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Capline{8194};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::CaplineRight{8196};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::CaplineJustified{8200};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::CaplineFlush{8208};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::CaplineGeoAligned{8224};
constexpr ::TMPro::TextAlignmentOptions  ::TMPro::TextAlignmentOptions::Converted{65535};
} // end anonymous namespace
