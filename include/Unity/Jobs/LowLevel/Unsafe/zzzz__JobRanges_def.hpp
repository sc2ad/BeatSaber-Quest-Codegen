#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
// Type: Unity.Jobs.LowLevel.Unsafe::JobRanges
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9921))
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobRanges
struct CORDL_TYPE JobRanges : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NumJobs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TotalIterationCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NumPhases", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StartEndIndex", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "PhaseData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr JobRanges(int32_t BatchSize, int32_t NumJobs, int32_t TotalIterationCount, int32_t NumPhases, ::cordl_internals::intptr_t StartEndIndex, ::cordl_internals::intptr_t PhaseData) noexcept;


                    constexpr JobRanges(JobRanges const&) = default;
                    constexpr JobRanges(JobRanges&&) = default;
                    constexpr JobRanges& operator=(JobRanges const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JobRanges& operator=(JobRanges&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JobRanges(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_BatchSize, put=__set_BatchSize))  BatchSize;

constexpr void __set_BatchSize(int32_t value) ;

constexpr int32_t __get_BatchSize() const;

 int32_t __declspec(property(get=__get_NumJobs, put=__set_NumJobs))  NumJobs;

constexpr void __set_NumJobs(int32_t value) ;

constexpr int32_t __get_NumJobs() const;

 int32_t __declspec(property(get=__get_TotalIterationCount, put=__set_TotalIterationCount))  TotalIterationCount;

constexpr void __set_TotalIterationCount(int32_t value) ;

constexpr int32_t __get_TotalIterationCount() const;

 int32_t __declspec(property(get=__get_NumPhases, put=__set_NumPhases))  NumPhases;

constexpr void __set_NumPhases(int32_t value) ;

constexpr int32_t __get_NumPhases() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_StartEndIndex, put=__set_StartEndIndex))  StartEndIndex;

constexpr void __set_StartEndIndex(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_StartEndIndex() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_PhaseData, put=__set_PhaseData))  PhaseData;

constexpr void __set_PhaseData(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_PhaseData() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(Unity::Jobs::LowLevel::Unsafe::JobRanges, "Unity.Jobs.LowLevel.Unsafe", "JobRanges");
