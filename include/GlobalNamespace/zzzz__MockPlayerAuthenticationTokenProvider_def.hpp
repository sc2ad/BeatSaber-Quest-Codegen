#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerAuthenticationTokenProvider;
}
// Type: ::MockPlayerAuthenticationTokenProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15489))
// CS Name: MockPlayerAuthenticationTokenProvider
class CORDL_TYPE MockPlayerAuthenticationTokenProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IAuthenticationTokenProvider
constexpr operator  ::GlobalNamespace::IAuthenticationTokenProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MockPlayerAuthenticationTokenProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerAuthenticationTokenProvider", modifiers: " const&", def_value: None }]
constexpr MockPlayerAuthenticationTokenProvider(MockPlayerAuthenticationTokenProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
constexpr MockPlayerAuthenticationTokenProvider(MockPlayerAuthenticationTokenProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerAuthenticationTokenProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockPlayerAuthenticationTokenProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerAuthenticationTokenProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerAuthenticationTokenProvider& operator=(MockPlayerAuthenticationTokenProvider&& o) noexcept = default;
  constexpr MockPlayerAuthenticationTokenProvider& operator=(MockPlayerAuthenticationTokenProvider const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__password, put=__set__password))  _password;

constexpr void __set__password(::StringW value) ;

constexpr ::StringW __get__password() const;

 ::StringW __declspec(property(get=__get__hashedUserId_k__BackingField, put=__set__hashedUserId_k__BackingField))  _hashedUserId_k__BackingField;

constexpr void __set__hashedUserId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__hashedUserId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__userName_k__BackingField, put=__set__userName_k__BackingField))  _userName_k__BackingField;

constexpr void __set__userName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__userName_k__BackingField() const;

 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform __declspec(property(get=__get__platform_k__BackingField, put=__set__platform_k__BackingField))  _platform_k__BackingField;

constexpr void __set__platform_k__BackingField(::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform __get__platform_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_hashedUserId))  hashedUserId;

 ::StringW __declspec(property(get=get_userName))  userName;

 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform __declspec(property(get=get_platform))  platform;


// Methods

/// @brief Method get_hashedUserId addr 0x227976c size 0x8 virtual true final true
 ::StringW get_hashedUserId() ;

/// @brief Method get_userName addr 0x2279774 size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_platform addr 0x227977c size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform get_platform() ;

// Ctor Parameters [CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }]
explicit MockPlayerAuthenticationTokenProvider(::StringW userId, ::StringW userName, ::StringW password) ;

/// @brief Method .ctor addr 0x2279784 size 0x98 virtual false final false
 void _ctor(::StringW userId, ::StringW userName, ::StringW password) ;

/// @brief Method GetAuthenticationToken addr 0x227981c size 0xa0 virtual true final true
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> GetAuthenticationToken() ;

/// @brief Method GetTokenPlatform addr 0x22798bc size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) ;

/// @brief Method GetXPlatformAccessToken addr 0x22798c4 size 0xb4 virtual true final true
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, "", "MockPlayerAuthenticationTokenProvider");
