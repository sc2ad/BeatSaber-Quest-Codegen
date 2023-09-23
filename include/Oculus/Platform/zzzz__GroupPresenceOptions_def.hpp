#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
class GroupPresenceOptions;
}
// Type: Oculus.Platform::GroupPresenceOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13183))
// CS Name: Oculus.Platform.GroupPresenceOptions
class CORDL_TYPE GroupPresenceOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GroupPresenceOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceOptions", modifiers: " const&", def_value: None }]
constexpr GroupPresenceOptions(GroupPresenceOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceOptions", modifiers: "&&", def_value: None }]
constexpr GroupPresenceOptions(GroupPresenceOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupPresenceOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GroupPresenceOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupPresenceOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupPresenceOptions& operator=(GroupPresenceOptions&& o) noexcept = default;
  constexpr GroupPresenceOptions& operator=(GroupPresenceOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit GroupPresenceOptions() ;

/// @brief Method .ctor addr 0x257ab68 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method SetDeeplinkMessageOverride addr 0x257abcc size 0x68 virtual false final false
 void SetDeeplinkMessageOverride(::StringW value) ;

/// @brief Method SetDestinationApiName addr 0x257ac34 size 0x68 virtual false final false
 void SetDestinationApiName(::StringW value) ;

/// @brief Method SetIsJoinable addr 0x257ac9c size 0x68 virtual false final false
 void SetIsJoinable(bool value) ;

/// @brief Method SetLobbySessionId addr 0x257ad04 size 0x68 virtual false final false
 void SetLobbySessionId(::StringW value) ;

/// @brief Method SetMatchSessionId addr 0x257ad6c size 0x68 virtual false final false
 void SetMatchSessionId(::StringW value) ;

/// @brief Method op_Explicit addr 0x257add4 size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::GroupPresenceOptions options) ;

/// @brief Method Finalize addr 0x257ae2c size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::GroupPresenceOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::GroupPresenceOptions, "Oculus.Platform", "GroupPresenceOptions");
