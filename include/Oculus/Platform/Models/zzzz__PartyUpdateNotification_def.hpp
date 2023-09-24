#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct PartyUpdateAction;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
// Type: Oculus.Platform.Models::PartyUpdateNotification
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13458))
// CS Name: Oculus.Platform.Models.PartyUpdateNotification
class CORDL_TYPE PartyUpdateNotification : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PartyUpdateNotification() = default;

// Ctor Parameters [CppParam { name: "", ty: "PartyUpdateNotification", modifiers: " const&", def_value: None }]
constexpr PartyUpdateNotification(PartyUpdateNotification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PartyUpdateNotification", modifiers: "&&", def_value: None }]
constexpr PartyUpdateNotification(PartyUpdateNotification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PartyUpdateNotification(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PartyUpdateNotification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PartyUpdateNotification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PartyUpdateNotification& operator=(PartyUpdateNotification&& o) noexcept = default;
  constexpr PartyUpdateNotification& operator=(PartyUpdateNotification const& o) noexcept = default;
                


// Fields

 Oculus::Platform::PartyUpdateAction __declspec(property(get=__get_Action, put=__set_Action))  Action;

constexpr void __set_Action(Oculus::Platform::PartyUpdateAction value) ;

constexpr Oculus::Platform::PartyUpdateAction __get_Action() const;

 uint64_t __declspec(property(get=__get_PartyId, put=__set_PartyId))  PartyId;

constexpr void __set_PartyId(uint64_t value) ;

constexpr uint64_t __get_PartyId() const;

 uint64_t __declspec(property(get=__get_SenderId, put=__set_SenderId))  SenderId;

constexpr void __set_SenderId(uint64_t value) ;

constexpr uint64_t __get_SenderId() const;

 ::StringW __declspec(property(get=__get_UpdateTimestamp, put=__set_UpdateTimestamp))  UpdateTimestamp;

constexpr void __set_UpdateTimestamp(::StringW value) ;

constexpr ::StringW __get_UpdateTimestamp() const;

 ::StringW __declspec(property(get=__get_UserAlias, put=__set_UserAlias))  UserAlias;

constexpr void __set_UserAlias(::StringW value) ;

constexpr ::StringW __get_UserAlias() const;

 uint64_t __declspec(property(get=__get_UserId, put=__set_UserId))  UserId;

constexpr void __set_UserId(uint64_t value) ;

constexpr uint64_t __get_UserId() const;

 ::StringW __declspec(property(get=__get_UserName, put=__set_UserName))  UserName;

constexpr void __set_UserName(::StringW value) ;

constexpr ::StringW __get_UserName() const;


// Methods

static Oculus::Platform::Models::PartyUpdateNotification New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a1f08 size 0xd8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::PartyUpdateNotification);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PartyUpdateNotification, "Oculus.Platform.Models", "PartyUpdateNotification");
