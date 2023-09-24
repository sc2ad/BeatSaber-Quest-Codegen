#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
struct TimeSpan;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace BGNet::Core {
class DefaultTaskUtility;
}
// Type: BGNet.Core::DefaultTaskUtility
namespace BGNet::Core {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12939))
// CS Name: BGNet.Core.DefaultTaskUtility
class CORDL_TYPE DefaultTaskUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::ITaskUtility
constexpr operator  BGNet::Core::ITaskUtility() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultTaskUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTaskUtility", modifiers: " const&", def_value: None }]
constexpr DefaultTaskUtility(DefaultTaskUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTaskUtility", modifiers: "&&", def_value: None }]
constexpr DefaultTaskUtility(DefaultTaskUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTaskUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultTaskUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTaskUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTaskUtility& operator=(DefaultTaskUtility&& o) noexcept = default;
  constexpr DefaultTaskUtility& operator=(DefaultTaskUtility const& o) noexcept = default;
                


// Fields

static BGNet::Core::DefaultTaskUtility __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(BGNet::Core::DefaultTaskUtility value) ;

static BGNet::Core::DefaultTaskUtility __get_instance() ;


// Methods

/// @brief Method Delay addr 0xdd0e14 size 0x68 virtual true final true
 System::Threading::Tasks::Task Delay(System::TimeSpan timeSpan, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CancellationTokenWithDelay addr 0xdd0e7c size 0x68 virtual true final true
 System::Threading::CancellationToken CancellationTokenWithDelay(System::TimeSpan timeSpan) ;

/// @brief Method Wait addr 0xdd0ee4 size 0x18 virtual true final true
 void Wait(System::Threading::Tasks::Task task) ;

/// @brief Method Wait addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T Wait(System::Threading::Tasks::Task_1<T> task) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T1,typename T2>
 System::Threading::Tasks::Task_1<T2> ContinueWith(System::Threading::Tasks::Task_1<T1> task, System::Func_2<System::Threading::Tasks::Task_1<T1>,System::Threading::Tasks::Task_1<T2>> continuation) ;

/// @brief Method Run addr 0xdd0efc size 0x68 virtual true final true
 System::Threading::Tasks::Task Run(System::Action action, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Run addr 0xdd0f64 size 0x68 virtual true final true
 System::Threading::Tasks::Task Run(System::Func_1<System::Threading::Tasks::Task> func, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 System::Threading::Tasks::Task_1<T> Run(System::Func_1<T> func, System::Threading::CancellationToken cancellationToken) ;

static BGNet::Core::DefaultTaskUtility New_ctor() ;

/// @brief Method .ctor addr 0xdd0fcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core
NEED_NO_BOX(BGNet::Core::DefaultTaskUtility);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::DefaultTaskUtility, "BGNet.Core", "DefaultTaskUtility");
