#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__SelectSubMenuDestination__Destination;
}
namespace GlobalNamespace {
class SelectSubMenuDestination;
}
// Type: ::Destination
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4185))
// CS Name: SelectSubMenuDestination::Destination
struct CORDL_TYPE ____GlobalNamespace__SelectSubMenuDestination__Destination : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SelectSubMenuDestination__Destination(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__SelectSubMenuDestination__Destination(____GlobalNamespace__SelectSubMenuDestination__Destination const&) = default;
                    constexpr ____GlobalNamespace__SelectSubMenuDestination__Destination(____GlobalNamespace__SelectSubMenuDestination__Destination&&) = default;
                    constexpr ____GlobalNamespace__SelectSubMenuDestination__Destination& operator=(____GlobalNamespace__SelectSubMenuDestination__Destination const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SelectSubMenuDestination__Destination& operator=(____GlobalNamespace__SelectSubMenuDestination__Destination&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SelectSubMenuDestination__Destination(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__SelectSubMenuDestination__Destination_Unwrapped : int32_t {
__MainMenu = 0,
__Campaign = 1,
__SoloFreePlay = 2,
__PartyFreePlay = 3,
__Settings = 4,
__Tutorial = 5,
__Multiplayer = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__SelectSubMenuDestination__Destination_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__SelectSubMenuDestination__Destination_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MainMenu offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination const MainMenu;

/// @brief Field Campaign offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination const Campaign;

/// @brief Field SoloFreePlay offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination const SoloFreePlay;

/// @brief Field PartyFreePlay offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination const PartyFreePlay;

/// @brief Field Settings offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination const Settings;

/// @brief Field Tutorial offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination const Tutorial;

/// @brief Field Multiplayer offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination const Multiplayer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SelectSubMenuDestination
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4186))
// CS Name: SelectSubMenuDestination
class CORDL_TYPE SelectSubMenuDestination : public ::GlobalNamespace::MenuDestination {
public:
// Declarations
using Destination = ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SelectSubMenuDestination() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectSubMenuDestination", modifiers: " const&", def_value: None }]
constexpr SelectSubMenuDestination(SelectSubMenuDestination const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectSubMenuDestination", modifiers: "&&", def_value: None }]
constexpr SelectSubMenuDestination(SelectSubMenuDestination&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectSubMenuDestination(void* ptr) noexcept : ::GlobalNamespace::MenuDestination(ptr) {
}


  constexpr SelectSubMenuDestination& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectSubMenuDestination& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectSubMenuDestination& operator=(SelectSubMenuDestination&& o) noexcept = default;
  constexpr SelectSubMenuDestination& operator=(SelectSubMenuDestination const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination __declspec(property(get=__get_menuDestination, put=__set_menuDestination))  menuDestination;

constexpr void __set_menuDestination(::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination __get_menuDestination() const;


// Methods

// Ctor Parameters [CppParam { name: "menuDestination", ty: "::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination", modifiers: "", def_value: None }]
explicit SelectSubMenuDestination(::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination menuDestination) ;

/// @brief Method .ctor addr 0x21bc718 size 0x28 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination menuDestination) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SelectSubMenuDestination__Destination, "", "SelectSubMenuDestination/Destination");
NEED_NO_BOX(::GlobalNamespace::SelectSubMenuDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectSubMenuDestination, "", "SelectSubMenuDestination");
