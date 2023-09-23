#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Unity::Jobs {
struct JobHandle;
}
// Type: Unity.Jobs::JobHandle
namespace Unity::Jobs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9919))
// CS Name: Unity.Jobs.JobHandle
struct CORDL_TYPE JobHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "jobGroup", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JobHandle(::cordl_internals::intptr_t jobGroup, int32_t version) noexcept;


                    constexpr JobHandle(JobHandle const&) = default;
                    constexpr JobHandle(JobHandle&&) = default;
                    constexpr JobHandle& operator=(JobHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JobHandle& operator=(JobHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JobHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_jobGroup, put=__set_jobGroup))  jobGroup;

constexpr void __set_jobGroup(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_jobGroup() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method Complete addr 0x2b27e00 size 0x8c virtual false final false
 void Complete() ;

/// @brief Method get_IsCompleted addr 0x2b27ec8 size 0x3c virtual false final false
 bool get_IsCompleted() ;

/// @brief Method ScheduleBatchedJobs addr 0x2b27f40 size 0x28 virtual false final false
static void ScheduleBatchedJobs() ;

/// @brief Method ScheduleBatchedJobsAndComplete addr 0x2b27e8c size 0x3c virtual false final false
static void ScheduleBatchedJobsAndComplete(ByRef<Unity::Jobs::JobHandle> job) ;

/// @brief Method ScheduleBatchedJobsAndIsCompleted addr 0x2b27f04 size 0x3c virtual false final false
static bool ScheduleBatchedJobsAndIsCompleted(ByRef<Unity::Jobs::JobHandle> job) ;

/// @brief Method CombineDependencies addr 0x2b27f68 size 0x28 virtual false final false
static Unity::Jobs::JobHandle CombineDependencies(Unity::Jobs::JobHandle job0, Unity::Jobs::JobHandle job1) ;

/// @brief Method CombineDependenciesInternal2 addr 0x2b27f90 size 0x5c virtual false final false
static Unity::Jobs::JobHandle CombineDependenciesInternal2(ByRef<Unity::Jobs::JobHandle> job0, ByRef<Unity::Jobs::JobHandle> job1) ;

/// @brief Method CombineDependenciesInternal2_Injected addr 0x2b27fec size 0x54 virtual false final false
static void CombineDependenciesInternal2_Injected(ByRef<Unity::Jobs::JobHandle> job0, ByRef<Unity::Jobs::JobHandle> job1, ByRef<Unity::Jobs::JobHandle> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
DEFINE_IL2CPP_ARG_TYPE(Unity::Jobs::JobHandle, "Unity.Jobs", "JobHandle");
