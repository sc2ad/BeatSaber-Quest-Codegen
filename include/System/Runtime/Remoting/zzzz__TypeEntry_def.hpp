#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Runtime::Remoting {
class TypeEntry;
}
// Type: System.Runtime.Remoting::TypeEntry
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3075))
// CS Name: System.Runtime.Remoting.TypeEntry
class CORDL_TYPE TypeEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TypeEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeEntry", modifiers: " const&", def_value: None }]
constexpr TypeEntry(TypeEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeEntry", modifiers: "&&", def_value: None }]
constexpr TypeEntry(TypeEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeEntry& operator=(TypeEntry&& o) noexcept = default;
  constexpr TypeEntry& operator=(TypeEntry const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_assembly_name, put=__set_assembly_name))  assembly_name;

constexpr void __set_assembly_name(::StringW value) ;

constexpr ::StringW __get_assembly_name() const;

 ::StringW __declspec(property(get=__get_type_name, put=__set_type_name))  type_name;

constexpr void __set_type_name(::StringW value) ;

constexpr ::StringW __get_type_name() const;


// Properties

 ::StringW __declspec(property(get=get_AssemblyName, put=set_AssemblyName))  AssemblyName;

 ::StringW __declspec(property(get=get_TypeName, put=set_TypeName))  TypeName;


// Methods

// Ctor Parameters []
explicit TypeEntry() ;

/// @brief Method .ctor addr 0x23293f0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_AssemblyName addr 0x23293f8 size 0x8 virtual false final false
 ::StringW get_AssemblyName() ;

/// @brief Method set_AssemblyName addr 0x2329400 size 0x8 virtual false final false
 void set_AssemblyName(::StringW value) ;

/// @brief Method get_TypeName addr 0x2329408 size 0x8 virtual false final false
 ::StringW get_TypeName() ;

/// @brief Method set_TypeName addr 0x2329410 size 0x8 virtual false final false
 void set_TypeName(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::TypeEntry);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::TypeEntry, "System.Runtime.Remoting", "TypeEntry");
