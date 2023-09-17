#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class AccessToken;
}
// Type: BeatSaberAPI.DataTransferObjects::AccessToken
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6186))
// CS Name: BeatSaberAPI.DataTransferObjects.AccessToken
class CORDL_TYPE AccessToken : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AccessToken() = default;

// Ctor Parameters [CppParam { name: "", ty: "AccessToken", modifiers: " const&", def_value: None }]
constexpr AccessToken(AccessToken const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AccessToken", modifiers: "&&", def_value: None }]
constexpr AccessToken(AccessToken&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AccessToken(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AccessToken& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AccessToken& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AccessToken& operator=(AccessToken&& o) noexcept = default;
  constexpr AccessToken& operator=(AccessToken const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(::StringW value) ;

constexpr ::StringW __get_token() const;

 ::StringW __declspec(property(get=__get_expiration, put=__set_expiration))  expiration;

constexpr void __set_expiration(::StringW value) ;

constexpr ::StringW __get_expiration() const;


// Methods

// Ctor Parameters []
explicit AccessToken() ;

/// @brief Method .ctor addr 0x21d7384 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
} // end anonymous namespace
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::AccessToken);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::AccessToken, "BeatSaberAPI.DataTransferObjects", "AccessToken");
