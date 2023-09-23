#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
// Type: Oculus.Platform.Models::RoomInviteNotification
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13470))
// CS Name: Oculus.Platform.Models.RoomInviteNotification
class CORDL_TYPE RoomInviteNotification : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RoomInviteNotification() = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomInviteNotification", modifiers: " const&", def_value: None }]
constexpr RoomInviteNotification(RoomInviteNotification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomInviteNotification", modifiers: "&&", def_value: None }]
constexpr RoomInviteNotification(RoomInviteNotification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RoomInviteNotification(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RoomInviteNotification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RoomInviteNotification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RoomInviteNotification& operator=(RoomInviteNotification&& o) noexcept = default;
  constexpr RoomInviteNotification& operator=(RoomInviteNotification const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 uint64_t __declspec(property(get=__get_RoomID, put=__set_RoomID))  RoomID;

constexpr void __set_RoomID(uint64_t value) ;

constexpr uint64_t __get_RoomID() const;

 uint64_t __declspec(property(get=__get_SenderID, put=__set_SenderID))  SenderID;

constexpr void __set_SenderID(uint64_t value) ;

constexpr uint64_t __get_SenderID() const;

 System::DateTime __declspec(property(get=__get_SentTime, put=__set_SentTime))  SentTime;

constexpr void __set_SentTime(System::DateTime value) ;

constexpr System::DateTime __get_SentTime() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit RoomInviteNotification(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a2ce8 size 0xa8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::RoomInviteNotification);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::RoomInviteNotification, "Oculus.Platform.Models", "RoomInviteNotification");
