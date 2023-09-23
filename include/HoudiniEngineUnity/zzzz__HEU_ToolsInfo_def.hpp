#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility;
}
namespace HoudiniEngineUnity {
class HEU_ToolsInfo;
}
// Type: ::PaintMergeMode
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9889))
// CS Name: HoudiniEngineUnity.HEU_ToolsInfo::PaintMergeMode
struct CORDL_TYPE HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode(HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode const&) = default;
                    constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode(HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode&&) = default;
                    constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode& operator=(HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode& operator=(HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode_Unwrapped : int32_t {
__REPLACE = 0,
__ADD = 1,
__SUBTRACT = 2,
__MULTIPLY = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field REPLACE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode const REPLACE;

/// @brief Field ADD offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode const ADD;

/// @brief Field SUBTRACT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode const SUBTRACT;

/// @brief Field MULTIPLY offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode const MULTIPLY;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::PaintMeshVisibility
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9890))
// CS Name: HoudiniEngineUnity.HEU_ToolsInfo::PaintMeshVisibility
struct CORDL_TYPE HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility(HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility const&) = default;
                    constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility(HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility&&) = default;
                    constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility& operator=(HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility& operator=(HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility_Unwrapped : int32_t {
__AUTO = 0,
__SHOW = 1,
__HIDE = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AUTO offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility const AUTO;

/// @brief Field SHOW offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility const SHOW;

/// @brief Field HIDE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility const HIDE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_ToolsInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9891))
// CS Name: HoudiniEngineUnity.HEU_ToolsInfo
class CORDL_TYPE HEU_ToolsInfo : public UnityEngine::ScriptableObject {
public:
// Declarations
using PaintMeshVisibility = HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility;

using PaintMergeMode = HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ToolsInfo>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ToolsInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~HEU_ToolsInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ToolsInfo", modifiers: " const&", def_value: None }]
constexpr HEU_ToolsInfo(HEU_ToolsInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ToolsInfo", modifiers: "&&", def_value: None }]
constexpr HEU_ToolsInfo(HEU_ToolsInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ToolsInfo(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_ToolsInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ToolsInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ToolsInfo& operator=(HEU_ToolsInfo&& o) noexcept = default;
  constexpr HEU_ToolsInfo& operator=(HEU_ToolsInfo const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__paintBrushSize, put=__set__paintBrushSize))  _paintBrushSize;

constexpr void __set__paintBrushSize(float_t value) ;

constexpr float_t __get__paintBrushSize() const;

 float_t __declspec(property(get=__get__paintBrushOpacity, put=__set__paintBrushOpacity))  _paintBrushOpacity;

constexpr void __set__paintBrushOpacity(float_t value) ;

constexpr float_t __get__paintBrushOpacity() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__paintIntValue, put=__set__paintIntValue))  _paintIntValue;

constexpr void __set__paintIntValue(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__paintIntValue() const;

 ::ArrayW<float_t> __declspec(property(get=__get__paintFloatValue, put=__set__paintFloatValue))  _paintFloatValue;

constexpr void __set__paintFloatValue(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__paintFloatValue() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__paintStringValue, put=__set__paintStringValue))  _paintStringValue;

constexpr void __set__paintStringValue(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__paintStringValue() const;

 int32_t __declspec(property(get=__get__lastAttributesGeoID, put=__set__lastAttributesGeoID))  _lastAttributesGeoID;

constexpr void __set__lastAttributesGeoID(int32_t value) ;

constexpr int32_t __get__lastAttributesGeoID() const;

 int32_t __declspec(property(get=__get__lastAttributesPartID, put=__set__lastAttributesPartID))  _lastAttributesPartID;

constexpr void __set__lastAttributesPartID(int32_t value) ;

constexpr int32_t __get__lastAttributesPartID() const;

 ::StringW __declspec(property(get=__get__lastAttributeNodeName, put=__set__lastAttributeNodeName))  _lastAttributeNodeName;

constexpr void __set__lastAttributeNodeName(::StringW value) ;

constexpr ::StringW __get__lastAttributeNodeName() const;

 ::StringW __declspec(property(get=__get__lastAttributeName, put=__set__lastAttributeName))  _lastAttributeName;

constexpr void __set__lastAttributeName(::StringW value) ;

constexpr ::StringW __get__lastAttributeName() const;

 UnityEngine::Color __declspec(property(get=__get__brushHandleColor, put=__set__brushHandleColor))  _brushHandleColor;

constexpr void __set__brushHandleColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__brushHandleColor() const;

 UnityEngine::Color __declspec(property(get=__get__affectedAreaPaintColor, put=__set__affectedAreaPaintColor))  _affectedAreaPaintColor;

constexpr void __set__affectedAreaPaintColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__affectedAreaPaintColor() const;

 bool __declspec(property(get=__get__liveUpdate, put=__set__liveUpdate))  _liveUpdate;

constexpr void __set__liveUpdate(bool value) ;

constexpr bool __get__liveUpdate() const;

 bool __declspec(property(get=__get__isPainting, put=__set__isPainting))  _isPainting;

constexpr void __set__isPainting(bool value) ;

constexpr bool __get__isPainting() const;

 float_t __declspec(property(get=__get__editPointBoxSize, put=__set__editPointBoxSize))  _editPointBoxSize;

constexpr void __set__editPointBoxSize(float_t value) ;

constexpr float_t __get__editPointBoxSize() const;

 UnityEngine::Color __declspec(property(get=__get__editPointBoxUnselectedColor, put=__set__editPointBoxUnselectedColor))  _editPointBoxUnselectedColor;

constexpr void __set__editPointBoxUnselectedColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__editPointBoxUnselectedColor() const;

 UnityEngine::Color __declspec(property(get=__get__editPointBoxSelectedColor, put=__set__editPointBoxSelectedColor))  _editPointBoxSelectedColor;

constexpr void __set__editPointBoxSelectedColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__editPointBoxSelectedColor() const;

 bool __declspec(property(get=__get__recacheRequired, put=__set__recacheRequired))  _recacheRequired;

constexpr void __set__recacheRequired(bool value) ;

constexpr bool __get__recacheRequired() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode __declspec(property(get=__get__paintMergeMode, put=__set__paintMergeMode))  _paintMergeMode;

constexpr void __set__paintMergeMode(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode __get__paintMergeMode() const;

 bool __declspec(property(get=__get__showOnlyEditGeometry, put=__set__showOnlyEditGeometry))  _showOnlyEditGeometry;

constexpr void __set__showOnlyEditGeometry(bool value) ;

constexpr bool __get__showOnlyEditGeometry() const;

 bool __declspec(property(get=__get__alwaysCookUpstream, put=__set__alwaysCookUpstream))  _alwaysCookUpstream;

constexpr void __set__alwaysCookUpstream(bool value) ;

constexpr bool __get__alwaysCookUpstream() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility __declspec(property(get=__get__paintMeshVisiblity, put=__set__paintMeshVisiblity))  _paintMeshVisiblity;

constexpr void __set__paintMeshVisiblity(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility __get__paintMeshVisiblity() const;


// Methods

/// @brief Method IsEquivalentTo addr 0x2076e10 size 0x620 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_ToolsInfo other) ;

// Ctor Parameters []
explicit HEU_ToolsInfo() ;

/// @brief Method .ctor addr 0x2077430 size 0x108 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode, "HoudiniEngineUnity", "HEU_ToolsInfo/PaintMergeMode");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility, "HoudiniEngineUnity", "HEU_ToolsInfo/PaintMeshVisibility");
NEED_NO_BOX(HoudiniEngineUnity::HEU_ToolsInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ToolsInfo, "HoudiniEngineUnity", "HEU_ToolsInfo");
