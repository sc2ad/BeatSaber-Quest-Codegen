#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class Delegate;
}
namespace System::Threading {
class ContextCallback;
}
// Forward declare root types
namespace System::Threading {
class ThreadHelper;
}
// Type: System.Threading::ThreadHelper
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2721))
// CS Name: System.Threading.ThreadHelper
class CORDL_TYPE ThreadHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ThreadHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: " const&", def_value: None }]
constexpr ThreadHelper(ThreadHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: "&&", def_value: None }]
constexpr ThreadHelper(ThreadHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadHelper& operator=(ThreadHelper&& o) noexcept = default;
  constexpr ThreadHelper& operator=(ThreadHelper const& o) noexcept = default;
                


// Fields

 ::System::Delegate __declspec(property(get=__get__start, put=__set__start))  _start;

constexpr void __set__start(::System::Delegate value) ;

constexpr ::System::Delegate __get__start() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__startArg, put=__set__startArg))  _startArg;

constexpr void __set__startArg(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__startArg() const;

 ::System::Threading::ExecutionContext __declspec(property(get=__get__executionContext, put=__set__executionContext))  _executionContext;

constexpr void __set__executionContext(::System::Threading::ExecutionContext value) ;

constexpr ::System::Threading::ExecutionContext __get__executionContext() const;

static ::System::Threading::ContextCallback __declspec(property(get=__get__ccb, put=__set__ccb))  _ccb;

static void __set__ccb(::System::Threading::ContextCallback value) ;

static ::System::Threading::ContextCallback __get__ccb() ;


// Methods

// Ctor Parameters [CppParam { name: "start", ty: "::System::Delegate", modifiers: "", def_value: None }]
explicit ThreadHelper(::System::Delegate start) ;

/// @brief Method .ctor addr 0x24abdac size 0x28 virtual false final false
 void _ctor(::System::Delegate start) ;

/// @brief Method SetExecutionContextHelper addr 0x24abdd4 size 0x8 virtual false final false
 void SetExecutionContextHelper(::System::Threading::ExecutionContext ec) ;

/// @brief Method ThreadStart_Context addr 0x24abddc size 0x10c virtual false final false
static void ThreadStart_Context(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method ThreadStart addr 0x24abee8 size 0x100 virtual false final false
 void ThreadStart(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ThreadStart addr 0x24abfe8 size 0xf4 virtual false final false
 void ThreadStart() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::ThreadHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadHelper, "System.Threading", "ThreadHelper");
