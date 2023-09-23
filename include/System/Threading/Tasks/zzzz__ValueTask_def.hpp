#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
struct ConfiguredValueTaskAwaitable;
}
// Forward declare root types
namespace GlobalNamespace {
class System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c;
}
namespace System::Threading::Tasks {
class System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2761))
// CS Name: System.Threading.Tasks.ValueTask::ValueTaskSourceAsTask::<>c
class CORDL_TYPE System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c", modifiers: " const&", def_value: None }]
constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c(System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c", modifiers: "&&", def_value: None }]
constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c(System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c& operator=(System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c&& o) noexcept = default;
  constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c& operator=(System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c value) ;

static GlobalNamespace::System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c __get___9() ;


// Methods

// Ctor Parameters []
explicit System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c() ;

/// @brief Method .ctor addr 0x24b4904 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__4_0 addr 0x24b490c size 0x2a4 virtual false final false
 void __cctor_b__4_0(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ValueTaskSourceAsTask
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 867 }), TypeDefinitionIndex(TypeDefinitionIndex(2790)), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2762))
// CS Name: System.Threading.Tasks.ValueTask::ValueTaskSourceAsTask
class CORDL_TYPE System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask : public System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> {
public:
// Declarations
using __c = GlobalNamespace::System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask", modifiers: " const&", def_value: None }]
constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask(System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask", modifiers: "&&", def_value: None }]
constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask(System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask(void* ptr) noexcept : System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>(ptr) {
}


  constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask& operator=(System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask&& o) noexcept = default;
  constexpr System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask& operator=(System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask const& o) noexcept = default;
                


// Fields

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_completionAction, put=__set_s_completionAction))  s_completionAction;

static void __set_s_completionAction(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get_s_completionAction() ;

 System::Threading::Tasks::Sources::IValueTaskSource __declspec(property(get=__get__source, put=__set__source))  _source;

constexpr void __set__source(System::Threading::Tasks::Sources::IValueTaskSource value) ;

constexpr System::Threading::Tasks::Sources::IValueTaskSource __get__source() const;

 int16_t __declspec(property(get=__get__token, put=__set__token))  _token;

constexpr void __set__token(int16_t value) ;

constexpr int16_t __get__token() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "System::Threading::Tasks::Sources::IValueTaskSource", modifiers: "", def_value: None }, CppParam { name: "token", ty: "int16_t", modifiers: "", def_value: None }]
explicit System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask(System::Threading::Tasks::Sources::IValueTaskSource source, int16_t token) ;

/// @brief Method .ctor addr 0x24b43b4 size 0x120 virtual false final false
 void _ctor(System::Threading::Tasks::Sources::IValueTaskSource source, int16_t token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ValueTask
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2763))
// CS Name: System.Threading.Tasks.ValueTask
struct CORDL_TYPE ValueTask : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ValueTaskSourceAsTask = System::Threading::Tasks::System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask;

/// @brief Convert operator to System::IEquatable_1<System::Threading::Tasks::ValueTask>
constexpr operator  System::IEquatable_1<System::Threading::Tasks::ValueTask>() const;

// Ctor Parameters [CppParam { name: "_obj", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_token", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr ValueTask(::bs_hook::Il2CppWrapperType _obj, int16_t _token, bool _continueOnCapturedContext) noexcept;


                    constexpr ValueTask(ValueTask const&) = default;
                    constexpr ValueTask(ValueTask&&) = default;
                    constexpr ValueTask& operator=(ValueTask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTask& operator=(ValueTask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Threading::Tasks::Task __declspec(property(get=__get_s_canceledTask, put=__set_s_canceledTask))  s_canceledTask;

static void __set_s_canceledTask(System::Threading::Tasks::Task value) ;

static System::Threading::Tasks::Task __get_s_canceledTask() ;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__obj, put=__set__obj))  _obj;

constexpr void __set__obj(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__obj() const;

 int16_t __declspec(property(get=__get__token, put=__set__token))  _token;

constexpr void __set__token(int16_t value) ;

constexpr int16_t __get__token() const;

 bool __declspec(property(get=__get__continueOnCapturedContext, put=__set__continueOnCapturedContext))  _continueOnCapturedContext;

constexpr void __set__continueOnCapturedContext(bool value) ;

constexpr bool __get__continueOnCapturedContext() const;


// Properties

static System::Threading::Tasks::Task __declspec(property(get=get_CompletedTask))  CompletedTask;

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method get_CompletedTask addr 0x24b3d90 size 0x88 virtual false final false
static System::Threading::Tasks::Task get_CompletedTask() ;

/// @brief Method .ctor addr 0x24b3e18 size 0x38 virtual false final false
 void _ctor(System::Threading::Tasks::Task task) ;

/// @brief Method .ctor addr 0x24b3e50 size 0x3c virtual false final false
 void _ctor(System::Threading::Tasks::Sources::IValueTaskSource source, int16_t token) ;

/// @brief Method .ctor addr 0x24b3e8c size 0x14 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType obj, int16_t token, bool continueOnCapturedContext) ;

/// @brief Method GetHashCode addr 0x24b3ea0 size 0x18 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x24b3eb8 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x24b3f40 size 0x24 virtual true final true
 bool Equals(System::Threading::Tasks::ValueTask other) ;

/// @brief Method AsTask addr 0x24b3f64 size 0xb8 virtual false final false
 System::Threading::Tasks::Task AsTask() ;

/// @brief Method GetTaskForValueTaskSource addr 0x24b401c size 0x2d8 virtual false final false
 System::Threading::Tasks::Task GetTaskForValueTaskSource(System::Threading::Tasks::Sources::IValueTaskSource t) ;

/// @brief Method get_IsCompleted addr 0x24b44d4 size 0x104 virtual false final false
 bool get_IsCompleted() ;

/// @brief Method ThrowIfCompletedUnsuccessfully addr 0x24b45d8 size 0x104 virtual false final false
 void ThrowIfCompletedUnsuccessfully() ;

/// @brief Method GetAwaiter addr 0x24b46dc size 0xc virtual false final false
 System::Runtime::CompilerServices::ValueTaskAwaiter GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x24b46e8 size 0x18 virtual false final false
 System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable ConfigureAwait(bool continueOnCapturedContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(GlobalNamespace::System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask____c, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask/<>c");
NEED_NO_BOX(System::Threading::Tasks::System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::System__Threading__Tasks__ValueTask__ValueTaskSourceAsTask, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::ValueTask, "System.Threading.Tasks", "ValueTask");
