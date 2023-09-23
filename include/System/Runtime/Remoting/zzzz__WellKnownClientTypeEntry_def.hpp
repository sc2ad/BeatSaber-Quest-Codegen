#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class WellKnownClientTypeEntry;
}
// Type: System.Runtime.Remoting::WellKnownClientTypeEntry
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3075))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3077))
// CS Name: System.Runtime.Remoting.WellKnownClientTypeEntry
class CORDL_TYPE WellKnownClientTypeEntry : public System::Runtime::Remoting::TypeEntry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~WellKnownClientTypeEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "WellKnownClientTypeEntry", modifiers: " const&", def_value: None }]
constexpr WellKnownClientTypeEntry(WellKnownClientTypeEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WellKnownClientTypeEntry", modifiers: "&&", def_value: None }]
constexpr WellKnownClientTypeEntry(WellKnownClientTypeEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WellKnownClientTypeEntry(void* ptr) noexcept : System::Runtime::Remoting::TypeEntry(ptr) {
}


  constexpr WellKnownClientTypeEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WellKnownClientTypeEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WellKnownClientTypeEntry& operator=(WellKnownClientTypeEntry&& o) noexcept = default;
  constexpr WellKnownClientTypeEntry& operator=(WellKnownClientTypeEntry const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_obj_type, put=__set_obj_type))  obj_type;

constexpr void __set_obj_type(System::Type value) ;

constexpr System::Type __get_obj_type() const;

 ::StringW __declspec(property(get=__get_obj_url, put=__set_obj_url))  obj_url;

constexpr void __set_obj_url(::StringW value) ;

constexpr ::StringW __get_obj_url() const;

 ::StringW __declspec(property(get=__get_app_url, put=__set_app_url))  app_url;

constexpr void __set_app_url(::StringW value) ;

constexpr ::StringW __get_app_url() const;


// Properties

 ::StringW __declspec(property(get=get_ApplicationUrl))  ApplicationUrl;

 System::Type __declspec(property(get=get_ObjectType))  ObjectType;

 ::StringW __declspec(property(get=get_ObjectUrl))  ObjectUrl;


// Methods

// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objectUrl", ty: "::StringW", modifiers: "", def_value: None }]
explicit WellKnownClientTypeEntry(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl) ;

/// @brief Method .ctor addr 0x232968c size 0x134 virtual false final false
 void _ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl) ;

/// @brief Method get_ApplicationUrl addr 0x23297c0 size 0x8 virtual false final false
 ::StringW get_ApplicationUrl() ;

/// @brief Method get_ObjectType addr 0x23297c8 size 0x8 virtual false final false
 System::Type get_ObjectType() ;

/// @brief Method get_ObjectUrl addr 0x23297d0 size 0x8 virtual false final false
 ::StringW get_ObjectUrl() ;

/// @brief Method ToString addr 0x23297d8 size 0x1c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::WellKnownClientTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::WellKnownClientTypeEntry, "System.Runtime.Remoting", "WellKnownClientTypeEntry");
