#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__AppInitSetupData__RunMode;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
// Type: ::RunMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4014))
// CS Name: AppInitSetupData::RunMode
struct CORDL_TYPE ____GlobalNamespace__AppInitSetupData__RunMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AppInitSetupData__RunMode(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__AppInitSetupData__RunMode(____GlobalNamespace__AppInitSetupData__RunMode const&) = default;
                    constexpr ____GlobalNamespace__AppInitSetupData__RunMode(____GlobalNamespace__AppInitSetupData__RunMode&&) = default;
                    constexpr ____GlobalNamespace__AppInitSetupData__RunMode& operator=(____GlobalNamespace__AppInitSetupData__RunMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AppInitSetupData__RunMode& operator=(____GlobalNamespace__AppInitSetupData__RunMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AppInitSetupData__RunMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__AppInitSetupData__RunMode_Unwrapped : int32_t {
__Game = 0,
__PlayTest = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__AppInitSetupData__RunMode_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__AppInitSetupData__RunMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Game offset 0
static ::GlobalNamespace::____GlobalNamespace__AppInitSetupData__RunMode const Game;

/// @brief Field PlayTest offset 0
static ::GlobalNamespace::____GlobalNamespace__AppInitSetupData__RunMode const PlayTest;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AppInitSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4015))
// CS Name: AppInitSetupData
class CORDL_TYPE AppInitSetupData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RunMode = ::GlobalNamespace::____GlobalNamespace__AppInitSetupData__RunMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AppInitSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInitSetupData", modifiers: " const&", def_value: None }]
constexpr AppInitSetupData(AppInitSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInitSetupData", modifiers: "&&", def_value: None }]
constexpr AppInitSetupData(AppInitSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppInitSetupData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AppInitSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppInitSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppInitSetupData& operator=(AppInitSetupData&& o) noexcept = default;
  constexpr AppInitSetupData& operator=(AppInitSetupData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__AppInitSetupData__RunMode __declspec(property(get=__get_runMode, put=__set_runMode))  runMode;

constexpr void __set_runMode(::GlobalNamespace::____GlobalNamespace__AppInitSetupData__RunMode value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__AppInitSetupData__RunMode __get_runMode() const;


// Methods

// Ctor Parameters []
explicit AppInitSetupData() ;

/// @brief Method .ctor addr 0x20b46cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AppInitSetupData__RunMode, "", "AppInitSetupData/RunMode");
NEED_NO_BOX(::GlobalNamespace::AppInitSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitSetupData, "", "AppInitSetupData");
