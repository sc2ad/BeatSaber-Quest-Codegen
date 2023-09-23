#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData.FindOrAddReport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Nullable_1<int32_t>, UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType, System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData>)>(&UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData::FindOrAddReport)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x294c194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData>::get(),
                            "FindOrAddReport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "reportId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reportType", ty: "UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentBitOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData::UnityEngine__InputSystem__HID__HIDParser__HIDReportData(int32_t reportId, UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType reportType, int32_t currentBitOffset) noexcept : ::bs_hook::ValueTypeWrapper() {this->reportId = reportId;
this->reportType = reportType;
this->currentBitOffset = currentBitOffset;
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData::__set_reportId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData::__get_reportId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData::__set_reportType(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType, 0x4>(this->__instance, std::forward<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType>(value));
}
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData::__get_reportType() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData::__set_currentBitOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData::__get_currentBitOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 int32_t UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData::FindOrAddReport(System::Nullable_1<int32_t> reportId, UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType reportType, System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData> reports)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData>::get(),
                            "FindOrAddReport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDReportData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, reportId, reportType, reports);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::Input{128};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::Output{144};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::Feature{176};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::Collection{160};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::EndCollection{192};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::UsagePage{4};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::LogicalMinimum{20};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::LogicalMaximum{36};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::PhysicalMinimum{52};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::PhysicalMaximum{68};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::UnitExponent{84};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::Unit{100};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::ReportSize{116};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::ReportID{132};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::ReportCount{148};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::Push{164};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::Pop{180};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::Usage{8};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::UsageMinimum{24};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::UsageMaximum{40};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::DesignatorIndex{56};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::DesignatorMinimum{72};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::DesignatorMaximum{88};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::StringIndex{120};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::StringMinimum{136};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::StringMaximum{152};
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag  UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag::Delimiter{168};
//  Writing Method size for method: UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>)>(&UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x294c134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal.SetUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::*)(int32_t)>(&UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::SetUsage)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x294be38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>::get(),
                            "SetUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal.GetUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::*)(int32_t)>(&UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::GetUsage)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x294c01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>::get(),
                            "GetUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "usage", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "usageMinimum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "usageMaximum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "designatorIndex", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "designatorMinimum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "designatorMaximum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringIndex", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringMinimum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringMaximum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "usageList", ty: "System::Collections::Generic::List_1<int32_t>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal(System::Nullable_1<int32_t> usage, System::Nullable_1<int32_t> usageMinimum, System::Nullable_1<int32_t> usageMaximum, System::Nullable_1<int32_t> designatorIndex, System::Nullable_1<int32_t> designatorMinimum, System::Nullable_1<int32_t> designatorMaximum, System::Nullable_1<int32_t> stringIndex, System::Nullable_1<int32_t> stringMinimum, System::Nullable_1<int32_t> stringMaximum, System::Collections::Generic::List_1<int32_t> usageList) noexcept : ::bs_hook::ValueTypeWrapper() {this->usage = usage;
this->usageMinimum = usageMinimum;
this->usageMaximum = usageMaximum;
this->designatorIndex = designatorIndex;
this->designatorMinimum = designatorMinimum;
this->designatorMaximum = designatorMaximum;
this->stringIndex = stringIndex;
this->stringMinimum = stringMinimum;
this->stringMaximum = stringMaximum;
this->usageList = usageList;
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_usage(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x0>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_usage() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_usageMinimum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x8>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_usageMinimum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_usageMaximum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x10>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_usageMaximum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_designatorIndex(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x18>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_designatorIndex() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_designatorMinimum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x20>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_designatorMinimum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_designatorMaximum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x28>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_designatorMaximum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_stringIndex(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x30>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_stringIndex() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_stringMinimum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x38>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_stringMinimum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_stringMaximum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x40>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_stringMaximum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x40>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__set_usageList(System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<int32_t>, 0x48>(this->__instance, std::forward<System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr System::Collections::Generic::List_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::__get_usageList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<int32_t>, 0x48>(this->__instance);
}
 void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::Reset(ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal> state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
 void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::SetUsage(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>::get(),
                            "SetUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal::GetUsage(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>::get(),
                            "GetUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
//  Writing Method size for method: UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal.GetUsagePage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage (UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::*)(int32_t, ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>)>(&UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::GetUsagePage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x294bf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal>::get(),
                            "GetUsagePage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal.GetPhysicalMin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::*)()>(&UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::GetPhysicalMin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x294c320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal>::get(),
                            "GetPhysicalMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal.GetPhysicalMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::*)()>(&UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::GetPhysicalMax)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x294c3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal>::get(),
                            "GetPhysicalMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "usagePage", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "logicalMinimum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "logicalMaximum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "physicalMinimum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "physicalMaximum", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "unitExponent", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "unit", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "reportSize", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "reportCount", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "reportId", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal(System::Nullable_1<int32_t> usagePage, System::Nullable_1<int32_t> logicalMinimum, System::Nullable_1<int32_t> logicalMaximum, System::Nullable_1<int32_t> physicalMinimum, System::Nullable_1<int32_t> physicalMaximum, System::Nullable_1<int32_t> unitExponent, System::Nullable_1<int32_t> unit, System::Nullable_1<int32_t> reportSize, System::Nullable_1<int32_t> reportCount, System::Nullable_1<int32_t> reportId) noexcept : ::bs_hook::ValueTypeWrapper() {this->usagePage = usagePage;
this->logicalMinimum = logicalMinimum;
this->logicalMaximum = logicalMaximum;
this->physicalMinimum = physicalMinimum;
this->physicalMaximum = physicalMaximum;
this->unitExponent = unitExponent;
this->unit = unit;
this->reportSize = reportSize;
this->reportCount = reportCount;
this->reportId = reportId;
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_usagePage(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x0>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_usagePage() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_logicalMinimum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x8>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_logicalMinimum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_logicalMaximum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x10>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_logicalMaximum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_physicalMinimum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x18>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_physicalMinimum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_physicalMaximum(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x20>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_physicalMaximum() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_unitExponent(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x28>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_unitExponent() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_unit(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x30>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_unit() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_reportSize(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x38>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_reportSize() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_reportCount(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x40>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_reportCount() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x40>(this->__instance);
}
constexpr void UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__set_reportId(System::Nullable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<int32_t>, 0x48>(this->__instance, std::forward<System::Nullable_1<int32_t>>(value));
}
constexpr System::Nullable_1<int32_t> UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::__get_reportId() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<int32_t>, 0x48>(this->__instance);
}
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::GetUsagePage(int32_t index, ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal> localItemState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal>::get(),
                            "GetUsagePage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, localItemState);
}
 int32_t UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::GetPhysicalMin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal>::get(),
                            "GetPhysicalMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal::GetPhysicalMax()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal>::get(),
                            "GetPhysicalMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::HID::HIDParser.ParseReportDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor>)>(&UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x294bd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::HIDParser>::get(),
                            "ParseReportDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::HID::HIDParser.ParseReportDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, int32_t, ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor>)>(&UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor)> {
  constexpr static std::size_t size = 0xc44;
  constexpr static std::size_t addrs = 0x294868c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::HIDParser>::get(),
                            "ParseReportDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::HID::HIDParser.ReadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, void*, void*)>(&UnityEngine::InputSystem::HID::HIDParser::ReadData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x294bdc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::HIDParser>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor(::ArrayW<uint8_t> buffer, ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor> deviceDescriptor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::HIDParser>::get(),
                            "ParseReportDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, buffer, deviceDescriptor);
}
 bool UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor(void* bufferPtr, int32_t bufferLength, ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor> deviceDescriptor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::HIDParser>::get(),
                            "ParseReportDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bufferPtr, bufferLength, deviceDescriptor);
}
 int32_t UnityEngine::InputSystem::HID::HIDParser::ReadData(int32_t itemSize, void* currentPtr, void* endPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::HID::HIDParser>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, itemSize, currentPtr, endPtr);
}
