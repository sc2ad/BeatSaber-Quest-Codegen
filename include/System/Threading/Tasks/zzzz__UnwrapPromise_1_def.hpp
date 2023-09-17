#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System::Threading {
class WaitCallback;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class UnwrapPromise_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class ____System__Threading__Tasks__UnwrapPromise_1____c;
}
namespace System::Threading::Tasks {
template<::cordl_internals::il2cpp_reference_type TResult>
class UnwrapPromise_1<TResult>;
}
namespace System::Threading::Tasks {
template<>
class UnwrapPromise_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Threading::Tasks {
template<::cordl_internals::il2cpp_reference_type TResult>
class ____System__Threading__Tasks__UnwrapPromise_1____c<TResult>;
}
namespace System::Threading::Tasks {
template<>
class ____System__Threading__Tasks__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult>;
}
// Type: ::<>c
// Type: System.Threading.Tasks::UnwrapPromise`1
// Type: ::<>c
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2792))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2792), inst: 2 })
// CS Name: System.Threading.Tasks.UnwrapPromise`1::<>c
class CORDL_TYPE ____System__Threading__Tasks__UnwrapPromise_1____c<TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Threading__Tasks__UnwrapPromise_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__UnwrapPromise_1____c", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__Tasks__UnwrapPromise_1____c(____System__Threading__Tasks__UnwrapPromise_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__UnwrapPromise_1____c", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__Tasks__UnwrapPromise_1____c(____System__Threading__Tasks__UnwrapPromise_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__Tasks__UnwrapPromise_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__Tasks__UnwrapPromise_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__Tasks__UnwrapPromise_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__Tasks__UnwrapPromise_1____c& operator=(____System__Threading__Tasks__UnwrapPromise_1____c&& o) noexcept = default;
  constexpr ____System__Threading__Tasks__UnwrapPromise_1____c& operator=(____System__Threading__Tasks__UnwrapPromise_1____c const& o) noexcept = default;
                


// Fields

static ::System::Threading::Tasks::____System__Threading__Tasks__UnwrapPromise_1____c<TResult> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::Threading::Tasks::____System__Threading__Tasks__UnwrapPromise_1____c<TResult> value) ;

static ::System::Threading::Tasks::____System__Threading__Tasks__UnwrapPromise_1____c<TResult> __get___9() ;

static ::System::Threading::WaitCallback __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(::System::Threading::WaitCallback value) ;

static ::System::Threading::WaitCallback __get___9__8_0() ;


// Methods

// Ctor Parameters []
explicit ____System__Threading__Tasks__UnwrapPromise_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <InvokeCoreAsync>b__8_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _InvokeCoreAsync_b__8_0(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2792))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2792), inst: 867 })
// CS Name: System.Threading.Tasks.UnwrapPromise`1::<>c
class CORDL_TYPE ____System__Threading__Tasks__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Threading__Tasks__UnwrapPromise_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__UnwrapPromise_1____c", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__Tasks__UnwrapPromise_1____c(____System__Threading__Tasks__UnwrapPromise_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__UnwrapPromise_1____c", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__Tasks__UnwrapPromise_1____c(____System__Threading__Tasks__UnwrapPromise_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__Tasks__UnwrapPromise_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__Tasks__UnwrapPromise_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__Tasks__UnwrapPromise_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__Tasks__UnwrapPromise_1____c& operator=(____System__Threading__Tasks__UnwrapPromise_1____c&& o) noexcept = default;
  constexpr ____System__Threading__Tasks__UnwrapPromise_1____c& operator=(____System__Threading__Tasks__UnwrapPromise_1____c const& o) noexcept = default;
                


// Fields

static ::System::Threading::Tasks::____System__Threading__Tasks__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::Threading::Tasks::____System__Threading__Tasks__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult> value) ;

static ::System::Threading::Tasks::____System__Threading__Tasks__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult> __get___9() ;

static ::System::Threading::WaitCallback __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(::System::Threading::WaitCallback value) ;

static ::System::Threading::WaitCallback __get___9__8_0() ;


// Methods

