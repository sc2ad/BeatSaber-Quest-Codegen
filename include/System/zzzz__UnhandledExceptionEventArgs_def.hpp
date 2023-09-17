#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System {
class UnhandledExceptionEventArgs;
}
// Type: System::UnhandledExceptionEventArgs
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2501))
// CS Name: System.UnhandledExceptionEventArgs
class CORDL_TYPE UnhandledExceptionEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnhandledExceptionEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventArgs", modifiers: " const&", def_value: None }]
constexpr UnhandledExceptionEventArgs(UnhandledExceptionEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventArgs", modifiers: "&&", def_value: None }]
constexpr UnhandledExceptionEventArgs(UnhandledExceptionEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnhandledExceptionEventArgs(void* ptr) noexcept : ::System::EventArgs(ptr) {
}


  constexpr UnhandledExceptionEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnhandledExceptionEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnhandledExceptionEventArgs& operator=(UnhandledExceptionEventArgs&& o) noexcept = default;
  constexpr UnhandledExceptionEventArgs& operator=(UnhandledExceptionEventArgs const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__exception, put=__set__exception))  _exception;

constexpr void __set__exception(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__exception() const;

 bool __declspec(property(get=__get__isTerminating, put=__set__isTerminating))  _isTerminating;

constexpr void __set__isTerminating(bool value) ;

constexpr bool __get__isTerminating() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ExceptionObject))  ExceptionObject;

 bool __declspec(property(get=get_IsTerminating))  IsTerminating;


// Methods

// Ctor Parameters [CppParam { name: "exception", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "isTerminating", ty: "bool", modifiers: "", def_value: None }]
explicit UnhandledExceptionEventArgs(::bs_hook::Il2CppWrapperType exception, bool isTerminating) ;

/// @brief Method .ctor addr 0x245fb38 size 0x74 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType exception, bool isTerminating) ;

/// @brief Method get_ExceptionObject addr 0x245fbac size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_ExceptionObject() ;

/// @brief Method get_IsTerminating addr 0x245fbb4 size 0x8 virtual false final false
 bool get_IsTerminating() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::UnhandledExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::UnhandledExceptionEventArgs, "System", "UnhandledExceptionEventArgs");
