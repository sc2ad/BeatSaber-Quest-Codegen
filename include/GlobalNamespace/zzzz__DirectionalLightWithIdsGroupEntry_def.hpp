#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class DirectionalLightWithIds;
}
namespace GlobalNamespace {
class LightGroupSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting;
}
namespace GlobalNamespace {
class DirectionalLightWithIdsGroupEntry;
}
namespace GlobalNamespace {
class GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData;
}
namespace GlobalNamespace {
class GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId;
}
// Type: ::GroupLightsWeighting
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14683))
// CS Name: DirectionalLightWithIdsGroupEntry::GroupLightsWeighting
struct CORDL_TYPE GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting(int32_t value__) noexcept;


                    constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting(GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting const&) = default;
                    constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting(GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting&&) = default;
                    constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting& operator=(GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting& operator=(GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped : int32_t {
__Maximum = 0,
__LinearFraction = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Maximum offset 0
static GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting const Maximum;

/// @brief Field LinearFraction offset 0
static GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting const LinearFraction;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GroupLightData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14684))
// CS Name: DirectionalLightWithIdsGroupEntry::GroupLightData
class CORDL_TYPE GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData(GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData(GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData& operator=(GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData&& o) noexcept = default;
  constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData& operator=(GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LightGroupSO __declspec(property(get=__get__lightGroup, put=__set__lightGroup))  _lightGroup;

constexpr void __set__lightGroup(GlobalNamespace::LightGroupSO value) ;

constexpr GlobalNamespace::LightGroupSO __get__lightGroup() const;

 float_t __declspec(property(get=__get__groupIntensity, put=__set__groupIntensity))  _groupIntensity;

constexpr void __set__groupIntensity(float_t value) ;

constexpr float_t __get__groupIntensity() const;


// Properties

 GlobalNamespace::LightGroupSO __declspec(property(get=get_lightGroup))  lightGroup;

 float_t __declspec(property(get=get_groupIntensity))  groupIntensity;


// Methods

/// @brief Method get_lightGroup addr 0x1f9cc48 size 0x8 virtual false final false
 GlobalNamespace::LightGroupSO get_lightGroup() ;

/// @brief Method get_groupIntensity addr 0x1f9cc50 size 0x8 virtual false final false
 float_t get_groupIntensity() ;

// Ctor Parameters []
explicit GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData() ;

/// @brief Method .ctor addr 0x1f9cc58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14685))
// CS Name: DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId
class CORDL_TYPE GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId(GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId(GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId& operator=(GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId&& o) noexcept = default;
  constexpr GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId& operator=(GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__lightId, put=__set__lightId))  _lightId;

constexpr void __set__lightId(int32_t value) ;

constexpr int32_t __get__lightId() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;


// Properties

 int32_t __declspec(property(get=get_lightId))  lightId;

 float_t __declspec(property(get=get_intensity))  intensity;


// Methods

/// @brief Method get_lightId addr 0x1f9cc60 size 0x8 virtual false final false
 int32_t get_lightId() ;

/// @brief Method get_intensity addr 0x1f9cc68 size 0x8 virtual false final false
 float_t get_intensity() ;

// Ctor Parameters [CppParam { name: "lightId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lightIntensity", ty: "float_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId(int32_t lightId, float_t lightIntensity) ;

/// @brief Method .ctor addr 0x1f9cc70 size 0x38 virtual false final false
 void _ctor(int32_t lightId, float_t lightIntensity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DirectionalLightWithIdsGroupEntry
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14686))
// CS Name: DirectionalLightWithIdsGroupEntry
class CORDL_TYPE DirectionalLightWithIdsGroupEntry : public UnityEngine::MonoBehaviour {
public:
// Declarations
using LightIntensitiesWithId = GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId;

using GroupLightData = GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData;

using GroupLightsWeighting = GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DirectionalLightWithIdsGroupEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIdsGroupEntry", modifiers: " const&", def_value: None }]
constexpr DirectionalLightWithIdsGroupEntry(DirectionalLightWithIdsGroupEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIdsGroupEntry", modifiers: "&&", def_value: None }]
constexpr DirectionalLightWithIdsGroupEntry(DirectionalLightWithIdsGroupEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DirectionalLightWithIdsGroupEntry(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DirectionalLightWithIdsGroupEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DirectionalLightWithIdsGroupEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DirectionalLightWithIdsGroupEntry& operator=(DirectionalLightWithIdsGroupEntry&& o) noexcept = default;
  constexpr DirectionalLightWithIdsGroupEntry& operator=(DirectionalLightWithIdsGroupEntry const& o) noexcept = default;
                


// Fields

 GlobalNamespace::DirectionalLightWithIds __declspec(property(get=__get__directionalLightWithIds, put=__set__directionalLightWithIds))  _directionalLightWithIds;

constexpr void __set__directionalLightWithIds(GlobalNamespace::DirectionalLightWithIds value) ;

constexpr GlobalNamespace::DirectionalLightWithIds __get__directionalLightWithIds() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData> __declspec(property(get=__get__groupLightData, put=__set__groupLightData))  _groupLightData;

constexpr void __set__groupLightData(::ArrayW<GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData> __get__groupLightData() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId> __declspec(property(get=__get__individualLightData, put=__set__individualLightData))  _individualLightData;

constexpr void __set__individualLightData(::ArrayW<GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId> __get__individualLightData() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__excludedLightIds, put=__set__excludedLightIds))  _excludedLightIds;

constexpr void __set__excludedLightIds(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__excludedLightIds() const;

 GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting __declspec(property(get=__get__groupLightsWeighting, put=__set__groupLightsWeighting))  _groupLightsWeighting;

constexpr void __set__groupLightsWeighting(GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting value) ;

constexpr GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting __get__groupLightsWeighting() const;


// Methods

// Ctor Parameters []
explicit DirectionalLightWithIdsGroupEntry() ;

/// @brief Method .ctor addr 0x1f9cc40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting, "", "DirectionalLightWithIdsGroupEntry/GroupLightsWeighting");
NEED_NO_BOX(GlobalNamespace::DirectionalLightWithIdsGroupEntry);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalLightWithIdsGroupEntry, "", "DirectionalLightWithIdsGroupEntry");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData, "", "DirectionalLightWithIdsGroupEntry/GroupLightData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId, "", "DirectionalLightWithIdsGroupEntry/LightIntensitiesWithId");
