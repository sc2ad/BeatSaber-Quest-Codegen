#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
class IndexFilter;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
// Type: ::DistributionParamType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4322))
// CS Name: BeatmapEventDataBox::DistributionParamType
struct CORDL_TYPE GlobalNamespace__BeatmapEventDataBox__DistributionParamType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapEventDataBox__DistributionParamType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__BeatmapEventDataBox__DistributionParamType(GlobalNamespace__BeatmapEventDataBox__DistributionParamType const&) = default;
                    constexpr GlobalNamespace__BeatmapEventDataBox__DistributionParamType(GlobalNamespace__BeatmapEventDataBox__DistributionParamType&&) = default;
                    constexpr GlobalNamespace__BeatmapEventDataBox__DistributionParamType& operator=(GlobalNamespace__BeatmapEventDataBox__DistributionParamType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapEventDataBox__DistributionParamType& operator=(GlobalNamespace__BeatmapEventDataBox__DistributionParamType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapEventDataBox__DistributionParamType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__BeatmapEventDataBox__DistributionParamType_Unwrapped : int32_t {
__Wave = 1,
__Step = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__BeatmapEventDataBox__DistributionParamType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__BeatmapEventDataBox__DistributionParamType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Wave offset 0
static GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType const Wave;

/// @brief Field Step offset 0
static GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType const Step;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapEventDataBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4323))
// CS Name: BeatmapEventDataBox
class CORDL_TYPE BeatmapEventDataBox : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DistributionParamType = GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapEventDataBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBox", modifiers: " const&", def_value: None }]
constexpr BeatmapEventDataBox(BeatmapEventDataBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBox", modifiers: "&&", def_value: None }]
constexpr BeatmapEventDataBox(BeatmapEventDataBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventDataBox(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEventDataBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventDataBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventDataBox& operator=(BeatmapEventDataBox&& o) noexcept = default;
  constexpr BeatmapEventDataBox& operator=(BeatmapEventDataBox const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IndexFilter __declspec(property(get=__get__indexFilter_k__BackingField, put=__set__indexFilter_k__BackingField))  _indexFilter_k__BackingField;

constexpr void __set__indexFilter_k__BackingField(GlobalNamespace::IndexFilter value) ;

constexpr GlobalNamespace::IndexFilter __get__indexFilter_k__BackingField() const;

 float_t __declspec(property(get=__get__beatDistributionParam, put=__set__beatDistributionParam))  _beatDistributionParam;

constexpr void __set__beatDistributionParam(float_t value) ;

constexpr float_t __get__beatDistributionParam() const;

 GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType __declspec(property(get=__get__beatDistributionParamType, put=__set__beatDistributionParamType))  _beatDistributionParamType;

constexpr void __set__beatDistributionParamType(GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType __get__beatDistributionParamType() const;

 int32_t __declspec(property(get=__get__eventDistributionCount, put=__set__eventDistributionCount))  _eventDistributionCount;

constexpr void __set__eventDistributionCount(int32_t value) ;

constexpr int32_t __get__eventDistributionCount() const;

 GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType __declspec(property(get=__get__eventDistributionParamType, put=__set__eventDistributionParamType))  _eventDistributionParamType;

constexpr void __set__eventDistributionParamType(GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType __get__eventDistributionParamType() const;

 float_t __declspec(property(get=__get__eventDistributionParam, put=__set__eventDistributionParam))  _eventDistributionParam;

constexpr void __set__eventDistributionParam(float_t value) ;

constexpr float_t __get__eventDistributionParam() const;

 bool __declspec(property(get=__get__eventDistributionShouldAffectFirstBaseEvent, put=__set__eventDistributionShouldAffectFirstBaseEvent))  _eventDistributionShouldAffectFirstBaseEvent;

constexpr void __set__eventDistributionShouldAffectFirstBaseEvent(bool value) ;

constexpr bool __get__eventDistributionShouldAffectFirstBaseEvent() const;

 GlobalNamespace::EaseType __declspec(property(get=__get__eventDistributionEaseType, put=__set__eventDistributionEaseType))  _eventDistributionEaseType;

constexpr void __set__eventDistributionEaseType(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get__eventDistributionEaseType() const;


// Properties

 int32_t __declspec(property(get=get_subtypeIdentifier))  subtypeIdentifier;

 float_t __declspec(property(get=get_beatStep))  beatStep;

 GlobalNamespace::IndexFilter __declspec(property(get=get_indexFilter))  indexFilter;


// Methods

/// @brief Method get_subtypeIdentifier addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_subtypeIdentifier() ;

/// @brief Method get_beatStep addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_beatStep() ;

/// @brief Method get_indexFilter addr 0x21da734 size 0x8 virtual false final false
 GlobalNamespace::IndexFilter get_indexFilter() ;

// Ctor Parameters [CppParam { name: "indexFilter", ty: "GlobalNamespace::IndexFilter", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParamType", ty: "GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "eventDistributionParamType", ty: "GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "eventDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "eventDistributionShouldAffectFirstBaseEvent", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "eventDistributionEaseType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }]
explicit BeatmapEventDataBox(GlobalNamespace::IndexFilter indexFilter, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType eventDistributionEaseType) ;

/// @brief Method .ctor addr 0x21da73c size 0x94 virtual false final false
 void _ctor(GlobalNamespace::IndexFilter indexFilter, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType eventDistributionEaseType) ;

/// @brief Method Unpack addr 0x0 size 0xffffffffffffffff virtual true final false
 void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData> output) ;

/// @brief Method GetBeatStep addr 0x21da7d0 size 0x64 virtual false final false
 float_t GetBeatStep(float_t lastBaseEventRelativeBeat) ;

/// @brief Method GetDistribution addr 0x21da854 size 0x2c virtual false final false
 float_t GetDistribution(bool isFirstBaseDataEvent, int32_t distributionOrderIndex) ;

/// @brief Method BeatDistributionParamToStep addr 0x21da834 size 0x20 virtual false final false
static float_t BeatDistributionParamToStep(float_t distributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType distributionParamType, int32_t count) ;

/// @brief Method EventDistributionParamToStep addr 0x21da880 size 0x6c virtual false final false
static float_t EventDistributionParamToStep(int32_t index, float_t distributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType distributionParamType, int32_t count, GlobalNamespace::EaseType easeType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, "", "BeatmapEventDataBox/DistributionParamType");
NEED_NO_BOX(GlobalNamespace::BeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventDataBox, "", "BeatmapEventDataBox");
