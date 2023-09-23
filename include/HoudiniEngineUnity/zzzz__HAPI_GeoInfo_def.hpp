#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_GeoType;
}
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
// Type: HoudiniEngineUnity::HAPI_GeoInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9680))
// CS Name: HoudiniEngineUnity.HAPI_GeoInfo
struct CORDL_TYPE HAPI_GeoInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "HoudiniEngineUnity::HAPI_GeoType", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isEditable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isTemplated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDisplayGeo", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasGeoChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasMaterialChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "primitiveGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "edgeGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "partCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_GeoInfo(HoudiniEngineUnity::HAPI_GeoType type, int32_t nameSH, int32_t nodeId, bool isEditable, bool isTemplated, bool isDisplayGeo, bool hasGeoChanged, bool hasMaterialChanged, int32_t pointGroupCount, int32_t primitiveGroupCount, int32_t edgeGroupCount, int32_t partCount) noexcept;


                    constexpr HAPI_GeoInfo(HAPI_GeoInfo const&) = default;
                    constexpr HAPI_GeoInfo(HAPI_GeoInfo&&) = default;
                    constexpr HAPI_GeoInfo& operator=(HAPI_GeoInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_GeoInfo& operator=(HAPI_GeoInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_GeoInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 HoudiniEngineUnity::HAPI_GeoType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(HoudiniEngineUnity::HAPI_GeoType value) ;

constexpr HoudiniEngineUnity::HAPI_GeoType __get_type() const;

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

 int32_t __declspec(property(get=__get_nodeId, put=__set_nodeId))  nodeId;

constexpr void __set_nodeId(int32_t value) ;

constexpr int32_t __get_nodeId() const;

 bool __declspec(property(get=__get_isEditable, put=__set_isEditable))  isEditable;

constexpr void __set_isEditable(bool value) ;

constexpr bool __get_isEditable() const;

 bool __declspec(property(get=__get_isTemplated, put=__set_isTemplated))  isTemplated;

constexpr void __set_isTemplated(bool value) ;

constexpr bool __get_isTemplated() const;

 bool __declspec(property(get=__get_isDisplayGeo, put=__set_isDisplayGeo))  isDisplayGeo;

constexpr void __set_isDisplayGeo(bool value) ;

constexpr bool __get_isDisplayGeo() const;

 bool __declspec(property(get=__get_hasGeoChanged, put=__set_hasGeoChanged))  hasGeoChanged;

constexpr void __set_hasGeoChanged(bool value) ;

constexpr bool __get_hasGeoChanged() const;

 bool __declspec(property(get=__get_hasMaterialChanged, put=__set_hasMaterialChanged))  hasMaterialChanged;

constexpr void __set_hasMaterialChanged(bool value) ;

constexpr bool __get_hasMaterialChanged() const;

 int32_t __declspec(property(get=__get_pointGroupCount, put=__set_pointGroupCount))  pointGroupCount;

constexpr void __set_pointGroupCount(int32_t value) ;

constexpr int32_t __get_pointGroupCount() const;

 int32_t __declspec(property(get=__get_primitiveGroupCount, put=__set_primitiveGroupCount))  primitiveGroupCount;

constexpr void __set_primitiveGroupCount(int32_t value) ;

constexpr int32_t __get_primitiveGroupCount() const;

 int32_t __declspec(property(get=__get_edgeGroupCount, put=__set_edgeGroupCount))  edgeGroupCount;

constexpr void __set_edgeGroupCount(int32_t value) ;

constexpr int32_t __get_edgeGroupCount() const;

 int32_t __declspec(property(get=__get_partCount, put=__set_partCount))  partCount;

constexpr void __set_partCount(int32_t value) ;

constexpr int32_t __get_partCount() const;


// Methods

/// @brief Method getGroupCountByType addr 0x201f39c size 0x28 virtual false final false
 int32_t getGroupCountByType(HoudiniEngineUnity::HAPI_GroupType type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_GeoInfo, "HoudiniEngineUnity", "HAPI_GeoInfo");
