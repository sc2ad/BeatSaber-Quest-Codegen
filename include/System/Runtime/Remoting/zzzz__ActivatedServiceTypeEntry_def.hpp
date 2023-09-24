#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ActivatedServiceTypeEntry;
}
// Type: System.Runtime.Remoting::ActivatedServiceTypeEntry
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3075))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3050))
// CS Name: System.Runtime.Remoting.ActivatedServiceTypeEntry
class CORDL_TYPE ActivatedServiceTypeEntry : public System::Runtime::Remoting::TypeEntry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ActivatedServiceTypeEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivatedServiceTypeEntry", modifiers: " const&", def_value: None }]
constexpr ActivatedServiceTypeEntry(ActivatedServiceTypeEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivatedServiceTypeEntry", modifiers: "&&", def_value: None }]
constexpr ActivatedServiceTypeEntry(ActivatedServiceTypeEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActivatedServiceTypeEntry(void* ptr) noexcept : System::Runtime::Remoting::TypeEntry(ptr) {
}


  constexpr ActivatedServiceTypeEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActivatedServiceTypeEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActivatedServiceTypeEntry& operator=(ActivatedServiceTypeEntry&& o) noexcept = default;
  constexpr ActivatedServiceTypeEntry& operator=(ActivatedServiceTypeEntry const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_obj_type, put=__set_obj_type))  obj_type;

constexpr void __set_obj_type(System::Type value) ;

constexpr System::Type __get_obj_type() const;


// Properties

 System::Type __declspec(property(get=get_ObjectType))  ObjectType;


// Methods

static System::Runtime::Remoting::ActivatedServiceTypeEntry New_ctor(::StringW typeName, ::StringW assemblyName) ;

/// @brief Method .ctor addr 0x2319cbc size 0x128 virtual false final false
 void _ctor(::StringW typeName, ::StringW assemblyName) ;

/// @brief Method get_ObjectType addr 0x2319de4 size 0x8 virtual false final false
 System::Type get_ObjectType() ;

/// @brief Method ToString addr 0x2319dec size 0x10 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::ActivatedServiceTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ActivatedServiceTypeEntry, "System.Runtime.Remoting", "ActivatedServiceTypeEntry");
