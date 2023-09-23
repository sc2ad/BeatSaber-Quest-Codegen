#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/zzzz__TMP_Compatibility_def.hpp"
#include "TMPro/zzzz__TextAlignmentOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions::TMPro__TMP_Compatibility__AnchorPositions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::TMPro__TMP_Compatibility__AnchorPositions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMPro__TMP_Compatibility__AnchorPositions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::TopLeft{0};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::Top{1};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::TopRight{2};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::Left{3};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::Center{4};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::Right{5};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::BottomLeft{6};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::Bottom{7};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::BottomRight{8};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::BaseLine{9};
constexpr TMPro::TMPro__TMP_Compatibility__AnchorPositions  TMPro::TMPro__TMP_Compatibility__AnchorPositions::None{10};
//  Writing Method size for method: TMPro::TMP_Compatibility.ConvertTextAlignmentEnumValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TextAlignmentOptions (*)(TMPro::TextAlignmentOptions)>(&TMPro::TMP_Compatibility::ConvertTextAlignmentEnumValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a6a734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Compatibility>::get(),
                            "ConvertTextAlignmentEnumValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TextAlignmentOptions>::get()}
                        )));
    return ___internal_method;
  }
};
 TMPro::TextAlignmentOptions TMPro::TMP_Compatibility::ConvertTextAlignmentEnumValues(TMPro::TextAlignmentOptions oldValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Compatibility>::get(),
                            "ConvertTextAlignmentEnumValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TextAlignmentOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TMPro::TextAlignmentOptions, false>(nullptr, ___internal_method, oldValue);
}
