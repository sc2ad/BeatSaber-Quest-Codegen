#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Remoting {
class IRemotingTypeInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class TypeInfo;
}
// Type: System.Runtime.Remoting::TypeInfo
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3076))
// CS Name: System.Runtime.Remoting.TypeInfo
class CORDL_TYPE TypeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::IRemotingTypeInfo
constexpr operator  ::System::Runtime::Remoting::IRemotingTypeInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TypeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: " const&", def_value: None }]
constexpr TypeInfo(TypeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "&&", def_value: None }]
constexpr TypeInfo(TypeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeInfo& operator=(TypeInfo&& o) noexcept = default;
  constexpr TypeInfo& operator=(TypeInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_serverType, put=__set_serverType))  serverType;

constexpr void __set_serverType(::StringW value) ;

constexpr ::StringW __get_serverType() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_serverHierarchy, put=__set_serverHierarchy))  serverHierarchy;

constexpr void __set_serverHierarchy(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_serverHierarchy() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_interfacesImplemented, put=__set_interfacesImplemented))  interfacesImplemented;

constexpr void __set_interfacesImplemented(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_interfacesImplemented() const;


// Properties

 ::StringW __declspec(property(get=get_TypeName))  TypeName;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
explicit TypeInfo(::System::Type type) ;

/// @brief Method .ctor addr 0x2326afc size 0x410 virtual false final false
 void _ctor(::System::Type type) ;

/// @brief Method get_TypeName addr 0x2329418 size 0x8 virtual true final true
 ::StringW get_TypeName() ;

/// @brief Method CanCastTo addr 0x2329420 size 0x26c virtual true final true
 bool CanCastTo(::System::Type fromType, ::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::TypeInfo, "System.Runtime.Remoting", "TypeInfo");
