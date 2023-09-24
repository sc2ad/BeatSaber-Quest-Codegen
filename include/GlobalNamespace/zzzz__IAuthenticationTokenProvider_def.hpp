#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
struct GlobalNamespace__AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
// Type: ::IAuthenticationTokenProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12717))
// CS Name: IAuthenticationTokenProvider
class CORDL_TYPE IAuthenticationTokenProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAuthenticationTokenProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAuthenticationTokenProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_hashedUserId))  hashedUserId;

 ::StringW __declspec(property(get=get_userName))  userName;

 GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform __declspec(property(get=get_platform))  platform;


// Methods

/// @brief Method GetAuthenticationToken addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> GetAuthenticationToken() ;

/// @brief Method GetTokenPlatform addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform GetTokenPlatform(GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) ;

/// @brief Method GetXPlatformAccessToken addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> GetXPlatformAccessToken(System::Threading::CancellationToken cancellationToken, bool skipCache) ;

/// @brief Method get_hashedUserId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_hashedUserId() ;

/// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userName() ;

/// @brief Method get_platform addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform get_platform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAuthenticationTokenProvider, "", "IAuthenticationTokenProvider");
