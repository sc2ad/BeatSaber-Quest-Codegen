#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRScenePlane__GetBoundaryJob;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob;
}
namespace Unity::Collections {
struct NativeArrayDisposeJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Jobs {
template<typename T>
struct Unity__Jobs__IJobExtensions__JobStruct_1;
}
namespace GlobalNamespace {
template<typename T>
class Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction;
}
namespace GlobalNamespace {
template<>
class Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>;
}
namespace GlobalNamespace {
template<>
class Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>;
}
namespace GlobalNamespace {
template<>
class Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>;
}
namespace GlobalNamespace {
template<>
class Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>;
}
namespace Unity::Jobs {
class IJobExtensions;
}
namespace Unity::Jobs {
template<typename T>
struct Unity__Jobs__IJobExtensions__JobStruct_1;
}
namespace Unity::Jobs {
template<>
struct Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>;
}
namespace Unity::Jobs {
template<>
struct Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>;
}
namespace Unity::Jobs {
template<>
struct Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>;
}
namespace Unity::Jobs {
template<>
struct Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>;
}
// Type: ::ExecuteJobFunction
// Type: ::JobStruct`1
// Type: Unity.Jobs::IJobExtensions
namespace Unity::Jobs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9918))
// CS Name: Unity.Jobs.IJobExtensions
class CORDL_TYPE IJobExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using JobStruct_1 = Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IJobExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "IJobExtensions", modifiers: " const&", def_value: None }]
constexpr IJobExtensions(IJobExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IJobExtensions", modifiers: "&&", def_value: None }]
constexpr IJobExtensions(IJobExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IJobExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IJobExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IJobExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IJobExtensions& operator=(IJobExtensions&& o) noexcept = default;
  constexpr IJobExtensions& operator=(IJobExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Schedule addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static Unity::Jobs::JobHandle Schedule(T jobData, Unity::Jobs::JobHandle dependsOn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9916)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9916), inst: 7125 })
// CS Name: Unity.Jobs.IJobExtensions::JobStruct`1::ExecuteJobFunction
class CORDL_TYPE Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: " const&", def_value: None }]
constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction&& o) noexcept = default;
  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction const& o) noexcept = default;
                


// Methods

static GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9916))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9916), inst: 7124 })
// CS Name: Unity.Jobs.IJobExtensions::JobStruct`1::ExecuteJobFunction
class CORDL_TYPE Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: " const&", def_value: None }]
constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction&& o) noexcept = default;
  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction const& o) noexcept = default;
                


// Methods

static GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9916)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9916), inst: 7123 })
// CS Name: Unity.Jobs.IJobExtensions::JobStruct`1::ExecuteJobFunction
class CORDL_TYPE Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: " const&", def_value: None }]
constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction&& o) noexcept = default;
  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction const& o) noexcept = default;
                


// Methods

static GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9916))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9916), inst: 7120 })
// CS Name: Unity.Jobs.IJobExtensions::JobStruct`1::ExecuteJobFunction
class CORDL_TYPE Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: " const&", def_value: None }]
constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction&& o) noexcept = default;
  constexpr Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction& operator=(Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction const& o) noexcept = default;
                


// Methods

static GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(ByRef<Unity::Collections::NativeArrayDisposeJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9917)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9917), inst: 7125 })
// CS Name: Unity.Jobs.IJobExtensions::JobStruct`1
struct CORDL_TYPE Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ExecuteJobFunction = GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>;


                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1(Unity__Jobs__IJobExtensions__JobStruct_1 const&) = default;
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1(Unity__Jobs__IJobExtensions__JobStruct_1&&) = default;
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1& operator=(Unity__Jobs__IJobExtensions__JobStruct_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1& operator=(Unity__Jobs__IJobExtensions__JobStruct_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__IJobExtensions__JobStruct_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
static void Execute(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9917))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9917), inst: 7124 })
// CS Name: Unity.Jobs.IJobExtensions::JobStruct`1
struct CORDL_TYPE Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ExecuteJobFunction = GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>;


                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1(Unity__Jobs__IJobExtensions__JobStruct_1 const&) = default;
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1(Unity__Jobs__IJobExtensions__JobStruct_1&&) = default;
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1& operator=(Unity__Jobs__IJobExtensions__JobStruct_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1& operator=(Unity__Jobs__IJobExtensions__JobStruct_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__IJobExtensions__JobStruct_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
static void Execute(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9917)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9917), inst: 7123 })
// CS Name: Unity.Jobs.IJobExtensions::JobStruct`1
struct CORDL_TYPE Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ExecuteJobFunction = GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>;


                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1(Unity__Jobs__IJobExtensions__JobStruct_1 const&) = default;
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1(Unity__Jobs__IJobExtensions__JobStruct_1&&) = default;
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1& operator=(Unity__Jobs__IJobExtensions__JobStruct_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1& operator=(Unity__Jobs__IJobExtensions__JobStruct_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__IJobExtensions__JobStruct_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
static void Execute(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9917)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9917), inst: 7120 })
// CS Name: Unity.Jobs.IJobExtensions::JobStruct`1
struct CORDL_TYPE Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ExecuteJobFunction = GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>;


                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1(Unity__Jobs__IJobExtensions__JobStruct_1 const&) = default;
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1(Unity__Jobs__IJobExtensions__JobStruct_1&&) = default;
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1& operator=(Unity__Jobs__IJobExtensions__JobStruct_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Jobs__IJobExtensions__JobStruct_1& operator=(Unity__Jobs__IJobExtensions__JobStruct_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Jobs__IJobExtensions__JobStruct_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
static void Execute(ByRef<Unity::Collections::NativeArrayDisposeJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction, "Unity.Jobs", "IJobExtensions/JobStruct`1/ExecuteJobFunction");
NEED_NO_BOX(Unity::Jobs::IJobExtensions);
DEFINE_IL2CPP_ARG_TYPE(Unity::Jobs::IJobExtensions, "Unity.Jobs", "IJobExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1, "Unity.Jobs", "IJobExtensions/JobStruct`1");
