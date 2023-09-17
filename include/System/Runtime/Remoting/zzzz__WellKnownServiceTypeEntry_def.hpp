#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Remoting {
struct WellKnownObjectMode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class WellKnownServiceTypeEntry;
}
// Type: System.Runtime.Remoting::WellKnownServiceTypeEntry
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3075))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3079))
// CS Name: System.Runtime.Remoting.WellKnownServiceTypeEntry
class CORDL_TYPE WellKnownServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~WellKnownServiceTypeEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "WellKnownServiceTypeEntry", modifiers: " const&", def_value: None }]
constexpr WellKnownServiceTypeEntry(WellKnownServiceTypeEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WellKnownServiceTypeEntry", modifiers: "&&", def_value: None }]
constexpr WellKnownServiceTypeEntry(WellKnownServiceTypeEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WellKnownServiceTypeEntry(void* ptr) noexcept : ::System::Runtime::Remoting::TypeEntry(ptr) {
}


  constexpr WellKnownServiceTypeEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WellKnownServiceTypeEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WellKnownServiceTypeEntry& operator=(WellKnownServiceTypeEntry&& o) noexcept = default;
  constexpr WellKnownServiceTypeEntry& operator=(WellKnownServiceTypeEntry const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get_obj_type, put=__set_obj_type))  obj_type;

constexpr void __set_obj_type(::System::Type value) ;

constexpr ::System::Type __get_obj_type() const;

 ::StringW __declspec(property(get=__get_obj_uri, put=__set_obj_uri))  obj_uri;

constexpr void __set_obj_uri(::StringW value) ;

constexpr ::StringW __get_obj_uri() const;

 ::System::Runtime::Remoting::WellKnownObjectMode __declspec(property(get=__get_obj_mode, put=__set_obj_mode))  obj_mode;

constexpr void __set_obj_mode(::System::Runtime::Remoting::WellKnownObjectMode value) ;

constexpr ::System::Runtime::Remoting::WellKnownObjectMode __get_obj_mode() const;


// Properties

 ::System::Runtime::Remoting::WellKnownObjectMode __declspec(property(get=get_Mode))  Mode;

 ::System::Type __declspec(property(get=get_ObjectType))  ObjectType;

 ::StringW __declspec(property(get=get_ObjectUri))  ObjectUri;


// Methods

// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::Runtime::Remoting::WellKnownObjectMode", modifiers: "", def_value: None }]
explicit WellKnownServiceTypeEntry(::StringW typeName, ::StringW assemblyName, ::StringW objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode) ;

/// @brief Method .ctor addr 0x23297f4 size 0x140 virtual false final false
 void _ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode) ;

/// @brief Method get_Mode addr 0x2329934 size 0x8 virtual false final false
 ::System::Runtime::Remoting::WellKnownObjectMode get_Mode() ;

/// @brief Method get_ObjectType addr 0x232993c size 0x8 virtual false final false
 ::System::Type get_ObjectType() ;

/// @brief Method get_ObjectUri addr 0x2329944 size 0x8 virtual false final false
 ::StringW get_ObjectUri() ;

/// @brief Method ToString addr 0x232994c size 0x178 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::WellKnownServiceTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::WellKnownServiceTypeEntry, "System.Runtime.Remoting", "WellKnownServiceTypeEntry");
