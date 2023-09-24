#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNoLibCIPGlobalProperties;
}
// Type: System.Net.NetworkInformation::UnixNoLibCIPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8138))
// CS Name: System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties
class CORDL_TYPE UnixNoLibCIPGlobalProperties : public System::Net::NetworkInformation::UnixIPGlobalProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnixNoLibCIPGlobalProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixNoLibCIPGlobalProperties", modifiers: " const&", def_value: None }]
constexpr UnixNoLibCIPGlobalProperties(UnixNoLibCIPGlobalProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixNoLibCIPGlobalProperties", modifiers: "&&", def_value: None }]
constexpr UnixNoLibCIPGlobalProperties(UnixNoLibCIPGlobalProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnixNoLibCIPGlobalProperties(void* ptr) noexcept : System::Net::NetworkInformation::UnixIPGlobalProperties(ptr) {
}


  constexpr UnixNoLibCIPGlobalProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnixNoLibCIPGlobalProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnixNoLibCIPGlobalProperties& operator=(UnixNoLibCIPGlobalProperties&& o) noexcept = default;
  constexpr UnixNoLibCIPGlobalProperties& operator=(UnixNoLibCIPGlobalProperties const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_DomainName))  DomainName;


// Methods

/// @brief Method get_DomainName addr 0x285df18 size 0x48 virtual true final false
 ::StringW get_DomainName() ;

static System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties New_ctor() ;

/// @brief Method .ctor addr 0x285df60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties, "System.Net.NetworkInformation", "UnixNoLibCIPGlobalProperties");
