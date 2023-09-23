#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
// Forward declare root types
namespace Oculus::Platform {
class NetSyncOptions;
}
// Type: Oculus.Platform::NetSyncOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13301))
// CS Name: Oculus.Platform.NetSyncOptions
class CORDL_TYPE NetSyncOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NetSyncOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncOptions", modifiers: " const&", def_value: None }]
constexpr NetSyncOptions(NetSyncOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncOptions", modifiers: "&&", def_value: None }]
constexpr NetSyncOptions(NetSyncOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSyncOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetSyncOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSyncOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSyncOptions& operator=(NetSyncOptions&& o) noexcept = default;
  constexpr NetSyncOptions& operator=(NetSyncOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit NetSyncOptions() ;

/// @brief Method .ctor addr 0x2584cb8 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method SetVoipGroup addr 0x2584d1c size 0x68 virtual false final false
 void SetVoipGroup(::StringW value) ;

/// @brief Method SetVoipStreamDefault addr 0x2584d84 size 0x68 virtual false final false
 void SetVoipStreamDefault(Oculus::Platform::NetSyncVoipStreamMode value) ;

/// @brief Method SetZoneId addr 0x2584dec size 0x68 virtual false final false
 void SetZoneId(::StringW value) ;

/// @brief Method op_Explicit addr 0x2584e54 size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::NetSyncOptions options) ;

/// @brief Method Finalize addr 0x2584eac size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::NetSyncOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSyncOptions, "Oculus.Platform", "NetSyncOptions");
