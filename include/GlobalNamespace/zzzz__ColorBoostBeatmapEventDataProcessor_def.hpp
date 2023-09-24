#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class ColorBoostBeatmapEventDataProcessor;
}
// Type: ::ColorBoostBeatmapEventDataProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14924)), TypeDefinitionIndex(TypeDefinitionIndex(14915)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14924), inst: 919 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14925))
// CS Name: ColorBoostBeatmapEventDataProcessor
class CORDL_TYPE ColorBoostBeatmapEventDataProcessor : public GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::ColorBoostBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ColorBoostBeatmapEventDataProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventDataProcessor", modifiers: " const&", def_value: None }]
constexpr ColorBoostBeatmapEventDataProcessor(ColorBoostBeatmapEventDataProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
constexpr ColorBoostBeatmapEventDataProcessor(ColorBoostBeatmapEventDataProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorBoostBeatmapEventDataProcessor(void* ptr) noexcept : GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::ColorBoostBeatmapEventData>(ptr) {
}


  constexpr ColorBoostBeatmapEventDataProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorBoostBeatmapEventDataProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorBoostBeatmapEventDataProcessor& operator=(ColorBoostBeatmapEventDataProcessor&& o) noexcept = default;
  constexpr ColorBoostBeatmapEventDataProcessor& operator=(ColorBoostBeatmapEventDataProcessor const& o) noexcept = default;
                


// Methods

static GlobalNamespace::ColorBoostBeatmapEventDataProcessor New_ctor() ;

/// @brief Method .ctor addr 0xd92e54 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorBoostBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorBoostBeatmapEventDataProcessor, "", "ColorBoostBeatmapEventDataProcessor");
