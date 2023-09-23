#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__AuthenticationToken__Platform;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkUtility;
}
// Type: ::NetworkUtility
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12842))
// CS Name: NetworkUtility
class CORDL_TYPE NetworkUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetworkUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkUtility", modifiers: " const&", def_value: None }]
constexpr NetworkUtility(NetworkUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkUtility", modifiers: "&&", def_value: None }]
constexpr NetworkUtility(NetworkUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetworkUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkUtility& operator=(NetworkUtility&& o) noexcept = default;
  constexpr NetworkUtility& operator=(NetworkUtility const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get__nameEncryptionKey, put=__set__nameEncryptionKey))  _nameEncryptionKey;

static void __set__nameEncryptionKey(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__nameEncryptionKey() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get__nameEncryptionIv, put=__set__nameEncryptionIv))  _nameEncryptionIv;

static void __set__nameEncryptionIv(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__nameEncryptionIv() ;


// Methods

/// @brief Method Init addr 0xdc012c size 0xe0 virtual false final false
static void Init() ;

/// @brief Method GetHashedUserId addr 0xdc020c size 0xcc virtual false final false
static ::StringW GetHashedUserId(::StringW userId, GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform) ;

/// @brief Method EncryptName addr 0xdc04e4 size 0x420 virtual false final false
static ::StringW EncryptName(::StringW text) ;

/// @brief Method DecryptName addr 0xdc0904 size 0x424 virtual false final false
static ::StringW DecryptName(::StringW text) ;

/// @brief Method GenerateId addr 0xdc0d28 size 0x98 virtual false final false
static ::StringW GenerateId() ;

/// @brief Method GetHashBase64 addr 0xdc02d8 size 0x20c virtual false final false
static ::StringW GetHashBase64(::StringW input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NetworkUtility);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkUtility, "", "NetworkUtility");
