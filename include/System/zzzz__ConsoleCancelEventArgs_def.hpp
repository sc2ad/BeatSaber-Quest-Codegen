#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
namespace System {
struct ConsoleSpecialKey;
}
// Forward declare root types
namespace System {
class ConsoleCancelEventArgs;
}
// Type: System::ConsoleCancelEventArgs
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2516))
// CS Name: System.ConsoleCancelEventArgs
class CORDL_TYPE ConsoleCancelEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ConsoleCancelEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventArgs", modifiers: " const&", def_value: None }]
constexpr ConsoleCancelEventArgs(ConsoleCancelEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventArgs", modifiers: "&&", def_value: None }]
constexpr ConsoleCancelEventArgs(ConsoleCancelEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConsoleCancelEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr ConsoleCancelEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConsoleCancelEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConsoleCancelEventArgs& operator=(ConsoleCancelEventArgs&& o) noexcept = default;
  constexpr ConsoleCancelEventArgs& operator=(ConsoleCancelEventArgs const& o) noexcept = default;
                


// Fields

 System::ConsoleSpecialKey __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(System::ConsoleSpecialKey value) ;

constexpr System::ConsoleSpecialKey __get__type() const;

 bool __declspec(property(get=__get__Cancel_k__BackingField, put=__set__Cancel_k__BackingField))  _Cancel_k__BackingField;

constexpr void __set__Cancel_k__BackingField(bool value) ;

constexpr bool __get__Cancel_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_Cancel))  Cancel;


// Methods

static System::ConsoleCancelEventArgs New_ctor(System::ConsoleSpecialKey type) ;

/// @brief Method .ctor addr 0x2461874 size 0x6c virtual false final false
 void _ctor(System::ConsoleSpecialKey type) ;

/// @brief Method get_Cancel addr 0x24618e0 size 0x8 virtual false final false
 bool get_Cancel() ;

static System::ConsoleCancelEventArgs New_ctor() ;

/// @brief Method .ctor addr 0x24618e8 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ConsoleCancelEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleCancelEventArgs, "System", "ConsoleCancelEventArgs");
