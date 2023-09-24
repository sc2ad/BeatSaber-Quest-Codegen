#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class Destination;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Leaderboard;
}
// Type: Oculus.Platform.Models::Leaderboard
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13427))
// CS Name: Oculus.Platform.Models.Leaderboard
class CORDL_TYPE Leaderboard : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Leaderboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboard", modifiers: " const&", def_value: None }]
constexpr Leaderboard(Leaderboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboard", modifiers: "&&", def_value: None }]
constexpr Leaderboard(Leaderboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Leaderboard(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Leaderboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Leaderboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Leaderboard& operator=(Leaderboard&& o) noexcept = default;
  constexpr Leaderboard& operator=(Leaderboard const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_ApiName, put=__set_ApiName))  ApiName;

constexpr void __set_ApiName(::StringW value) ;

constexpr ::StringW __get_ApiName() const;

 Oculus::Platform::Models::Destination __declspec(property(get=__get_DestinationOptional, put=__set_DestinationOptional))  DestinationOptional;

constexpr void __set_DestinationOptional(Oculus::Platform::Models::Destination value) ;

constexpr Oculus::Platform::Models::Destination __get_DestinationOptional() const;

 Oculus::Platform::Models::Destination __declspec(property(get=__get_Destination, put=__set_Destination))  Destination;

constexpr void __set_Destination(Oculus::Platform::Models::Destination value) ;

constexpr Oculus::Platform::Models::Destination __get_Destination() const;

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;


// Methods

static Oculus::Platform::Models::Leaderboard New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259dc20 size 0x128 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::Leaderboard);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Leaderboard, "Oculus.Platform.Models", "Leaderboard");
