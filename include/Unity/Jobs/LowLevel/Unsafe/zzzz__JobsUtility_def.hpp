#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace System {
class Type;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct ScheduleMode;
}
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
class JobsUtility;
}
namespace Unity::Jobs::LowLevel::Unsafe {
class Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters;
}
// Type: ::JobScheduleParameters
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9923))
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobsUtility::JobScheduleParameters
struct CORDL_TYPE Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Dependency", ty: "Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "ScheduleMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ReflectionData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "JobDataPtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters(Unity::Jobs::JobHandle Dependency, int32_t ScheduleMode, ::cordl_internals::intptr_t ReflectionData, ::cordl_internals::intptr_t JobDataPtr) noexcept;


                    constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters(Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters const&) = default;
                    constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters(Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters&&) = default;
                    constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters& operator=(Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters& operator=(Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Jobs::JobHandle __declspec(property(get=__get_Dependency, put=__set_Dependency))  Dependency;

constexpr void __set_Dependency(Unity::Jobs::JobHandle value) ;

constexpr Unity::Jobs::JobHandle __get_Dependency() const;

 int32_t __declspec(property(get=__get_ScheduleMode, put=__set_ScheduleMode))  ScheduleMode;

constexpr void __set_ScheduleMode(int32_t value) ;

constexpr int32_t __get_ScheduleMode() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_ReflectionData, put=__set_ReflectionData))  ReflectionData;

constexpr void __set_ReflectionData(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_ReflectionData() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_JobDataPtr, put=__set_JobDataPtr))  JobDataPtr;

constexpr void __set_JobDataPtr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_JobDataPtr() const;


// Methods

/// @brief Method .ctor addr 0x2b28354 size 0x38 virtual false final false
 void _ctor(void* i_jobData, ::cordl_internals::intptr_t i_reflectionData, Unity::Jobs::JobHandle i_dependency, Unity::Jobs::LowLevel::Unsafe::ScheduleMode i_scheduleMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs::LowLevel::Unsafe
// Type: ::PanicFunction_
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9924))
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobsUtility::PanicFunction_
class CORDL_TYPE Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_ : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_", modifiers: " const&", def_value: None }]
constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_(Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_ const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_", modifiers: "&&", def_value: None }]
constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_(Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_& operator=(Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_&& o) noexcept = default;
  constexpr Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_& operator=(Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_ const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b2838c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b28448 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs::LowLevel::Unsafe
// Type: Unity.Jobs.LowLevel.Unsafe::JobsUtility
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9925))
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobsUtility
class CORDL_TYPE JobsUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PanicFunction_ = Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_;

using JobScheduleParameters = Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JobsUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "JobsUtility", modifiers: " const&", def_value: None }]
constexpr JobsUtility(JobsUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JobsUtility", modifiers: "&&", def_value: None }]
constexpr JobsUtility(JobsUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JobsUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JobsUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JobsUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JobsUtility& operator=(JobsUtility&& o) noexcept = default;
  constexpr JobsUtility& operator=(JobsUtility const& o) noexcept = default;
                


// Fields

static Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_ __declspec(property(get=__get_PanicFunction, put=__set_PanicFunction))  PanicFunction;

static void __set_PanicFunction(Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_ value) ;

static Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_ __get_PanicFunction() ;


// Methods

/// @brief Method GetWorkStealingRange addr 0x2b28068 size 0x5c virtual false final false
static bool GetWorkStealingRange(ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ByRef<int32_t> beginIndex, ByRef<int32_t> endIndex) ;

/// @brief Method Schedule addr 0x2b280c4 size 0x54 virtual false final false
static Unity::Jobs::JobHandle Schedule(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters> parameters) ;

/// @brief Method ScheduleParallelFor addr 0x2b2815c size 0x6c virtual false final false
static Unity::Jobs::JobHandle ScheduleParallelFor(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters> parameters, int32_t arrayLength, int32_t innerloopBatchCount) ;

/// @brief Method CreateJobReflectionData addr 0x2b28224 size 0x6c virtual false final false
static ::cordl_internals::intptr_t CreateJobReflectionData(System::Type wrapperJobType, System::Type userJobType, ::bs_hook::Il2CppWrapperType managedJobFunction0, ::bs_hook::Il2CppWrapperType managedJobFunction1, ::bs_hook::Il2CppWrapperType managedJobFunction2) ;

/// @brief Method CreateJobReflectionData addr 0x2b28290 size 0x60 virtual false final false
static ::cordl_internals::intptr_t CreateJobReflectionData(System::Type type, ::bs_hook::Il2CppWrapperType managedJobFunction0, ::bs_hook::Il2CppWrapperType managedJobFunction1, ::bs_hook::Il2CppWrapperType managedJobFunction2) ;

/// @brief Method InvokePanicFunction addr 0x2b282f0 size 0x64 virtual false final false
static void InvokePanicFunction() ;

/// @brief Method Schedule_Injected addr 0x2b28118 size 0x44 virtual false final false
static void Schedule_Injected(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters> parameters, ByRef<Unity::Jobs::JobHandle> ret) ;

/// @brief Method ScheduleParallelFor_Injected addr 0x2b281c8 size 0x5c virtual false final false
static void ScheduleParallelFor_Injected(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters> parameters, int32_t arrayLength, int32_t innerloopBatchCount, ByRef<Unity::Jobs::JobHandle> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs::LowLevel::Unsafe
NEED_NO_BOX(Unity::Jobs::LowLevel::Unsafe::JobsUtility);
DEFINE_IL2CPP_ARG_TYPE(Unity::Jobs::LowLevel::Unsafe::JobsUtility, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility");
NEED_NO_BOX(Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_);
DEFINE_IL2CPP_ARG_TYPE(Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility/PanicFunction_");
DEFINE_IL2CPP_ARG_TYPE(Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility/JobScheduleParameters");
