#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
namespace {
namespace GlobalNamespace {
class INetworkPlayerModel;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamNetworkPlayerModel;
}
// Type: ::SteamNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4597))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4603))
// CS Name: SteamNetworkPlayerModel
class CORDL_TYPE SteamNetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayerModel
constexpr operator  ::GlobalNamespace::INetworkPlayerModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SteamNetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworkPlayerModel", modifiers: " const&", def_value: None }]
constexpr SteamNetworkPlayerModel(SteamNetworkPlayerModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworkPlayerModel", modifiers: "&&", def_value: None }]
constexpr SteamNetworkPlayerModel(SteamNetworkPlayerModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SteamNetworkPlayerModel(void* ptr) noexcept : ::GlobalNamespace::PlatformNetworkPlayerModel(ptr) {
}


  constexpr SteamNetworkPlayerModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SteamNetworkPlayerModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SteamNetworkPlayerModel& operator=(SteamNetworkPlayerModel&& o) noexcept = default;
  constexpr SteamNetworkPlayerModel& operator=(SteamNetworkPlayerModel const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SteamNetworkPlayerModel() ;

/// @brief Method .ctor addr 0x22126dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SteamNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamNetworkPlayerModel, "", "SteamNetworkPlayerModel");
