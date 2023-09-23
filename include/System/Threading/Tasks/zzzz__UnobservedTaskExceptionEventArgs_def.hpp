#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
namespace System {
class AggregateException;
}
// Forward declare root types
namespace System::Threading::Tasks {
class UnobservedTaskExceptionEventArgs;
}
// Type: System.Threading.Tasks::UnobservedTaskExceptionEventArgs
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2809))
// CS Name: System.Threading.Tasks.UnobservedTaskExceptionEventArgs
class CORDL_TYPE UnobservedTaskExceptionEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnobservedTaskExceptionEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnobservedTaskExceptionEventArgs", modifiers: " const&", def_value: None }]
constexpr UnobservedTaskExceptionEventArgs(UnobservedTaskExceptionEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnobservedTaskExceptionEventArgs", modifiers: "&&", def_value: None }]
constexpr UnobservedTaskExceptionEventArgs(UnobservedTaskExceptionEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnobservedTaskExceptionEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr UnobservedTaskExceptionEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnobservedTaskExceptionEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnobservedTaskExceptionEventArgs& operator=(UnobservedTaskExceptionEventArgs&& o) noexcept = default;
  constexpr UnobservedTaskExceptionEventArgs& operator=(UnobservedTaskExceptionEventArgs const& o) noexcept = default;
                


// Fields

 System::AggregateException __declspec(property(get=__get_m_exception, put=__set_m_exception))  m_exception;

constexpr void __set_m_exception(System::AggregateException value) ;

constexpr System::AggregateException __get_m_exception() const;

 bool __declspec(property(get=__get_m_observed, put=__set_m_observed))  m_observed;

constexpr void __set_m_observed(bool value) ;

constexpr bool __get_m_observed() const;


// Methods

// Ctor Parameters [CppParam { name: "exception", ty: "System::AggregateException", modifiers: "", def_value: None }]
explicit UnobservedTaskExceptionEventArgs(System::AggregateException exception) ;

/// @brief Method .ctor addr 0x24be424 size 0x6c virtual false final false
 void _ctor(System::AggregateException exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::UnobservedTaskExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::UnobservedTaskExceptionEventArgs, "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs");
