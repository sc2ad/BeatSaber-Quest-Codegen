#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupLists;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
namespace GlobalNamespace {
class EnvironmentLightGroups;
}
namespace GlobalNamespace {
class BeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultEnvironmentEventsFactory;
}
// Type: ::DefaultEnvironmentEventsFactory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4320))
// CS Name: DefaultEnvironmentEventsFactory
class CORDL_TYPE DefaultEnvironmentEventsFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultEnvironmentEventsFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEventsFactory", modifiers: " const&", def_value: None }]
constexpr DefaultEnvironmentEventsFactory(DefaultEnvironmentEventsFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEventsFactory", modifiers: "&&", def_value: None }]
constexpr DefaultEnvironmentEventsFactory(DefaultEnvironmentEventsFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultEnvironmentEventsFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultEnvironmentEventsFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultEnvironmentEventsFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultEnvironmentEventsFactory& operator=(DefaultEnvironmentEventsFactory&& o) noexcept = default;
  constexpr DefaultEnvironmentEventsFactory& operator=(DefaultEnvironmentEventsFactory const& o) noexcept = default;
                


// Methods

/// @brief Method InsertDefaultEnvironmentEvents addr 0x21d96fc size 0x260 virtual false final false
static void InsertDefaultEnvironmentEvents(GlobalNamespace::BeatmapData beatmapData, GlobalNamespace::BeatmapEventDataBoxGroupLists beatmapEventDataBoxGroupLists, GlobalNamespace::DefaultEnvironmentEvents defaultEnvironmentEvents, GlobalNamespace::EnvironmentLightGroups environmentLightGroups) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DefaultEnvironmentEventsFactory);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DefaultEnvironmentEventsFactory, "", "DefaultEnvironmentEventsFactory");
