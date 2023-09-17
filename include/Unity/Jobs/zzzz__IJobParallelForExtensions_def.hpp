#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction;
}
namespace GlobalNamespace {
template<>
class ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>;
}
namespace GlobalNamespace {
template<>
class ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>;
}
namespace Unity::Jobs {
class IJobParallelForExtensions;
}
namespace Unity::Jobs {
template<typename T>
struct ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1;
}
namespace Unity::Jobs {
template<>
struct ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>;
}
namespace Unity::Jobs {
template<>
struct ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>;
}
// Type: ::ExecuteJobFunction
// Type: ::ParallelForJobStruct`1
// Type: Unity.Jobs::IJobParallelForExtensions
namespace Unity::Jobs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9914))
// CS Name: Unity.Jobs.IJobParallelForExtensions
class CORDL_TYPE IJobParallelForExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using ParallelForJobStruct_1 = ::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IJobParallelForExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForExtensions", modifiers: " const&", def_value: None }]
constexpr IJobParallelForExtensions(IJobParallelForExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForExtensions", modifiers: "&&", def_value: None }]
constexpr IJobParallelForExtensions(IJobParallelForExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IJobParallelForExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IJobParallelForExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IJobParallelForExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IJobParallelForExtensions& operator=(IJobParallelForExtensions&& o) noexcept = default;
  constexpr IJobParallelForExtensions& operator=(IJobParallelForExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Schedule addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::Unity::Jobs::JobHandle Schedule(T jobData, int32_t arrayLength, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9912)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9912), inst: 7121 })
// CS Name: Unity.Jobs.IJobParallelForExtensions::ParallelForJobStruct`1::ExecuteJobFunction
class CORDL_TYPE ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: " const&", def_value: None }]
constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction& operator=(______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction&& o) noexcept = default;
  constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction& operator=(______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9912)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9912), inst: 7122 })
// CS Name: Unity.Jobs.IJobParallelForExtensions::ParallelForJobStruct`1::ExecuteJobFunction
class CORDL_TYPE ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: " const&", def_value: None }]
constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction& operator=(______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction&& o) noexcept = default;
  constexpr ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction& operator=(______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ParallelForJobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9913))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9913), inst: 7121 })
// CS Name: Unity.Jobs.IJobParallelForExtensions::ParallelForJobStruct`1
struct CORDL_TYPE ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>;


                    constexpr ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1(____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1 const&) = default;
                    constexpr ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1(____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1&&) = default;
                    constexpr ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1& operator=(____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1& operator=(____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::cordl_internals::intptr_t __declspec(property(get=__get_jobReflectionData, put=__set_jobReflectionData))  jobReflectionData;

static void __set_jobReflectionData(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_jobReflectionData() ;


// Methods

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static void Execute(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob> jobData, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::ParallelForJobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9913)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9913), inst: 7122 })
// CS Name: Unity.Jobs.IJobParallelForExtensions::ParallelForJobStruct`1
struct CORDL_TYPE ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>;


                    constexpr ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1(____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1 const&) = default;
                    constexpr ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1(____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1&&) = default;
                    constexpr ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1& operator=(____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1& operator=(____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::cordl_internals::intptr_t __declspec(property(get=__get_jobReflectionData, put=__set_jobReflectionData))  jobReflectionData;

static void __set_jobReflectionData(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_jobReflectionData() ;


// Methods

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static void Execute(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob> jobData, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction, "Unity.Jobs", "IJobParallelForExtensions/ParallelForJobStruct`1/ExecuteJobFunction");
NEED_NO_BOX(::Unity::Jobs::IJobParallelForExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobParallelForExtensions, "Unity.Jobs", "IJobParallelForExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1, "Unity.Jobs", "IJobParallelForExtensions/ParallelForJobStruct`1");
