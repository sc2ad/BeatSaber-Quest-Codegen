#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
// Forward declare root types
namespace Oculus::Platform {
class MatchmakingOptions;
}
// Type: Oculus.Platform::MatchmakingOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13199))
// CS Name: Oculus.Platform.MatchmakingOptions
class CORDL_TYPE MatchmakingOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MatchmakingOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingOptions", modifiers: " const&", def_value: None }]
constexpr MatchmakingOptions(MatchmakingOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingOptions", modifiers: "&&", def_value: None }]
constexpr MatchmakingOptions(MatchmakingOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchmakingOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingOptions& operator=(MatchmakingOptions&& o) noexcept = default;
  constexpr MatchmakingOptions& operator=(MatchmakingOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit MatchmakingOptions() ;

/// @brief Method .ctor addr 0x257b150 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method SetCreateRoomDataStore addr 0x257b1b4 size 0x70 virtual false final false
 void SetCreateRoomDataStore(::StringW key, ::StringW value) ;

/// @brief Method ClearCreateRoomDataStore addr 0x257b224 size 0x58 virtual false final false
 void ClearCreateRoomDataStore() ;

/// @brief Method SetCreateRoomJoinPolicy addr 0x257b27c size 0x68 virtual false final false
 void SetCreateRoomJoinPolicy(Oculus::Platform::RoomJoinPolicy value) ;

/// @brief Method SetCreateRoomMaxUsers addr 0x257b2e4 size 0x68 virtual false final false
 void SetCreateRoomMaxUsers(uint32_t value) ;

/// @brief Method AddEnqueueAdditionalUser addr 0x257b34c size 0x68 virtual false final false
 void AddEnqueueAdditionalUser(uint64_t userID) ;

/// @brief Method ClearEnqueueAdditionalUsers addr 0x257b3b4 size 0x58 virtual false final false
 void ClearEnqueueAdditionalUsers() ;

/// @brief Method SetEnqueueDataSettings addr 0x257b40c size 0x70 virtual false final false
 void SetEnqueueDataSettings(::StringW key, int32_t value) ;

/// @brief Method SetEnqueueDataSettings addr 0x257b47c size 0x78 virtual false final false
 void SetEnqueueDataSettings(::StringW key, double_t value) ;

/// @brief Method SetEnqueueDataSettings addr 0x257b4f4 size 0x70 virtual false final false
 void SetEnqueueDataSettings(::StringW key, ::StringW value) ;

/// @brief Method ClearEnqueueDataSettings addr 0x257b564 size 0x58 virtual false final false
 void ClearEnqueueDataSettings() ;

/// @brief Method SetEnqueueIsDebug addr 0x257b5bc size 0x68 virtual false final false
 void SetEnqueueIsDebug(bool value) ;

/// @brief Method SetEnqueueQueryKey addr 0x257b624 size 0x68 virtual false final false
 void SetEnqueueQueryKey(::StringW value) ;

/// @brief Method op_Explicit addr 0x257b68c size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::MatchmakingOptions options) ;

/// @brief Method Finalize addr 0x257b6e4 size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MatchmakingOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MatchmakingOptions, "Oculus.Platform", "MatchmakingOptions");
