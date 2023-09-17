#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
// Forward declare root types
namespace Oculus::Platform {
class UserDataStore;
}
// Type: Oculus.Platform::UserDataStore
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13338))
// CS Name: Oculus.Platform.UserDataStore
class CORDL_TYPE UserDataStore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UserDataStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore", modifiers: " const&", def_value: None }]
constexpr UserDataStore(UserDataStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore", modifiers: "&&", def_value: None }]
constexpr UserDataStore(UserDataStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserDataStore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserDataStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserDataStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserDataStore& operator=(UserDataStore&& o) noexcept = default;
  constexpr UserDataStore& operator=(UserDataStore const& o) noexcept = default;
                


// Methods

/// @brief Method PrivateDeleteEntryByKey addr 0x2597248 size 0x174 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse> PrivateDeleteEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method PrivateGetEntries addr 0x25973bc size 0x164 virtual false final false
static ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>> PrivateGetEntries(uint64_t userID) ;

/// @brief Method PrivateGetEntryByKey addr 0x2597520 size 0x174 virtual false final false
static ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>> PrivateGetEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method PrivateWriteEntry addr 0x2597694 size 0x17c virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse> PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value) ;

/// @brief Method PublicDeleteEntryByKey addr 0x2597810 size 0x174 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse> PublicDeleteEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method PublicGetEntries addr 0x2597984 size 0x164 virtual false final false
static ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>> PublicGetEntries(uint64_t userID) ;

/// @brief Method PublicGetEntryByKey addr 0x2597ae8 size 0x174 virtual false final false
static ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>> PublicGetEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method PublicWriteEntry addr 0x2597c5c size 0x17c virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse> PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::UserDataStore);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserDataStore, "Oculus.Platform", "UserDataStore");
