#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Exception;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<::cordl_internals::il2cpp_reference_type TResult>
class TaskCompletionSource_1<TResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<::System::Int32Enum>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<bool>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<int32_t>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<int64_t>;
}
// Type: System.Threading.Tasks::TaskCompletionSource`1
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2756))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2756), inst: 2 })
// CS Name: System.Threading.Tasks.TaskCompletionSource`1
class CORDL_TYPE TaskCompletionSource_1<TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TaskCompletionSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: " const&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskCompletionSource_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskCompletionSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1&& o) noexcept = default;
  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::Task_1<TResult> __declspec(property(get=__get__task, put=__set__task))  _task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<TResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult> __get__task() const;


// Properties

 ::System::Threading::Tasks::Task_1<TResult> __declspec(property(get=get_Task))  Task;


// Methods

// Ctor Parameters []
explicit TaskCompletionSource_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<TResult> get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetException(::System::Exception exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(TResult result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(TResult result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCanceled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2756))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2756), inst: 92 })
// CS Name: System.Threading.Tasks.TaskCompletionSource`1
class CORDL_TYPE TaskCompletionSource_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TaskCompletionSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: " const&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskCompletionSource_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskCompletionSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1&& o) noexcept = default;
  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get__task, put=__set__task))  _task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<int32_t> value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t> __get__task() const;


// Properties

 ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=get_Task))  Task;


// Methods

// Ctor Parameters []
explicit TaskCompletionSource_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<int32_t> get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetException(::System::Exception exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(int32_t result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(int32_t result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCanceled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2756))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2756), inst: 99 })
// CS Name: System.Threading.Tasks.TaskCompletionSource`1
class CORDL_TYPE TaskCompletionSource_1<bool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TaskCompletionSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: " const&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskCompletionSource_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskCompletionSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1&& o) noexcept = default;
  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get__task, put=__set__task))  _task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<bool> value) ;

constexpr ::System::Threading::Tasks::Task_1<bool> __get__task() const;


// Properties

 ::System::Threading::Tasks::Task_1<bool> __declspec(property(get=get_Task))  Task;


// Methods

// Ctor Parameters []
explicit TaskCompletionSource_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<bool> get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetException(::System::Exception exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(bool result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(bool result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCanceled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2756))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2756), inst: 772 })
// CS Name: System.Threading.Tasks.TaskCompletionSource`1
class CORDL_TYPE TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TaskCompletionSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: " const&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskCompletionSource_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskCompletionSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1&& o) noexcept = default;
  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=__get__task, put=__set__task))  _task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) ;

constexpr ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __get__task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=get_Task))  Task;


// Methods

// Ctor Parameters []
explicit TaskCompletionSource_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetException(::System::Exception exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCanceled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2756))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2756), inst: 830 })
// CS Name: System.Threading.Tasks.TaskCompletionSource`1
class CORDL_TYPE TaskCompletionSource_1<int64_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TaskCompletionSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: " const&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskCompletionSource_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskCompletionSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1&& o) noexcept = default;
  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::Task_1<int64_t> __declspec(property(get=__get__task, put=__set__task))  _task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<int64_t> value) ;

constexpr ::System::Threading::Tasks::Task_1<int64_t> __get__task() const;


// Properties

 ::System::Threading::Tasks::Task_1<int64_t> __declspec(property(get=get_Task))  Task;


// Methods

// Ctor Parameters []
explicit TaskCompletionSource_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<int64_t> get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetException(::System::Exception exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(int64_t result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(int64_t result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCanceled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2756))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2756), inst: 852 })
// CS Name: System.Threading.Tasks.TaskCompletionSource`1
class CORDL_TYPE TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TaskCompletionSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: " const&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskCompletionSource_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskCompletionSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1&& o) noexcept = default;
  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get__task, put=__set__task))  _task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __get__task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=get_Task))  Task;


// Methods

// Ctor Parameters []
explicit TaskCompletionSource_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetException(::System::Exception exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::GlobalNamespace::GetAssetBundleFileResult result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::GlobalNamespace::GetAssetBundleFileResult result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCanceled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2756))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2756), inst: 4825 })
// CS Name: System.Threading.Tasks.TaskCompletionSource`1
class CORDL_TYPE TaskCompletionSource_1<::System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TaskCompletionSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: " const&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
constexpr TaskCompletionSource_1(TaskCompletionSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskCompletionSource_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskCompletionSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1&& o) noexcept = default;
  constexpr TaskCompletionSource_1& operator=(TaskCompletionSource_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::Task_1<::System::Int32Enum> __declspec(property(get=__get__task, put=__set__task))  _task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<::System::Int32Enum> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Int32Enum> __get__task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::System::Int32Enum> __declspec(property(get=get_Task))  Task;


// Methods

// Ctor Parameters []
explicit TaskCompletionSource_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state) ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit TaskCompletionSource_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::System::Int32Enum> get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetException(::System::Exception exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::System::Int32Enum result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Int32Enum result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCanceled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::TaskCompletionSource_1, "System.Threading.Tasks", "TaskCompletionSource`1");
