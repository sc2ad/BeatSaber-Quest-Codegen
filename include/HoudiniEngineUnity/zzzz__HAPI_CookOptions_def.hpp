#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_PackedPrimInstancingMode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CookOptions;
}
// Type: HoudiniEngineUnity::HAPI_CookOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9673))
// CS Name: HoudiniEngineUnity.HAPI_CookOptions
struct CORDL_TYPE HAPI_CookOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "splitGeosByGroup", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "splitGeosByAttribute", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "splitAttrSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxVerticesPerPrimitive", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "refineCurveToLinear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "curveRefineLOD", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "clearErrorsAndWarnings", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cookTemplatedGeos", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "splitPointsByVertexAttributes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "packedPrimInstancingMode", ty: "HoudiniEngineUnity::HAPI_PackedPrimInstancingMode", modifiers: "", def_value: None }, CppParam { name: "handleBoxPartTypes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "handleSpherePartTypes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "checkPartChanges", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cacheMeshTopology", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "extraFlags", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_CookOptions(bool splitGeosByGroup, bool splitGeosByAttribute, int32_t splitAttrSH, int32_t maxVerticesPerPrimitive, bool refineCurveToLinear, float_t curveRefineLOD, bool clearErrorsAndWarnings, bool cookTemplatedGeos, bool splitPointsByVertexAttributes, HoudiniEngineUnity::HAPI_PackedPrimInstancingMode packedPrimInstancingMode, bool handleBoxPartTypes, bool handleSpherePartTypes, bool checkPartChanges, bool cacheMeshTopology, int32_t extraFlags) noexcept;


                    constexpr HAPI_CookOptions(HAPI_CookOptions const&) = default;
                    constexpr HAPI_CookOptions(HAPI_CookOptions&&) = default;
                    constexpr HAPI_CookOptions& operator=(HAPI_CookOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_CookOptions& operator=(HAPI_CookOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_CookOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_splitGeosByGroup, put=__set_splitGeosByGroup))  splitGeosByGroup;

constexpr void __set_splitGeosByGroup(bool value) ;

constexpr bool __get_splitGeosByGroup() const;

 bool __declspec(property(get=__get_splitGeosByAttribute, put=__set_splitGeosByAttribute))  splitGeosByAttribute;

constexpr void __set_splitGeosByAttribute(bool value) ;

constexpr bool __get_splitGeosByAttribute() const;

 int32_t __declspec(property(get=__get_splitAttrSH, put=__set_splitAttrSH))  splitAttrSH;

constexpr void __set_splitAttrSH(int32_t value) ;

constexpr int32_t __get_splitAttrSH() const;

 int32_t __declspec(property(get=__get_maxVerticesPerPrimitive, put=__set_maxVerticesPerPrimitive))  maxVerticesPerPrimitive;

constexpr void __set_maxVerticesPerPrimitive(int32_t value) ;

constexpr int32_t __get_maxVerticesPerPrimitive() const;

 bool __declspec(property(get=__get_refineCurveToLinear, put=__set_refineCurveToLinear))  refineCurveToLinear;

constexpr void __set_refineCurveToLinear(bool value) ;

constexpr bool __get_refineCurveToLinear() const;

 float_t __declspec(property(get=__get_curveRefineLOD, put=__set_curveRefineLOD))  curveRefineLOD;

constexpr void __set_curveRefineLOD(float_t value) ;

constexpr float_t __get_curveRefineLOD() const;

 bool __declspec(property(get=__get_clearErrorsAndWarnings, put=__set_clearErrorsAndWarnings))  clearErrorsAndWarnings;

constexpr void __set_clearErrorsAndWarnings(bool value) ;

constexpr bool __get_clearErrorsAndWarnings() const;

 bool __declspec(property(get=__get_cookTemplatedGeos, put=__set_cookTemplatedGeos))  cookTemplatedGeos;

constexpr void __set_cookTemplatedGeos(bool value) ;

constexpr bool __get_cookTemplatedGeos() const;

 bool __declspec(property(get=__get_splitPointsByVertexAttributes, put=__set_splitPointsByVertexAttributes))  splitPointsByVertexAttributes;

constexpr void __set_splitPointsByVertexAttributes(bool value) ;

constexpr bool __get_splitPointsByVertexAttributes() const;

 HoudiniEngineUnity::HAPI_PackedPrimInstancingMode __declspec(property(get=__get_packedPrimInstancingMode, put=__set_packedPrimInstancingMode))  packedPrimInstancingMode;

constexpr void __set_packedPrimInstancingMode(HoudiniEngineUnity::HAPI_PackedPrimInstancingMode value) ;

constexpr HoudiniEngineUnity::HAPI_PackedPrimInstancingMode __get_packedPrimInstancingMode() const;

 bool __declspec(property(get=__get_handleBoxPartTypes, put=__set_handleBoxPartTypes))  handleBoxPartTypes;

constexpr void __set_handleBoxPartTypes(bool value) ;

constexpr bool __get_handleBoxPartTypes() const;

 bool __declspec(property(get=__get_handleSpherePartTypes, put=__set_handleSpherePartTypes))  handleSpherePartTypes;

constexpr void __set_handleSpherePartTypes(bool value) ;

constexpr bool __get_handleSpherePartTypes() const;

 bool __declspec(property(get=__get_checkPartChanges, put=__set_checkPartChanges))  checkPartChanges;

constexpr void __set_checkPartChanges(bool value) ;

constexpr bool __get_checkPartChanges() const;

 bool __declspec(property(get=__get_cacheMeshTopology, put=__set_cacheMeshTopology))  cacheMeshTopology;

constexpr void __set_cacheMeshTopology(bool value) ;

constexpr bool __get_cacheMeshTopology() const;

 int32_t __declspec(property(get=__get_extraFlags, put=__set_extraFlags))  extraFlags;

constexpr void __set_extraFlags(int32_t value) ;

constexpr int32_t __get_extraFlags() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_CookOptions, "HoudiniEngineUnity", "HAPI_CookOptions");
