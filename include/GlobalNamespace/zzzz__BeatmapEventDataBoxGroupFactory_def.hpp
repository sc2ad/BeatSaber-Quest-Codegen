#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent;
}
namespace GlobalNamespace {
class GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupFactory;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0;
}
// Type: ::<>c__DisplayClass2_0
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4326))
// CS Name: BeatmapEventDataBoxGroupFactory::<>c__DisplayClass2_0
struct CORDL_TYPE GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "numberOfElements", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0(int32_t numberOfElements) noexcept;


                    constexpr GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0(GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0 const&) = default;
                    constexpr GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0(GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0&&) = default;
                    constexpr GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0& operator=(GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0& operator=(GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_numberOfElements, put=__set_numberOfElements))  numberOfElements;

constexpr void __set_numberOfElements(int32_t value) ;

constexpr int32_t __get_numberOfElements() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapEventDataBoxGroupFactory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4327))
// CS Name: BeatmapEventDataBoxGroupFactory
class CORDL_TYPE BeatmapEventDataBoxGroupFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass2_0 = GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapEventDataBoxGroupFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupFactory", modifiers: " const&", def_value: None }]
constexpr BeatmapEventDataBoxGroupFactory(BeatmapEventDataBoxGroupFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupFactory", modifiers: "&&", def_value: None }]
constexpr BeatmapEventDataBoxGroupFactory(BeatmapEventDataBoxGroupFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventDataBoxGroupFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEventDataBoxGroupFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroupFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroupFactory& operator=(BeatmapEventDataBoxGroupFactory&& o) noexcept = default;
  constexpr BeatmapEventDataBoxGroupFactory& operator=(BeatmapEventDataBoxGroupFactory const& o) noexcept = default;
                


// Methods

/// @brief Method CreateExtendColorBeatmapEventDataBoxGroup addr 0x21db6dc size 0x1f8 virtual false final false
static GlobalNamespace::BeatmapEventDataBoxGroup CreateExtendColorBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements) ;

/// @brief Method CreateExtendRotationBeatmapEventDataBoxGroup addr 0x21db9b4 size 0x30c virtual false final false
static GlobalNamespace::BeatmapEventDataBoxGroup CreateExtendRotationBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements) ;

/// @brief Method CreateSingleLightBeatmapEventDataBoxGroup addr 0x21d995c size 0x828 virtual false final false
static GlobalNamespace::BeatmapEventDataBoxGroup CreateSingleLightBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements, GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent lightGroupEvent) ;

/// @brief Method <CreateSingleLightBeatmapEventDataBoxGroup>g__CreateIndexFilter|2_0 addr 0x21dbcc0 size 0x150 virtual false final false
static GlobalNamespace::IndexFilter _CreateSingleLightBeatmapEventDataBoxGroup_g__CreateIndexFilter_2_0(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering filtering, ByRef<GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0> ) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEventDataBoxGroupFactory);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventDataBoxGroupFactory, "", "BeatmapEventDataBoxGroupFactory");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0, "", "BeatmapEventDataBoxGroupFactory/<>c__DisplayClass2_0");
