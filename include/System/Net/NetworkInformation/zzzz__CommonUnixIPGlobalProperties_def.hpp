#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation {
class CommonUnixIPGlobalProperties;
}
// Type: System.Net.NetworkInformation::CommonUnixIPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8136))
// CS Name: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
class CORDL_TYPE CommonUnixIPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CommonUnixIPGlobalProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonUnixIPGlobalProperties", modifiers: " const&", def_value: None }]
constexpr CommonUnixIPGlobalProperties(CommonUnixIPGlobalProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonUnixIPGlobalProperties", modifiers: "&&", def_value: None }]
constexpr CommonUnixIPGlobalProperties(CommonUnixIPGlobalProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommonUnixIPGlobalProperties(void* ptr) noexcept : ::System::Net::NetworkInformation::IPGlobalProperties(ptr) {
}


  constexpr CommonUnixIPGlobalProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommonUnixIPGlobalProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommonUnixIPGlobalProperties& operator=(CommonUnixIPGlobalProperties&& o) noexcept = default;
  constexpr CommonUnixIPGlobalProperties& operator=(CommonUnixIPGlobalProperties const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_DomainName))  DomainName;


// Methods

/// @brief Method getdomainname addr 0x285dd00 size 0x8c virtual false final false
static int32_t getdomainname(::ArrayW<uint8_t> name, int32_t len) ;

/// @brief Method get_DomainName addr 0x285dd8c size 0x17c virtual true final false
 ::StringW get_DomainName() ;

// Ctor Parameters []
explicit CommonUnixIPGlobalProperties() ;

/// @brief Method .ctor addr 0x285df08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties, "System.Net.NetworkInformation", "CommonUnixIPGlobalProperties");
