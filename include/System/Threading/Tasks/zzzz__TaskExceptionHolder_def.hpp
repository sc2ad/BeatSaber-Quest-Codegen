#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AggregateException;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class LowLevelListWithIList_1;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskExceptionHolder;
}
// Type: System.Threading.Tasks::TaskExceptionHolder
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2804))
// CS Name: System.Threading.Tasks.TaskExceptionHolder
class CORDL_TYPE TaskExceptionHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TaskExceptionHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskExceptionHolder", modifiers: " const&", def_value: None }]
constexpr TaskExceptionHolder(TaskExceptionHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskExceptionHolder", modifiers: "&&", def_value: None }]
constexpr TaskExceptionHolder(TaskExceptionHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskExceptionHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskExceptionHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskExceptionHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskExceptionHolder& operator=(TaskExceptionHolder&& o) noexcept = default;
  constexpr TaskExceptionHolder& operator=(TaskExceptionHolder const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_s_failFastOnUnobservedException, put=__set_s_failFastOnUnobservedException))  s_failFastOnUnobservedException;

static void __set_s_failFastOnUnobservedException(bool value) ;

static bool __get_s_failFastOnUnobservedException() ;

 System::Threading::Tasks::Task __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_m_task() const;

 System::Collections::Generic::LowLevelListWithIList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> __declspec(property(get=__get_m_faultExceptions, put=__set_m_faultExceptions))  m_faultExceptions;

constexpr void __set_m_faultExceptions(System::Collections::Generic::LowLevelListWithIList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> value) ;

constexpr System::Collections::Generic::LowLevelListWithIList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> __get_m_faultExceptions() const;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=__get_m_cancellationException, put=__set_m_cancellationException))  m_cancellationException;

constexpr void __set_m_cancellationException(System::Runtime::ExceptionServices::ExceptionDispatchInfo value) ;

constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo __get_m_cancellationException() const;

 bool __declspec(property(get=__get_m_isHandled, put=__set_m_isHandled))  m_isHandled;

constexpr void __set_m_isHandled(bool value) ;

constexpr bool __get_m_isHandled() const;


// Properties

 bool __declspec(property(get=get_ContainsFaultList))  ContainsFaultList;


// Methods

// Ctor Parameters [CppParam { name: "task", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }]
explicit TaskExceptionHolder(System::Threading::Tasks::Task task) ;

/// @brief Method .ctor addr 0x24b7510 size 0x28 virtual false final false
 void _ctor(System::Threading::Tasks::Task task) ;

/// @brief Method ShouldFailFastOnUnobservedException addr 0x24be218 size 0x8 virtual false final false
static bool ShouldFailFastOnUnobservedException() ;

/// @brief Method Finalize addr 0x24be220 size 0x204 virtual true final false
 void Finalize() ;

/// @brief Method get_ContainsFaultList addr 0x24b7124 size 0x1c virtual false final false
 bool get_ContainsFaultList() ;

/// @brief Method Add addr 0x24b7538 size 0xc virtual false final false
 void Add(::bs_hook::Il2CppWrapperType exceptionObject, bool representsCancellation) ;

/// @brief Method SetCancellationException addr 0x24be5c4 size 0xbc virtual false final false
 void SetCancellationException(::bs_hook::Il2CppWrapperType exceptionObject) ;

/// @brief Method AddFaultException addr 0x24be680 size 0x50c virtual false final false
 void AddFaultException(::bs_hook::Il2CppWrapperType exceptionObject) ;

/// @brief Method MarkAsUnhandled addr 0x24beb8c size 0x70 virtual false final false
 void MarkAsUnhandled() ;

/// @brief Method MarkAsHandled addr 0x24b72fc size 0x7c virtual false final false
 void MarkAsHandled(bool calledFromFinalizer) ;

/// @brief Method CreateExceptionObject addr 0x24b7544 size 0x1b4 virtual false final false
 System::AggregateException CreateExceptionObject(bool calledFromFinalizer, System::Exception includeThisException) ;

/// @brief Method GetExceptionDispatchInfos addr 0x24b7804 size 0x8c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> GetExceptionDispatchInfos() ;

/// @brief Method GetCancellationExceptionDispatchInfo addr 0x24bebfc size 0x8 virtual false final false
 System::Runtime::ExceptionServices::ExceptionDispatchInfo GetCancellationExceptionDispatchInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::TaskExceptionHolder);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskExceptionHolder, "System.Threading.Tasks", "TaskExceptionHolder");
