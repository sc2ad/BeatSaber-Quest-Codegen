#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class IPlatformUserModel;
}
// Type: ::IPlatformUserModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4695))
// CS Name: IPlatformUserModel
class CORDL_TYPE IPlatformUserModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPlatformUserModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPlatformUserModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_platformUserInfoDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo> value) ;

/// @brief Method remove_platformUserInfoDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo> value) ;

/// @brief Method GetUserInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo> GetUserInfo() ;

/// @brief Method GetUserFriendsUserIds addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> GetUserFriendsUserIds(bool cached) ;

/// @brief Method GetUserAuthToken addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData> GetUserAuthToken() ;

/// @brief Method GetUserNamesForUserIds addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW> userIds) ;

/// @brief Method RequestXPlatformAccessToken addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlatformUserModel, "", "IPlatformUserModel");