// Ctor Parameters []
explicit ____System__Threading__Tasks__UnwrapPromise_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <InvokeCoreAsync>b__8_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _InvokeCoreAsync_b__8_0(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::UnwrapPromise`1
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2793)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 4944 }), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2793), inst: 2 })
// CS Name: System.Threading.Tasks.UnwrapPromise`1
class CORDL_TYPE UnwrapPromise_1<TResult> : public ::System::Threading::Tasks::Task_1<TResult> {
public:
// Declarations
using __c = ::System::Threading::Tasks::____System__Threading__Tasks__UnwrapPromise_1____c<TResult>;

/// @brief Convert operator to ::System::Threading::Tasks::ITaskCompletionAction
constexpr operator  ::System::Threading::Tasks::ITaskCompletionAction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~UnwrapPromise_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: " const&", def_value: None }]
constexpr UnwrapPromise_1(UnwrapPromise_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: "&&", def_value: None }]
constexpr UnwrapPromise_1(UnwrapPromise_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnwrapPromise_1(void* ptr) noexcept : ::System::Threading::Tasks::Task_1<TResult>(ptr) {
}


  constexpr UnwrapPromise_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnwrapPromise_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnwrapPromise_1& operator=(UnwrapPromise_1&& o) noexcept = default;
  constexpr UnwrapPromise_1& operator=(UnwrapPromise_1 const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(uint8_t value) ;

constexpr uint8_t __get__state() const;

 bool __declspec(property(get=__get__lookForOce, put=__set__lookForOce))  _lookForOce;

constexpr void __set__lookForOce(bool value) ;

constexpr bool __get__lookForOce() const;


// Properties

 bool __declspec(property(get=get_InvokeMayRunArbitraryCode))  InvokeMayRunArbitraryCode;


// Methods

// Ctor Parameters [CppParam { name: "outerTask", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "lookForOce", ty: "bool", modifiers: "", def_value: None }]
explicit UnwrapPromise_1(::System::Threading::Tasks::Task outerTask, bool lookForOce) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task outerTask, bool lookForOce) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final true
 void Invoke(::System::Threading::Tasks::Task completingTask) ;

/// @brief Method InvokeCore addr 0x0 size 0xffffffffffffffff virtual false final false
 void InvokeCore(::System::Threading::Tasks::Task completingTask) ;

/// @brief Method InvokeCoreAsync addr 0x0 size 0xffffffffffffffff virtual false final false
 void InvokeCoreAsync(::System::Threading::Tasks::Task completingTask) ;

/// @brief Method ProcessCompletedOuterTask addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessCompletedOuterTask(::System::Threading::Tasks::Task task) ;

/// @brief Method TrySetFromTask addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetFromTask(::System::Threading::Tasks::Task task, bool lookForOce) ;

/// @brief Method ProcessInnerTask addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessInnerTask(::System::Threading::Tasks::Task task) ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_InvokeMayRunArbitraryCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::UnwrapPromise`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2793)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 4944 }), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2793), inst: 867 })
// CS Name: System.Threading.Tasks.UnwrapPromise`1
class CORDL_TYPE UnwrapPromise_1<::System::Threading::Tasks::VoidTaskResult> : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
// Declarations
using __c = ::System::Threading::Tasks::____System__Threading__Tasks__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult>;

/// @brief Convert operator to ::System::Threading::Tasks::ITaskCompletionAction
constexpr operator  ::System::Threading::Tasks::ITaskCompletionAction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~UnwrapPromise_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: " const&", def_value: None }]
constexpr UnwrapPromise_1(UnwrapPromise_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: "&&", def_value: None }]
constexpr UnwrapPromise_1(UnwrapPromise_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnwrapPromise_1(void* ptr) noexcept : ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>(ptr) {
}


  constexpr UnwrapPromise_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnwrapPromise_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnwrapPromise_1& operator=(UnwrapPromise_1&& o) noexcept = default;
  constexpr UnwrapPromise_1& operator=(UnwrapPromise_1 const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(uint8_t value) ;

constexpr uint8_t __get__state() const;

 bool __declspec(property(get=__get__lookForOce, put=__set__lookForOce))  _lookForOce;

constexpr void __set__lookForOce(bool value) ;

constexpr bool __get__lookForOce() const;


// Properties

 bool __declspec(property(get=get_InvokeMayRunArbitraryCode))  InvokeMayRunArbitraryCode;


// Methods

// Ctor Parameters [CppParam { name: "outerTask", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "lookForOce", ty: "bool", modifiers: "", def_value: None }]
explicit UnwrapPromise_1(::System::Threading::Tasks::Task outerTask, bool lookForOce) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task outerTask, bool lookForOce) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final true
 void Invoke(::System::Threading::Tasks::Task completingTask) ;

/// @brief Method InvokeCore addr 0x0 size 0xffffffffffffffff virtual false final false
 void InvokeCore(::System::Threading::Tasks::Task completingTask) ;

/// @brief Method InvokeCoreAsync addr 0x0 size 0xffffffffffffffff virtual false final false
 void InvokeCoreAsync(::System::Threading::Tasks::Task completingTask) ;

/// @brief Method ProcessCompletedOuterTask addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessCompletedOuterTask(::System::Threading::Tasks::Task task) ;

/// @brief Method TrySetFromTask addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetFromTask(::System::Threading::Tasks::Task task, bool lookForOce) ;

/// @brief Method ProcessInnerTask addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessInnerTask(::System::Threading::Tasks::Task task) ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_InvokeMayRunArbitraryCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::UnwrapPromise_1, "System.Threading.Tasks", "UnwrapPromise`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::____System__Threading__Tasks__UnwrapPromise_1____c, "System.Threading.Tasks", "UnwrapPromise`1/<>c");
