#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class User;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingEnqueuedUser;
}
// Type: Oculus.Platform.Models::MatchmakingEnqueuedUser
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13441))
// CS Name: Oculus.Platform.Models.MatchmakingEnqueuedUser
class CORDL_TYPE MatchmakingEnqueuedUser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MatchmakingEnqueuedUser() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueuedUser", modifiers: " const&", def_value: None }]
constexpr MatchmakingEnqueuedUser(MatchmakingEnqueuedUser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueuedUser", modifiers: "&&", def_value: None }]
constexpr MatchmakingEnqueuedUser(MatchmakingEnqueuedUser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingEnqueuedUser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchmakingEnqueuedUser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingEnqueuedUser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingEnqueuedUser& operator=(MatchmakingEnqueuedUser&& o) noexcept = default;
  constexpr MatchmakingEnqueuedUser& operator=(MatchmakingEnqueuedUser const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_CustomData, put=__set_CustomData))  CustomData;

constexpr void __set_CustomData(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_CustomData() const;

 Oculus::Platform::Models::User __declspec(property(get=__get_UserOptional, put=__set_UserOptional))  UserOptional;

constexpr void __set_UserOptional(Oculus::Platform::Models::User value) ;

constexpr Oculus::Platform::Models::User __get_UserOptional() const;

 Oculus::Platform::Models::User __declspec(property(get=__get_User, put=__set_User))  User;

constexpr void __set_User(Oculus::Platform::Models::User value) ;

constexpr Oculus::Platform::Models::User __get_User() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MatchmakingEnqueuedUser(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a0a44 size 0x108 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::MatchmakingEnqueuedUser);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingEnqueuedUser, "Oculus.Platform.Models", "MatchmakingEnqueuedUser");
