#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPGlobalProperties;
}
// Type: System.Net.NetworkInformation::IPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8100))
// CS Name: System.Net.NetworkInformation.IPGlobalProperties
class CORDL_TYPE IPGlobalProperties : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IPGlobalProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPGlobalProperties", modifiers: " const&", def_value: None }]
constexpr IPGlobalProperties(IPGlobalProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPGlobalProperties", modifiers: "&&", def_value: None }]
constexpr IPGlobalProperties(IPGlobalProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPGlobalProperties(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPGlobalProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPGlobalProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPGlobalProperties& operator=(IPGlobalProperties&& o) noexcept = default;
  constexpr IPGlobalProperties& operator=(IPGlobalProperties const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_DomainName))  DomainName;


// Methods

/// @brief Method GetIPGlobalProperties addr 0x2858fcc size 0x4 virtual false final false
static System::Net::NetworkInformation::IPGlobalProperties GetIPGlobalProperties() ;

/// @brief Method InternalGetIPGlobalProperties addr 0x2859020 size 0x4 virtual false final false
static System::Net::NetworkInformation::IPGlobalProperties InternalGetIPGlobalProperties() ;

/// @brief Method get_DomainName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DomainName() ;

// Ctor Parameters []
explicit IPGlobalProperties() ;

/// @brief Method .ctor addr 0x2859024 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::IPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::IPGlobalProperties, "System.Net.NetworkInformation", "IPGlobalProperties");
