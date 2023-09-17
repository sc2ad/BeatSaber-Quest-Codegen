#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Unity/IO/LowLevel/Unsafe/zzzz__AsyncReadManagerRequestMetric_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileReadType_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__AssetLoadingSubsystem_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__Priority_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ProcessingState_def.hpp"
// Ctor Parameters [CppParam { name: "_AssetName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_FileName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_OffsetBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AssetTypeId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentBytesRead_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_BatchReadCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsBatchRead_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_State_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::ProcessingState", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ReadType_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::FileReadType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PriorityLevel_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::Priority", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Subsystem_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RequestTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TimeInQueueMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TotalTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::AsyncReadManagerRequestMetric(::StringW _AssetName_k__BackingField, ::StringW _FileName_k__BackingField, uint64_t _OffsetBytes_k__BackingField, uint64_t _SizeBytes_k__BackingField, uint64_t _AssetTypeId_k__BackingField, uint64_t _CurrentBytesRead_k__BackingField, uint32_t _BatchReadCount_k__BackingField, bool _IsBatchRead_k__BackingField, ::Unity::IO::LowLevel::Unsafe::ProcessingState _State_k__BackingField, ::Unity::IO::LowLevel::Unsafe::FileReadType _ReadType_k__BackingField, ::Unity::IO::LowLevel::Unsafe::Priority _PriorityLevel_k__BackingField, ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem _Subsystem_k__BackingField, double_t _RequestTimeMicroseconds_k__BackingField, double_t _TimeInQueueMicroseconds_k__BackingField, double_t _TotalTimeMicroseconds_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_AssetName_k__BackingField = _AssetName_k__BackingField;
this->_FileName_k__BackingField = _FileName_k__BackingField;
this->_OffsetBytes_k__BackingField = _OffsetBytes_k__BackingField;
this->_SizeBytes_k__BackingField = _SizeBytes_k__BackingField;
this->_AssetTypeId_k__BackingField = _AssetTypeId_k__BackingField;
this->_CurrentBytesRead_k__BackingField = _CurrentBytesRead_k__BackingField;
this->_BatchReadCount_k__BackingField = _BatchReadCount_k__BackingField;
this->_IsBatchRead_k__BackingField = _IsBatchRead_k__BackingField;
this->_State_k__BackingField = _State_k__BackingField;
this->_ReadType_k__BackingField = _ReadType_k__BackingField;
this->_PriorityLevel_k__BackingField = _PriorityLevel_k__BackingField;
this->_Subsystem_k__BackingField = _Subsystem_k__BackingField;
this->_RequestTimeMicroseconds_k__BackingField = _RequestTimeMicroseconds_k__BackingField;
this->_TimeInQueueMicroseconds_k__BackingField = _TimeInQueueMicroseconds_k__BackingField;
this->_TotalTimeMicroseconds_k__BackingField = _TotalTimeMicroseconds_k__BackingField;
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__AssetName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__AssetName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__FileName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__FileName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__OffsetBytes_k__BackingField(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__OffsetBytes_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__SizeBytes_k__BackingField(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__SizeBytes_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__AssetTypeId_k__BackingField(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__AssetTypeId_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__CurrentBytesRead_k__BackingField(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__CurrentBytesRead_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__BatchReadCount_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__BatchReadCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__IsBatchRead_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__IsBatchRead_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__State_k__BackingField(::Unity::IO::LowLevel::Unsafe::ProcessingState value)  {
::cordl_internals::setInstanceField<::Unity::IO::LowLevel::Unsafe::ProcessingState, 0x38>(this->__instance, std::forward<::Unity::IO::LowLevel::Unsafe::ProcessingState>(value));
}
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__State_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Unity::IO::LowLevel::Unsafe::ProcessingState, 0x38>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__ReadType_k__BackingField(::Unity::IO::LowLevel::Unsafe::FileReadType value)  {
::cordl_internals::setInstanceField<::Unity::IO::LowLevel::Unsafe::FileReadType, 0x3c>(this->__instance, std::forward<::Unity::IO::LowLevel::Unsafe::FileReadType>(value));
}
constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__ReadType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Unity::IO::LowLevel::Unsafe::FileReadType, 0x3c>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__PriorityLevel_k__BackingField(::Unity::IO::LowLevel::Unsafe::Priority value)  {
::cordl_internals::setInstanceField<::Unity::IO::LowLevel::Unsafe::Priority, 0x40>(this->__instance, std::forward<::Unity::IO::LowLevel::Unsafe::Priority>(value));
}
constexpr ::Unity::IO::LowLevel::Unsafe::Priority ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__PriorityLevel_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Unity::IO::LowLevel::Unsafe::Priority, 0x40>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__Subsystem_k__BackingField(::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem value)  {
::cordl_internals::setInstanceField<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, 0x44>(this->__instance, std::forward<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>(value));
}
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__Subsystem_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, 0x44>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__RequestTimeMicroseconds_k__BackingField(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x48>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__RequestTimeMicroseconds_k__BackingField() const {
return ::cordl_internals::getInstanceField<double_t, 0x48>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__TimeInQueueMicroseconds_k__BackingField(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x50>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__TimeInQueueMicroseconds_k__BackingField() const {
return ::cordl_internals::getInstanceField<double_t, 0x50>(this->__instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__set__TotalTimeMicroseconds_k__BackingField(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x58>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::__get__TotalTimeMicroseconds_k__BackingField() const {
return ::cordl_internals::getInstanceField<double_t, 0x58>(this->__instance);
}
} // end anonymous namespace
