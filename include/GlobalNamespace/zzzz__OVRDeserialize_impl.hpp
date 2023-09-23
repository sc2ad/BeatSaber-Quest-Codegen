#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
// Ctor Parameters [CppParam { name: "FromRefreshRate", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ToRefreshRate", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData::GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData(float_t FromRefreshRate, float_t ToRefreshRate) noexcept : ::bs_hook::ValueTypeWrapper() {this->FromRefreshRate = FromRefreshRate;
this->ToRefreshRate = ToRefreshRate;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData::__set_FromRefreshRate(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData::__get_FromRefreshRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData::__set_ToRefreshRate(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData::__get_ToRefreshRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryResultsData::GlobalNamespace__OVRDeserialize__SpaceQueryResultsData(uint64_t RequestId) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestId = RequestId;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryResultsData::__set_RequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryResultsData::__get_RequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData::GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData(uint64_t RequestId, int32_t Result) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestId = RequestId;
this->Result = Result;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData::__set_RequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData::__get_RequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData::__set_Result(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData::__get_Result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData::GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData(uint64_t RequestId, int32_t Result) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestId = RequestId;
this->Result = Result;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData::__set_RequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData::__get_RequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData::__set_Result(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData::__get_Result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space, System::Guid Uuid) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestId = RequestId;
this->Result = Result;
this->Space = Space;
this->Uuid = Uuid;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData::__set_RequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData::__get_RequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData::__set_Result(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData::__get_Result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData::__set_Space(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData::__get_Space() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData::__set_Uuid(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x18>(this->__instance, std::forward<System::Guid>(value));
}
constexpr System::Guid GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData::__get_Uuid() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x18>(this->__instance);
}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComponentType", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Enabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space, System::Guid Uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType ComponentType, int32_t Enabled) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestId = RequestId;
this->Result = Result;
this->Space = Space;
this->Uuid = Uuid;
this->ComponentType = ComponentType;
this->Enabled = Enabled;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__set_RequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__get_RequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__set_Result(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__get_Result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__set_Space(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__get_Space() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__set_Uuid(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x18>(this->__instance, std::forward<System::Guid>(value));
}
constexpr System::Guid GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__get_Uuid() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__set_ComponentType(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType, 0x28>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__get_ComponentType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__set_Enabled(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData::__get_Enabled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData(uint64_t RequestId, uint64_t Space, int32_t Result, System::Guid Uuid) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestId = RequestId;
this->Space = Space;
this->Result = Result;
this->Uuid = Uuid;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData::__set_RequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData::__get_RequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData::__set_Space(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData::__get_Space() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData::__set_Result(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData::__get_Result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData::__set_Uuid(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x14>(this->__instance, std::forward<System::Guid>(value));
}
constexpr System::Guid GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData::__get_Uuid() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x14>(this->__instance);
}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "Location", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData(uint64_t RequestId, int32_t Result, System::Guid Uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation Location) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestId = RequestId;
this->Result = Result;
this->Uuid = Uuid;
this->Location = Location;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData::__set_RequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData::__get_RequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData::__set_Result(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData::__get_Result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData::__set_Uuid(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0xc>(this->__instance, std::forward<System::Guid>(value));
}
constexpr System::Guid GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData::__get_Uuid() const {
return ::cordl_internals::getInstanceField<System::Guid, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData::__set_Location(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation, 0x1c>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData::__get_Location() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation, 0x1c>(this->__instance);
}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceShareResultData::GlobalNamespace__OVRDeserialize__SpaceShareResultData(uint64_t RequestId, int32_t Result) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestId = RequestId;
this->Result = Result;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceShareResultData::__set_RequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceShareResultData::__get_RequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceShareResultData::__set_Result(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceShareResultData::__get_Result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceListSaveResultData::GlobalNamespace__OVRDeserialize__SpaceListSaveResultData(uint64_t RequestId, int32_t Result) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestId = RequestId;
this->Result = Result;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceListSaveResultData::__set_RequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceListSaveResultData::__get_RequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceListSaveResultData::__set_Result(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceListSaveResultData::__get_Result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
template<typename T>
 T GlobalNamespace::OVRDeserialize::ByteArrayToStructure(::ArrayW<uint8_t> bytes)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDeserialize>::get(),
                        "ByteArrayToStructure",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, bytes);
}
