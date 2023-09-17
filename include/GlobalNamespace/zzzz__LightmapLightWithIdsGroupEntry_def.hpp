#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class LightmapLightWithIds;
}
namespace GlobalNamespace {
class LightGroupSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting;
}
namespace GlobalNamespace {
class LightmapLightWithIdsGroupEntry;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId;
}
// Type: ::GroupLightsWeighting
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14698))
// CS Name: LightmapLightWithIdsGroupEntry::GroupLightsWeighting
struct CORDL_TYPE ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting(____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting const&) = default;
                    constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting(____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting&&) = default;
                    constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting& operator=(____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting& operator=(____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped : int32_t {
__Maximum = 0,
__LinearFraction = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Maximum offset 0
static ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting const Maximum;

/// @brief Field LinearFraction offset 0
static ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting const LinearFraction;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GroupLightData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14699))
// CS Name: LightmapLightWithIdsGroupEntry::GroupLightData
class CORDL_TYPE ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData(____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData(____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData& operator=(____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData&& o) noexcept = default;
  constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData& operator=(____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LightGroupSO __declspec(property(get=__get__lightGroup, put=__set__lightGroup))  _lightGroup;

constexpr void __set__lightGroup(::GlobalNamespace::LightGroupSO value) ;

constexpr ::GlobalNamespace::LightGroupSO __get__lightGroup() const;

 float_t __declspec(property(get=__get__groupIntensity, put=__set__groupIntensity))  _groupIntensity;

constexpr void __set__groupIntensity(float_t value) ;

constexpr float_t __get__groupIntensity() const;

 float_t __declspec(property(get=__get__groupProbeHighlightsIntensityMultiplier, put=__set__groupProbeHighlightsIntensityMultiplier))  _groupProbeHighlightsIntensityMultiplier;

constexpr void __set__groupProbeHighlightsIntensityMultiplier(float_t value) ;

constexpr float_t __get__groupProbeHighlightsIntensityMultiplier() const;


// Properties

 ::GlobalNamespace::LightGroupSO __declspec(property(get=get_lightGroup))  lightGroup;

 float_t __declspec(property(get=get_groupIntensity))  groupIntensity;

 float_t __declspec(property(get=get_groupProbeHighlightsIntensityMultiplier))  groupProbeHighlightsIntensityMultiplier;


// Methods

/// @brief Method get_lightGroup addr 0x1f9d858 size 0x8 virtual false final false
 ::GlobalNamespace::LightGroupSO get_lightGroup() ;

/// @brief Method get_groupIntensity addr 0x1f9d860 size 0x8 virtual false final false
 float_t get_groupIntensity() ;

/// @brief Method get_groupProbeHighlightsIntensityMultiplier addr 0x1f9d868 size 0x8 virtual false final false
 float_t get_groupProbeHighlightsIntensityMultiplier() ;

// Ctor Parameters [CppParam { name: "lightGroup", ty: "::GlobalNamespace::LightGroupSO", modifiers: "", def_value: None }, CppParam { name: "groupIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupProbeHighlightsIntensityMultiplier", ty: "float_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData(::GlobalNamespace::LightGroupSO lightGroup, float_t groupIntensity, float_t groupProbeHighlightsIntensityMultiplier) ;

/// @brief Method .ctor addr 0x1f9d870 size 0x3c virtual false final false
 void _ctor(::GlobalNamespace::LightGroupSO lightGroup, float_t groupIntensity, float_t groupProbeHighlightsIntensityMultiplier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14700))
// CS Name: LightmapLightWithIdsGroupEntry::LightIntensitiesWithId
class CORDL_TYPE ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId(____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId(____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId& operator=(____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId&& o) noexcept = default;
  constexpr ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId& operator=(____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__lightId, put=__set__lightId))  _lightId;

constexpr void __set__lightId(int32_t value) ;

constexpr int32_t __get__lightId() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__probeHighlightsIntensityMultiplier, put=__set__probeHighlightsIntensityMultiplier))  _probeHighlightsIntensityMultiplier;

constexpr void __set__probeHighlightsIntensityMultiplier(float_t value) ;

constexpr float_t __get__probeHighlightsIntensityMultiplier() const;


// Properties

 int32_t __declspec(property(get=get_lightId))  lightId;

 float_t __declspec(property(get=get_intensity))  intensity;

 float_t __declspec(property(get=get_probeHighlightsIntensityMultiplier))  probeHighlightsIntensityMultiplier;


// Methods

/// @brief Method get_lightId addr 0x1f9d8ac size 0x8 virtual false final false
 int32_t get_lightId() ;

/// @brief Method get_intensity addr 0x1f9d8b4 size 0x8 virtual false final false
 float_t get_intensity() ;

/// @brief Method get_probeHighlightsIntensityMultiplier addr 0x1f9d8bc size 0x8 virtual false final false
 float_t get_probeHighlightsIntensityMultiplier() ;

// Ctor Parameters [CppParam { name: "lightId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "intensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "probeHighlightsIntensityMultiplier", ty: "float_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier) ;

/// @brief Method .ctor addr 0x1f9d8c4 size 0x44 virtual false final false
 void _ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightmapLightWithIdsGroupEntry
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14701))
// CS Name: LightmapLightWithIdsGroupEntry
class CORDL_TYPE LightmapLightWithIdsGroupEntry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LightIntensitiesWithId = ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId;

