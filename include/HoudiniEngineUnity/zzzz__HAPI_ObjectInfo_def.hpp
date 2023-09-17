#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
// Type: HoudiniEngineUnity::HAPI_ObjectInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9679))
// CS Name: HoudiniEngineUnity.HAPI_ObjectInfo
struct CORDL_TYPE HAPI_ObjectInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectInstancePathSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasTransformChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "haveGeosChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isInstancer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isInstanced", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "geoCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectToInstanceId", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ObjectInfo(int32_t nameSH, int32_t objectInstancePathSH, bool hasTransformChanged, bool haveGeosChanged, bool isVisible, bool isInstancer, bool isInstanced, int32_t geoCount, int32_t nodeId, int32_t objectToInstanceId) noexcept;


                    constexpr HAPI_ObjectInfo(HAPI_ObjectInfo const&) = default;
                    constexpr HAPI_ObjectInfo(HAPI_ObjectInfo&&) = default;
                    constexpr HAPI_ObjectInfo& operator=(HAPI_ObjectInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ObjectInfo& operator=(HAPI_ObjectInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ObjectInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

 int32_t __declspec(property(get=__get_objectInstancePathSH, put=__set_objectInstancePathSH))  objectInstancePathSH;

constexpr void __set_objectInstancePathSH(int32_t value) ;

constexpr int32_t __get_objectInstancePathSH() const;

 bool __declspec(property(get=__get_hasTransformChanged, put=__set_hasTransformChanged))  hasTransformChanged;

constexpr void __set_hasTransformChanged(bool value) ;

constexpr bool __get_hasTransformChanged() const;

 bool __declspec(property(get=__get_haveGeosChanged, put=__set_haveGeosChanged))  haveGeosChanged;

constexpr void __set_haveGeosChanged(bool value) ;

constexpr bool __get_haveGeosChanged() const;

 bool __declspec(property(get=__get_isVisible, put=__set_isVisible))  isVisible;

constexpr void __set_isVisible(bool value) ;

constexpr bool __get_isVisible() const;

 bool __declspec(property(get=__get_isInstancer, put=__set_isInstancer))  isInstancer;

constexpr void __set_isInstancer(bool value) ;

constexpr bool __get_isInstancer() const;

 bool __declspec(property(get=__get_isInstanced, put=__set_isInstanced))  isInstanced;

constexpr void __set_isInstanced(bool value) ;

constexpr bool __get_isInstanced() const;

 int32_t __declspec(property(get=__get_geoCount, put=__set_geoCount))  geoCount;

constexpr void __set_geoCount(int32_t value) ;

constexpr int32_t __get_geoCount() const;

 int32_t __declspec(property(get=__get_nodeId, put=__set_nodeId))  nodeId;

constexpr void __set_nodeId(int32_t value) ;

constexpr int32_t __get_nodeId() const;

 int32_t __declspec(property(get=__get_objectToInstanceId, put=__set_objectToInstanceId))  objectToInstanceId;

constexpr void __set_objectToInstanceId(int32_t value) ;

constexpr int32_t __get_objectToInstanceId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ObjectInfo, "HoudiniEngineUnity", "HAPI_ObjectInfo");
