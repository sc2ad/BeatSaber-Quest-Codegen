#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct TimeWindow;
}
namespace Oculus::Platform {
struct UserOrdering;
}
// Forward declare root types
namespace Oculus::Platform {
class RoomOptions;
}
// Type: Oculus.Platform::RoomOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13354))
// CS Name: Oculus.Platform.RoomOptions
class CORDL_TYPE RoomOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RoomOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomOptions", modifiers: " const&", def_value: None }]
constexpr RoomOptions(RoomOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomOptions", modifiers: "&&", def_value: None }]
constexpr RoomOptions(RoomOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RoomOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RoomOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RoomOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RoomOptions& operator=(RoomOptions&& o) noexcept = default;
  constexpr RoomOptions& operator=(RoomOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

static Oculus::Platform::RoomOptions New_ctor() ;

/// @brief Method .ctor addr 0x2599884 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method SetDataStore addr 0x25998ec size 0x74 virtual false final false
 void SetDataStore(::StringW key, ::StringW value) ;

/// @brief Method ClearDataStore addr 0x2599960 size 0x5c virtual false final false
 void ClearDataStore() ;

/// @brief Method SetExcludeRecentlyMet addr 0x25999bc size 0x6c virtual false final false
 void SetExcludeRecentlyMet(bool value) ;

/// @brief Method SetMaxUserResults addr 0x2599a28 size 0x6c virtual false final false
 void SetMaxUserResults(uint32_t value) ;

/// @brief Method SetOrdering addr 0x2599a94 size 0x6c virtual false final false
 void SetOrdering(Oculus::Platform::UserOrdering value) ;

/// @brief Method SetRecentlyMetTimeWindow addr 0x2599b00 size 0x6c virtual false final false
 void SetRecentlyMetTimeWindow(Oculus::Platform::TimeWindow value) ;

/// @brief Method SetRoomId addr 0x2599b6c size 0x6c virtual false final false
 void SetRoomId(uint64_t value) ;

/// @brief Method SetTurnOffUpdates addr 0x2599bd8 size 0x6c virtual false final false
 void SetTurnOffUpdates(bool value) ;

/// @brief Method op_Explicit addr 0x2599c44 size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::RoomOptions options) ;

/// @brief Method Finalize addr 0x2599c9c size 0xd8 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::RoomOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RoomOptions, "Oculus.Platform", "RoomOptions");
