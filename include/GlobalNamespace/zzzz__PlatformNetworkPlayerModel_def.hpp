#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig;
}
// Type: ::CreatePartyConfig
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4532))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4596))
// CS Name: PlatformNetworkPlayerModel::CreatePartyConfig
class CORDL_TYPE ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig : public ::GlobalNamespace::____GlobalNamespace__BaseNetworkPlayerModel__PartyConfig {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel>
constexpr operator  ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig(____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig(____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BaseNetworkPlayerModel__PartyConfig(ptr) {
}


  constexpr ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig& operator=(____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig&& o) noexcept = default;
  constexpr ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig& operator=(____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig() ;

/// @brief Method .ctor addr 0x2211768 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlatformNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4535))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4597))
// CS Name: PlatformNetworkPlayerModel
class CORDL_TYPE PlatformNetworkPlayerModel : public ::GlobalNamespace::BaseNetworkPlayerModel {
public:
// Declarations
using CreatePartyConfig = ::GlobalNamespace::____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PlatformNetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformNetworkPlayerModel", modifiers: " const&", def_value: None }]
constexpr PlatformNetworkPlayerModel(PlatformNetworkPlayerModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformNetworkPlayerModel", modifiers: "&&", def_value: None }]
constexpr PlatformNetworkPlayerModel(PlatformNetworkPlayerModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformNetworkPlayerModel(void* ptr) noexcept : ::GlobalNamespace::BaseNetworkPlayerModel(ptr) {
}


  constexpr PlatformNetworkPlayerModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformNetworkPlayerModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformNetworkPlayerModel& operator=(PlatformNetworkPlayerModel&& o) noexcept = default;
  constexpr PlatformNetworkPlayerModel& operator=(PlatformNetworkPlayerModel const& o) noexcept = default;
                


// Properties

 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> __declspec(property(get=get_friends))  friends;


// Methods

/// @brief Method get_friends addr 0x2211758 size 0x10 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> get_friends() ;

/// @brief Method DestroyPartyConnection addr 0x220df60 size 0x20 virtual true final false
 void DestroyPartyConnection() ;

// Ctor Parameters []
explicit PlatformNetworkPlayerModel() ;

/// @brief Method .ctor addr 0x220e530 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlatformNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformNetworkPlayerModel, "", "PlatformNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PlatformNetworkPlayerModel__CreatePartyConfig, "", "PlatformNetworkPlayerModel/CreatePartyConfig");
