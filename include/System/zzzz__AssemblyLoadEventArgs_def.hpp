#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System {
class AssemblyLoadEventArgs;
}
// Type: System::AssemblyLoadEventArgs
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2351))
// CS Name: System.AssemblyLoadEventArgs
class CORDL_TYPE AssemblyLoadEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyLoadEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventArgs", modifiers: " const&", def_value: None }]
constexpr AssemblyLoadEventArgs(AssemblyLoadEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventArgs", modifiers: "&&", def_value: None }]
constexpr AssemblyLoadEventArgs(AssemblyLoadEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyLoadEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr AssemblyLoadEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyLoadEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyLoadEventArgs& operator=(AssemblyLoadEventArgs&& o) noexcept = default;
  constexpr AssemblyLoadEventArgs& operator=(AssemblyLoadEventArgs const& o) noexcept = default;
                


// Fields

 System::Reflection::Assembly __declspec(property(get=__get__LoadedAssembly_k__BackingField, put=__set__LoadedAssembly_k__BackingField))  _LoadedAssembly_k__BackingField;

constexpr void __set__LoadedAssembly_k__BackingField(System::Reflection::Assembly value) ;

constexpr System::Reflection::Assembly __get__LoadedAssembly_k__BackingField() const;


// Methods

static System::AssemblyLoadEventArgs New_ctor(System::Reflection::Assembly loadedAssembly) ;

/// @brief Method .ctor addr 0x23b463c size 0x6c virtual false final false
 void _ctor(System::Reflection::Assembly loadedAssembly) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::AssemblyLoadEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::AssemblyLoadEventArgs, "System", "AssemblyLoadEventArgs");
