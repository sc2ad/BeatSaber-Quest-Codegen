#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
// Type: HoudiniEngineUnity::HAPI_AssetInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9672))
// CS Name: HoudiniEngineUnity.HAPI_AssetInfo
struct CORDL_TYPE HAPI_AssetInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectNodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasEverCooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "filePathSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "versionSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fullOpNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "helpTextSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "helpURLSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "handleCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transformInputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "geoInputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "geoOutputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "haveObjectsChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "haveMaterialsChanged", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_AssetInfo(int32_t nodeId, int32_t objectNodeId, bool hasEverCooked, int32_t nameSH, int32_t labelSH, int32_t filePathSH, int32_t versionSH, int32_t fullOpNameSH, int32_t helpTextSH, int32_t helpURLSH, int32_t objectCount, int32_t handleCount, int32_t transformInputCount, int32_t geoInputCount, int32_t geoOutputCount, bool haveObjectsChanged, bool haveMaterialsChanged) noexcept;


                    constexpr HAPI_AssetInfo(HAPI_AssetInfo const&) = default;
                    constexpr HAPI_AssetInfo(HAPI_AssetInfo&&) = default;
                    constexpr HAPI_AssetInfo& operator=(HAPI_AssetInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_AssetInfo& operator=(HAPI_AssetInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_AssetInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nodeId, put=__set_nodeId))  nodeId;

constexpr void __set_nodeId(int32_t value) ;

constexpr int32_t __get_nodeId() const;

 int32_t __declspec(property(get=__get_objectNodeId, put=__set_objectNodeId))  objectNodeId;

constexpr void __set_objectNodeId(int32_t value) ;

constexpr int32_t __get_objectNodeId() const;

 bool __declspec(property(get=__get_hasEverCooked, put=__set_hasEverCooked))  hasEverCooked;

constexpr void __set_hasEverCooked(bool value) ;

constexpr bool __get_hasEverCooked() const;

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

 int32_t __declspec(property(get=__get_labelSH, put=__set_labelSH))  labelSH;

constexpr void __set_labelSH(int32_t value) ;

constexpr int32_t __get_labelSH() const;

 int32_t __declspec(property(get=__get_filePathSH, put=__set_filePathSH))  filePathSH;

constexpr void __set_filePathSH(int32_t value) ;

constexpr int32_t __get_filePathSH() const;

 int32_t __declspec(property(get=__get_versionSH, put=__set_versionSH))  versionSH;

constexpr void __set_versionSH(int32_t value) ;

constexpr int32_t __get_versionSH() const;

 int32_t __declspec(property(get=__get_fullOpNameSH, put=__set_fullOpNameSH))  fullOpNameSH;

constexpr void __set_fullOpNameSH(int32_t value) ;

constexpr int32_t __get_fullOpNameSH() const;

 int32_t __declspec(property(get=__get_helpTextSH, put=__set_helpTextSH))  helpTextSH;

constexpr void __set_helpTextSH(int32_t value) ;

constexpr int32_t __get_helpTextSH() const;

 int32_t __declspec(property(get=__get_helpURLSH, put=__set_helpURLSH))  helpURLSH;

constexpr void __set_helpURLSH(int32_t value) ;

constexpr int32_t __get_helpURLSH() const;

 int32_t __declspec(property(get=__get_objectCount, put=__set_objectCount))  objectCount;

constexpr void __set_objectCount(int32_t value) ;

constexpr int32_t __get_objectCount() const;

 int32_t __declspec(property(get=__get_handleCount, put=__set_handleCount))  handleCount;

constexpr void __set_handleCount(int32_t value) ;

constexpr int32_t __get_handleCount() const;

 int32_t __declspec(property(get=__get_transformInputCount, put=__set_transformInputCount))  transformInputCount;

constexpr void __set_transformInputCount(int32_t value) ;

constexpr int32_t __get_transformInputCount() const;

 int32_t __declspec(property(get=__get_geoInputCount, put=__set_geoInputCount))  geoInputCount;

constexpr void __set_geoInputCount(int32_t value) ;

constexpr int32_t __get_geoInputCount() const;

 int32_t __declspec(property(get=__get_geoOutputCount, put=__set_geoOutputCount))  geoOutputCount;

constexpr void __set_geoOutputCount(int32_t value) ;

constexpr int32_t __get_geoOutputCount() const;

 bool __declspec(property(get=__get_haveObjectsChanged, put=__set_haveObjectsChanged))  haveObjectsChanged;

constexpr void __set_haveObjectsChanged(bool value) ;

constexpr bool __get_haveObjectsChanged() const;

 bool __declspec(property(get=__get_haveMaterialsChanged, put=__set_haveMaterialsChanged))  haveMaterialsChanged;

constexpr void __set_haveMaterialsChanged(bool value) ;

constexpr bool __get_haveMaterialsChanged() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_AssetInfo, "HoudiniEngineUnity", "HAPI_AssetInfo");
