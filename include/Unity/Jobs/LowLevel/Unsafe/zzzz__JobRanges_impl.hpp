#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
// Ctor Parameters [CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumJobs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TotalIterationCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumPhases", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StartEndIndex", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PhaseData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobRanges::JobRanges(int32_t BatchSize, int32_t NumJobs, int32_t TotalIterationCount, int32_t NumPhases, ::cordl_internals::intptr_t StartEndIndex, ::cordl_internals::intptr_t PhaseData) noexcept : ::bs_hook::ValueTypeWrapper() {this->BatchSize = BatchSize;
this->NumJobs = NumJobs;
this->TotalIterationCount = TotalIterationCount;
this->NumPhases = NumPhases;
this->StartEndIndex = StartEndIndex;
this->PhaseData = PhaseData;
}
constexpr void ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__set_BatchSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__get_BatchSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__set_NumJobs(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__get_NumJobs() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__set_TotalIterationCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__get_TotalIterationCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__set_NumPhases(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__get_NumPhases() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__set_StartEndIndex(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__get_StartEndIndex() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__set_PhaseData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::Unity::Jobs::LowLevel::Unsafe::JobRanges::__get_PhaseData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
} // end anonymous namespace
