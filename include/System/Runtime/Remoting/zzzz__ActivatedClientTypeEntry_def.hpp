#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ActivatedClientTypeEntry;
}
// Type: System.Runtime.Remoting::ActivatedClientTypeEntry
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3075))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3049))
// CS Name: System.Runtime.Remoting.ActivatedClientTypeEntry
class CORDL_TYPE ActivatedClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ActivatedClientTypeEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivatedClientTypeEntry", modifiers: " const&", def_value: None }]
constexpr ActivatedClientTypeEntry(ActivatedClientTypeEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivatedClientTypeEntry", modifiers: "&&", def_value: None }]
constexpr ActivatedClientTypeEntry(ActivatedClientTypeEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActivatedClientTypeEntry(void* ptr) noexcept : ::System::Runtime::Remoting::TypeEntry(ptr) {
}


  constexpr ActivatedClientTypeEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActivatedClientTypeEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActivatedClientTypeEntry& operator=(ActivatedClientTypeEntry&& o) noexcept = default;
  constexpr ActivatedClientTypeEntry& operator=(ActivatedClientTypeEntry const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_applicationUrl, put=__set_applicationUrl))  applicationUrl;

constexpr void __set_applicationUrl(::StringW value) ;

constexpr ::StringW __get_applicationUrl() const;

 ::System::Type __declspec(property(get=__get_obj_type, put=__set_obj_type))  obj_type;

constexpr void __set_obj_type(::System::Type value) ;

constexpr ::System::Type __get_obj_type() const;


// Properties

 ::StringW __declspec(property(get=get_ApplicationUrl))  ApplicationUrl;

 ::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute> __declspec(property(get=get_ContextAttributes))  ContextAttributes;

 ::System::Type __declspec(property(get=get_ObjectType))  ObjectType;


// Methods

// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appUrl", ty: "::StringW", modifiers: "", def_value: None }]
explicit ActivatedClientTypeEntry(::StringW typeName, ::StringW assemblyName, ::StringW appUrl) ;

/// @brief Method .ctor addr 0x2319b58 size 0x130 virtual false final false
 void _ctor(::StringW typeName, ::StringW assemblyName, ::StringW appUrl) ;

/// @brief Method get_ApplicationUrl addr 0x2319c90 size 0x8 virtual false final false
 ::StringW get_ApplicationUrl() ;

/// @brief Method get_ContextAttributes addr 0x2319c98 size 0x8 virtual false final false
 ::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute> get_ContextAttributes() ;

/// @brief Method get_ObjectType addr 0x2319ca0 size 0x8 virtual false final false
 ::System::Type get_ObjectType() ;

/// @brief Method ToString addr 0x2319ca8 size 0x14 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::ActivatedClientTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ActivatedClientTypeEntry, "System.Runtime.Remoting", "ActivatedClientTypeEntry");
