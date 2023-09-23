#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class GlobalNamespace__LightWithIds__LightWithId;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__RuntimeLightWithIds__MixType;
}
namespace GlobalNamespace {
class GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId;
}
namespace GlobalNamespace {
class RuntimeLightWithIds;
}
// Type: ::MixType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14711))
// CS Name: RuntimeLightWithIds::MixType
struct CORDL_TYPE GlobalNamespace__RuntimeLightWithIds__MixType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__RuntimeLightWithIds__MixType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__RuntimeLightWithIds__MixType(GlobalNamespace__RuntimeLightWithIds__MixType const&) = default;
                    constexpr GlobalNamespace__RuntimeLightWithIds__MixType(GlobalNamespace__RuntimeLightWithIds__MixType&&) = default;
                    constexpr GlobalNamespace__RuntimeLightWithIds__MixType& operator=(GlobalNamespace__RuntimeLightWithIds__MixType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__RuntimeLightWithIds__MixType& operator=(GlobalNamespace__RuntimeLightWithIds__MixType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RuntimeLightWithIds__MixType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__RuntimeLightWithIds__MixType_Unwrapped : int32_t {
__Maximum = 0,
__Sum = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__RuntimeLightWithIds__MixType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__RuntimeLightWithIds__MixType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Maximum offset 0
static GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__MixType const Maximum;

/// @brief Field Sum offset 0
static GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__MixType const Sum;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14712))
// CS Name: RuntimeLightWithIds::LightIntensitiesWithId
class CORDL_TYPE GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId : public GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId(GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId(GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId(ptr) {
}


  constexpr GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId& operator=(GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId&& o) noexcept = default;
  constexpr GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId& operator=(GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;


// Properties

 float_t __declspec(property(get=get_intensity, put=set_intensity))  intensity;


// Methods

/// @brief Method get_intensity addr 0x1fa019c size 0x8 virtual false final false
 float_t get_intensity() ;

/// @brief Method set_intensity addr 0x1fa01a4 size 0x8 virtual false final false
 void set_intensity(float_t value) ;

// Ctor Parameters [CppParam { name: "lightId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lightIntensity", ty: "float_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId(int32_t lightId, float_t lightIntensity) ;

/// @brief Method .ctor addr 0x1fa01ac size 0x38 virtual false final false
 void _ctor(int32_t lightId, float_t lightIntensity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RuntimeLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14705))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14713))
// CS Name: RuntimeLightWithIds
class CORDL_TYPE RuntimeLightWithIds : public GlobalNamespace::LightWithIds {
public:
// Declarations
using LightIntensitiesWithId = GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId;

using MixType = GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__MixType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RuntimeLightWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithIds", modifiers: " const&", def_value: None }]
constexpr RuntimeLightWithIds(RuntimeLightWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithIds", modifiers: "&&", def_value: None }]
constexpr RuntimeLightWithIds(RuntimeLightWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeLightWithIds(void* ptr) noexcept : GlobalNamespace::LightWithIds(ptr) {
}


  constexpr RuntimeLightWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeLightWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeLightWithIds& operator=(RuntimeLightWithIds&& o) noexcept = default;
  constexpr RuntimeLightWithIds& operator=(RuntimeLightWithIds const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId> __declspec(property(get=__get__lightIntensityData, put=__set__lightIntensityData))  _lightIntensityData;

constexpr void __set__lightIntensityData(::ArrayW<GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId> __get__lightIntensityData() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__maxIntensity, put=__set__maxIntensity))  _maxIntensity;

constexpr void __set__maxIntensity(float_t value) ;

constexpr float_t __get__maxIntensity() const;

 bool __declspec(property(get=__get__multiplyColorByAlpha, put=__set__multiplyColorByAlpha))  _multiplyColorByAlpha;

constexpr void __set__multiplyColorByAlpha(bool value) ;

constexpr bool __get__multiplyColorByAlpha() const;

 GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__MixType __declspec(property(get=__get__mixType, put=__set__mixType))  _mixType;

constexpr void __set__mixType(GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__MixType value) ;

constexpr GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__MixType __get__mixType() const;


// Methods

/// @brief Method ColorWasSet addr 0x0 size 0xffffffffffffffff virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

/// @brief Method ProcessNewColorData addr 0x1f9ffe8 size 0x174 virtual true final false
 void ProcessNewColorData() ;

/// @brief Method GetLightWithIds addr 0x1fa0194 size 0x8 virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> GetLightWithIds() ;

/// @brief Method ProcessColor addr 0x1fa015c size 0x38 virtual false final false
 UnityEngine::Color ProcessColor(UnityEngine::Color color, float_t intensity) ;

// Ctor Parameters []
explicit RuntimeLightWithIds() ;

/// @brief Method .ctor addr 0x1f9c574 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__MixType, "", "RuntimeLightWithIds/MixType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RuntimeLightWithIds__LightIntensitiesWithId, "", "RuntimeLightWithIds/LightIntensitiesWithId");
NEED_NO_BOX(GlobalNamespace::RuntimeLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RuntimeLightWithIds, "", "RuntimeLightWithIds");
