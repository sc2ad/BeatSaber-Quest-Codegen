#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::Text::TextAlignment::TextAlignment(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextCore::Text::TextAlignment::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextAlignment::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::TopLeft{257};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::TopCenter{258};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::TopRight{260};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::TopJustified{264};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::TopFlush{272};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::TopGeoAligned{288};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MiddleLeft{513};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MiddleCenter{514};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MiddleRight{516};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MiddleJustified{520};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MiddleFlush{528};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MiddleGeoAligned{544};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BottomLeft{1025};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BottomCenter{1026};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BottomRight{1028};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BottomJustified{1032};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BottomFlush{1040};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BottomGeoAligned{1056};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BaselineLeft{2049};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BaselineCenter{2050};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BaselineRight{2052};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BaselineJustified{2056};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BaselineFlush{2064};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::BaselineGeoAligned{2080};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MidlineLeft{4097};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MidlineCenter{4098};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MidlineRight{4100};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MidlineJustified{4104};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MidlineFlush{4112};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::MidlineGeoAligned{4128};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::CaplineLeft{8193};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::CaplineCenter{8194};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::CaplineRight{8196};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::CaplineJustified{8200};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::CaplineFlush{8208};
constexpr UnityEngine::TextCore::Text::TextAlignment  UnityEngine::TextCore::Text::TextAlignment::CaplineGeoAligned{8224};