using GroupLightData = ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData;

using GroupLightsWeighting = ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LightmapLightWithIdsGroupEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry", modifiers: " const&", def_value: None }]
constexpr LightmapLightWithIdsGroupEntry(LightmapLightWithIdsGroupEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry", modifiers: "&&", def_value: None }]
constexpr LightmapLightWithIdsGroupEntry(LightmapLightWithIdsGroupEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightmapLightWithIdsGroupEntry(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightmapLightWithIdsGroupEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightmapLightWithIdsGroupEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightmapLightWithIdsGroupEntry& operator=(LightmapLightWithIdsGroupEntry&& o) noexcept = default;
  constexpr LightmapLightWithIdsGroupEntry& operator=(LightmapLightWithIdsGroupEntry const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LightmapLightWithIds __declspec(property(get=__get__lightmapLightWithIds, put=__set__lightmapLightWithIds))  _lightmapLightWithIds;

constexpr void __set__lightmapLightWithIds(::GlobalNamespace::LightmapLightWithIds value) ;

constexpr ::GlobalNamespace::LightmapLightWithIds __get__lightmapLightWithIds() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData> __declspec(property(get=__get__groupLightData, put=__set__groupLightData))  _groupLightData;

constexpr void __set__groupLightData(::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData> __get__groupLightData() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId> __declspec(property(get=__get__individualLightData, put=__set__individualLightData))  _individualLightData;

constexpr void __set__individualLightData(::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId> __get__individualLightData() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__excludedLightIds, put=__set__excludedLightIds))  _excludedLightIds;

constexpr void __set__excludedLightIds(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__excludedLightIds() const;

 ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting __declspec(property(get=__get__groupLightsWeighting, put=__set__groupLightsWeighting))  _groupLightsWeighting;

constexpr void __set__groupLightsWeighting(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting __get__groupLightsWeighting() const;


// Properties

 ::GlobalNamespace::LightmapLightWithIds __declspec(property(get=get_lightmapLightWithIds))  lightmapLightWithIds;


// Methods

/// @brief Method get_lightmapLightWithIds addr 0x1f9d848 size 0x8 virtual false final false
 ::GlobalNamespace::LightmapLightWithIds get_lightmapLightWithIds() ;

// Ctor Parameters []
explicit LightmapLightWithIdsGroupEntry() ;

/// @brief Method .ctor addr 0x1f9d850 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting, "", "LightmapLightWithIdsGroupEntry/GroupLightsWeighting");
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIdsGroupEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIdsGroupEntry, "", "LightmapLightWithIdsGroupEntry");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData, "", "LightmapLightWithIdsGroupEntry/GroupLightData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId, "", "LightmapLightWithIdsGroupEntry/LightIntensitiesWithId");
