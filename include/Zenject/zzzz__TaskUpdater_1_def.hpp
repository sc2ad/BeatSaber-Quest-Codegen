#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
template<typename TTask>
class TaskUpdater_1;
}
namespace Zenject {
template<typename TTask>
class Zenject__TaskUpdater_1__TaskInfo;
}
namespace Zenject {
template<typename TTask>
class Zenject__TaskUpdater_1____c;
}
namespace Zenject {
template<typename TTask>
class Zenject__TaskUpdater_1____c__DisplayClass8_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TTask>
class TaskUpdater_1<TTask>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TTask>
class Zenject__TaskUpdater_1__TaskInfo<TTask>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TTask>
class Zenject__TaskUpdater_1____c<TTask>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TTask>
class Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>;
}
// Type: ::TaskInfo
// Type: ::<>c
// Type: ::<>c__DisplayClass8_0
// Type: Zenject::TaskUpdater`1
// Type: ::TaskInfo
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TTask>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11276))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11276), inst: 2 })
// CS Name: Zenject.TaskUpdater`1::TaskInfo
class CORDL_TYPE Zenject__TaskUpdater_1__TaskInfo<TTask> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__TaskUpdater_1__TaskInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TaskUpdater_1__TaskInfo", modifiers: " const&", def_value: None }]
constexpr Zenject__TaskUpdater_1__TaskInfo(Zenject__TaskUpdater_1__TaskInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TaskUpdater_1__TaskInfo", modifiers: "&&", def_value: None }]
constexpr Zenject__TaskUpdater_1__TaskInfo(Zenject__TaskUpdater_1__TaskInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__TaskUpdater_1__TaskInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__TaskUpdater_1__TaskInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__TaskUpdater_1__TaskInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__TaskUpdater_1__TaskInfo& operator=(Zenject__TaskUpdater_1__TaskInfo&& o) noexcept = default;
  constexpr Zenject__TaskUpdater_1__TaskInfo& operator=(Zenject__TaskUpdater_1__TaskInfo const& o) noexcept = default;
                


// Fields

 TTask __declspec(property(get=__get_Task, put=__set_Task))  Task;

constexpr void __set_Task(TTask value) ;

constexpr TTask __get_Task() const;

 int32_t __declspec(property(get=__get_Priority, put=__set_Priority))  Priority;

constexpr void __set_Priority(int32_t value) ;

constexpr int32_t __get_Priority() const;

 bool __declspec(property(get=__get_IsRemoved, put=__set_IsRemoved))  IsRemoved;

constexpr void __set_IsRemoved(bool value) ;

constexpr bool __get_IsRemoved() const;


// Methods

// Ctor Parameters [CppParam { name: "task", ty: "TTask", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: None }]
explicit Zenject__TaskUpdater_1__TaskInfo(TTask task, int32_t priority) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TTask task, int32_t priority) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TTask>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11277))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11277), inst: 2 })
// CS Name: Zenject.TaskUpdater`1::<>c
class CORDL_TYPE Zenject__TaskUpdater_1____c<TTask> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__TaskUpdater_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TaskUpdater_1____c", modifiers: " const&", def_value: None }]
constexpr Zenject__TaskUpdater_1____c(Zenject__TaskUpdater_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TaskUpdater_1____c", modifiers: "&&", def_value: None }]
constexpr Zenject__TaskUpdater_1____c(Zenject__TaskUpdater_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__TaskUpdater_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__TaskUpdater_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__TaskUpdater_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__TaskUpdater_1____c& operator=(Zenject__TaskUpdater_1____c&& o) noexcept = default;
  constexpr Zenject__TaskUpdater_1____c& operator=(Zenject__TaskUpdater_1____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__TaskUpdater_1____c<TTask> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__TaskUpdater_1____c<TTask> value) ;

static Zenject::Zenject__TaskUpdater_1____c<TTask> __get___9() ;

static System::Func_2<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask> value) ;

static System::Func_2<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask> __get___9__7_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__TaskUpdater_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <AddTaskInternal>b__7_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TTask _AddTaskInternal_b__7_0(Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TTask>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11278))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11278), inst: 2 })
// CS Name: Zenject.TaskUpdater`1::<>c__DisplayClass8_0
class CORDL_TYPE Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__TaskUpdater_1____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TaskUpdater_1____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr Zenject__TaskUpdater_1____c__DisplayClass8_0(Zenject__TaskUpdater_1____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TaskUpdater_1____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr Zenject__TaskUpdater_1____c__DisplayClass8_0(Zenject__TaskUpdater_1____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__TaskUpdater_1____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__TaskUpdater_1____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__TaskUpdater_1____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__TaskUpdater_1____c__DisplayClass8_0& operator=(Zenject__TaskUpdater_1____c__DisplayClass8_0&& o) noexcept = default;
  constexpr Zenject__TaskUpdater_1____c__DisplayClass8_0& operator=(Zenject__TaskUpdater_1____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 TTask __declspec(property(get=__get_task, put=__set_task))  task;

constexpr void __set_task(TTask value) ;

constexpr TTask __get_task() const;


// Methods

// Ctor Parameters []
explicit Zenject__TaskUpdater_1____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RemoveTask>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _RemoveTask_b__0(Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::TaskUpdater`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TTask>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11279))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11279), inst: 2 })
// CS Name: Zenject.TaskUpdater`1
class CORDL_TYPE TaskUpdater_1<TTask> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass8_0 = Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>;

using __c = Zenject::Zenject__TaskUpdater_1____c<TTask>;

using TaskInfo = Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TaskUpdater_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskUpdater_1", modifiers: " const&", def_value: None }]
constexpr TaskUpdater_1(TaskUpdater_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskUpdater_1", modifiers: "&&", def_value: None }]
constexpr TaskUpdater_1(TaskUpdater_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskUpdater_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskUpdater_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskUpdater_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskUpdater_1& operator=(TaskUpdater_1&& o) noexcept = default;
  constexpr TaskUpdater_1& operator=(TaskUpdater_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> __declspec(property(get=__get__tasks, put=__set__tasks))  _tasks;

constexpr void __set__tasks(System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> value) ;

constexpr System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> __get__tasks() const;

 System::Collections::Generic::List_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> __declspec(property(get=__get__queuedTasks, put=__set__queuedTasks))  _queuedTasks;

constexpr void __set__queuedTasks(System::Collections::Generic::List_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> value) ;

constexpr System::Collections::Generic::List_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> __get__queuedTasks() const;


// Properties

 System::Collections::Generic::IEnumerable_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> __declspec(property(get=get_AllTasks))  AllTasks;

 System::Collections::Generic::IEnumerable_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> __declspec(property(get=get_ActiveTasks))  ActiveTasks;


// Methods

/// @brief Method get_AllTasks addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> get_AllTasks() ;

/// @brief Method get_ActiveTasks addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> get_ActiveTasks() ;

/// @brief Method AddTask addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddTask(TTask task, int32_t priority) ;

/// @brief Method AddTaskInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddTaskInternal(TTask task, int32_t priority) ;

/// @brief Method RemoveTask addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveTask(TTask task) ;

/// @brief Method OnFrameStart addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnFrameStart() ;

/// @brief Method UpdateAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateAll() ;

/// @brief Method UpdateRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateRange(int32_t minPriority, int32_t maxPriority) ;

/// @brief Method ClearRemovedTasks addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearRemovedTasks(System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> tasks) ;

/// @brief Method AddQueuedTasks addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddQueuedTasks() ;

/// @brief Method InsertTaskSorted addr 0x0 size 0xffffffffffffffff virtual false final false
 void InsertTaskSorted(Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask> task) ;

/// @brief Method UpdateItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateItem(TTask task) ;

// Ctor Parameters []
explicit TaskUpdater_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::TaskUpdater_1, "Zenject", "TaskUpdater`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__TaskUpdater_1__TaskInfo, "Zenject", "TaskUpdater`1/TaskInfo");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__TaskUpdater_1____c, "Zenject", "TaskUpdater`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0, "Zenject", "TaskUpdater`1/<>c__DisplayClass8_0");
