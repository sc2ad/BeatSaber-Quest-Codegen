#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
struct Guid;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct ____HoudiniEngineUnity__HEU_Task__TaskResult;
}
namespace HoudiniEngineUnity {
struct ____HoudiniEngineUnity__HEU_Task__TaskStatus;
}
namespace HoudiniEngineUnity {
class HEU_Task;
}
namespace HoudiniEngineUnity {
class ____HoudiniEngineUnity__HEU_Task__TaskCallback;
}
// Type: ::TaskStatus
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9738))
// CS Name: HoudiniEngineUnity.HEU_Task::TaskStatus
struct CORDL_TYPE ____HoudiniEngineUnity__HEU_Task__TaskStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_Task__TaskStatus(int32_t value__) noexcept;


                    constexpr ____HoudiniEngineUnity__HEU_Task__TaskStatus(____HoudiniEngineUnity__HEU_Task__TaskStatus const&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_Task__TaskStatus(____HoudiniEngineUnity__HEU_Task__TaskStatus&&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_Task__TaskStatus& operator=(____HoudiniEngineUnity__HEU_Task__TaskStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HoudiniEngineUnity__HEU_Task__TaskStatus& operator=(____HoudiniEngineUnity__HEU_Task__TaskStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__HEU_Task__TaskStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HoudiniEngineUnity__HEU_Task__TaskStatus_Unwrapped : int32_t {
__NONE = 0,
__PENDING_START = 1,
__STARTED = 2,
__REQUIRE_UPDATE = 3,
__PENDING_COMPLETE = 4,
__COMPLETED = 5,
__UNUSED = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HoudiniEngineUnity__HEU_Task__TaskStatus_Unwrapped () const noexcept {
return std::bit_cast<______HoudiniEngineUnity__HEU_Task__TaskStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus const NONE;

/// @brief Field PENDING_START offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus const PENDING_START;

/// @brief Field STARTED offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus const STARTED;

/// @brief Field REQUIRE_UPDATE offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus const REQUIRE_UPDATE;

/// @brief Field PENDING_COMPLETE offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus const PENDING_COMPLETE;

/// @brief Field COMPLETED offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus const COMPLETED;

/// @brief Field UNUSED offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus const UNUSED;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::TaskResult
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9739))
// CS Name: HoudiniEngineUnity.HEU_Task::TaskResult
struct CORDL_TYPE ____HoudiniEngineUnity__HEU_Task__TaskResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_Task__TaskResult(int32_t value__) noexcept;


                    constexpr ____HoudiniEngineUnity__HEU_Task__TaskResult(____HoudiniEngineUnity__HEU_Task__TaskResult const&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_Task__TaskResult(____HoudiniEngineUnity__HEU_Task__TaskResult&&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_Task__TaskResult& operator=(____HoudiniEngineUnity__HEU_Task__TaskResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HoudiniEngineUnity__HEU_Task__TaskResult& operator=(____HoudiniEngineUnity__HEU_Task__TaskResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__HEU_Task__TaskResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HoudiniEngineUnity__HEU_Task__TaskResult_Unwrapped : int32_t {
__NONE = 0,
__SUCCESS = 1,
__FAILED = 2,
__KILLED = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HoudiniEngineUnity__HEU_Task__TaskResult_Unwrapped () const noexcept {
return std::bit_cast<______HoudiniEngineUnity__HEU_Task__TaskResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult const NONE;

/// @brief Field SUCCESS offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult const SUCCESS;

/// @brief Field FAILED offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult const FAILED;

/// @brief Field KILLED offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult const KILLED;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::TaskCallback
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9740))
// CS Name: HoudiniEngineUnity.HEU_Task::TaskCallback
class CORDL_TYPE ____HoudiniEngineUnity__HEU_Task__TaskCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____HoudiniEngineUnity__HEU_Task__TaskCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____HoudiniEngineUnity__HEU_Task__TaskCallback", modifiers: " const&", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_Task__TaskCallback(____HoudiniEngineUnity__HEU_Task__TaskCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____HoudiniEngineUnity__HEU_Task__TaskCallback", modifiers: "&&", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_Task__TaskCallback(____HoudiniEngineUnity__HEU_Task__TaskCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__HEU_Task__TaskCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____HoudiniEngineUnity__HEU_Task__TaskCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____HoudiniEngineUnity__HEU_Task__TaskCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____HoudiniEngineUnity__HEU_Task__TaskCallback& operator=(____HoudiniEngineUnity__HEU_Task__TaskCallback&& o) noexcept = default;
  constexpr ____HoudiniEngineUnity__HEU_Task__TaskCallback& operator=(____HoudiniEngineUnity__HEU_Task__TaskCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____HoudiniEngineUnity__HEU_Task__TaskCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2038e58 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2038f84 size 0x14 virtual true final false
 void Invoke(::HoudiniEngineUnity::HEU_Task task) ;

/// @brief Method BeginInvoke addr 0x2038f98 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::HoudiniEngineUnity::HEU_Task task, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2038fb8 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_Task
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9741))
// CS Name: HoudiniEngineUnity.HEU_Task
class CORDL_TYPE HEU_Task : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TaskCallback = ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback;

using TaskResult = ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult;

using TaskStatus = ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_Task() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Task", modifiers: " const&", def_value: None }]
constexpr HEU_Task(HEU_Task const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Task", modifiers: "&&", def_value: None }]
constexpr HEU_Task(HEU_Task&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Task(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_Task& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Task& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Task& operator=(HEU_Task&& o) noexcept = default;
  constexpr HEU_Task& operator=(HEU_Task const& o) noexcept = default;
                


// Fields

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus __declspec(property(get=__get__status, put=__set__status))  _status;

constexpr void __set__status(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus value) ;

constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus __get__status() const;

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult __declspec(property(get=__get__result, put=__set__result))  _result;

constexpr void __set__result(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult value) ;

constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult __get__result() const;

 ::System::Guid __declspec(property(get=__get__guid, put=__set__guid))  _guid;

constexpr void __set__guid(::System::Guid value) ;

constexpr ::System::Guid __get__guid() const;

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback __declspec(property(get=__get__taskCompletedDelegate, put=__set__taskCompletedDelegate))  _taskCompletedDelegate;

constexpr void __set__taskCompletedDelegate(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback value) ;

constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback __get__taskCompletedDelegate() const;


// Properties

 ::System::Guid __declspec(property(get=get_TaskGuid))  TaskGuid;


// Methods

/// @brief Method get_TaskGuid addr 0x2038e24 size 0xc virtual false final false
 ::System::Guid get_TaskGuid() ;

// Ctor Parameters []
explicit HEU_Task() ;

/// @brief Method .ctor addr 0x2038e30 size 0x24 virtual false final false
 void _ctor() ;

/// @brief Method DoTask addr 0x0 size 0xffffffffffffffff virtual true final false
 void DoTask() ;

/// @brief Method UpdateTask addr 0x2038e54 size 0x4 virtual true final false
 void UpdateTask() ;

/// @brief Method KillTask addr 0x0 size 0xffffffffffffffff virtual true final false
 void KillTask() ;

/// @brief Method CompleteTask addr 0x0 size 0xffffffffffffffff virtual true final false
 void CompleteTask(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult, "HoudiniEngineUnity", "HEU_Task/TaskResult");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus, "HoudiniEngineUnity", "HEU_Task/TaskStatus");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Task);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Task, "HoudiniEngineUnity", "HEU_Task");
NEED_NO_BOX(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback, "HoudiniEngineUnity", "HEU_Task/TaskCallback");
