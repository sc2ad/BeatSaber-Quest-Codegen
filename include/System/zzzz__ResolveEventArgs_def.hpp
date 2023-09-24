#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System {
class ResolveEventArgs;
}
// Type: System::ResolveEventArgs
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2464))
// CS Name: System.ResolveEventArgs
class CORDL_TYPE ResolveEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ResolveEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResolveEventArgs", modifiers: " const&", def_value: None }]
constexpr ResolveEventArgs(ResolveEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResolveEventArgs", modifiers: "&&", def_value: None }]
constexpr ResolveEventArgs(ResolveEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResolveEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr ResolveEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResolveEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResolveEventArgs& operator=(ResolveEventArgs&& o) noexcept = default;
  constexpr ResolveEventArgs& operator=(ResolveEventArgs const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

 System::Reflection::Assembly __declspec(property(get=__get__RequestingAssembly_k__BackingField, put=__set__RequestingAssembly_k__BackingField))  _RequestingAssembly_k__BackingField;

constexpr void __set__RequestingAssembly_k__BackingField(System::Reflection::Assembly value) ;

constexpr System::Reflection::Assembly __get__RequestingAssembly_k__BackingField() const;


// Methods

static System::ResolveEventArgs New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x2451ed0 size 0x6c virtual false final false
 void _ctor(::StringW name) ;

static System::ResolveEventArgs New_ctor(::StringW name, System::Reflection::Assembly requestingAssembly) ;

/// @brief Method .ctor addr 0x2451f3c size 0x70 virtual false final false
 void _ctor(::StringW name, System::Reflection::Assembly requestingAssembly) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ResolveEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::ResolveEventArgs, "System", "ResolveEventArgs");
