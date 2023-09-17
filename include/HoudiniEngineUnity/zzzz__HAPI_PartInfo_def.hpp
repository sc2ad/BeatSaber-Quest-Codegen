#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
// Type: HoudiniEngineUnity::HAPI_PartInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9681))
// CS Name: HoudiniEngineUnity.HAPI_PartInfo
struct CORDL_TYPE HAPI_PartInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_PartType", modifiers: "", def_value: None }, CppParam { name: "faceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pointCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "attributeCounts", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "isInstanced", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instancedPartCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasChanged", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_PartInfo(int32_t id, int32_t nameSH, ::HoudiniEngineUnity::HAPI_PartType type, int32_t faceCount, int32_t vertexCount, int32_t pointCount, ::ArrayW<int32_t> attributeCounts, bool isInstanced, int32_t instancedPartCount, int32_t instanceCount, bool hasChanged) noexcept;


                    constexpr HAPI_PartInfo(HAPI_PartInfo const&) = default;
                    constexpr HAPI_PartInfo(HAPI_PartInfo&&) = default;
                    constexpr HAPI_PartInfo& operator=(HAPI_PartInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PartInfo& operator=(HAPI_PartInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PartInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(int32_t value) ;

constexpr int32_t __get_id() const;

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

 ::HoudiniEngineUnity::HAPI_PartType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_PartType value) ;

constexpr ::HoudiniEngineUnity::HAPI_PartType __get_type() const;

 int32_t __declspec(property(get=__get_faceCount, put=__set_faceCount))  faceCount;

constexpr void __set_faceCount(int32_t value) ;

constexpr int32_t __get_faceCount() const;

 int32_t __declspec(property(get=__get_vertexCount, put=__set_vertexCount))  vertexCount;

constexpr void __set_vertexCount(int32_t value) ;

constexpr int32_t __get_vertexCount() const;

 int32_t __declspec(property(get=__get_pointCount, put=__set_pointCount))  pointCount;

constexpr void __set_pointCount(int32_t value) ;

constexpr int32_t __get_pointCount() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_attributeCounts, put=__set_attributeCounts))  attributeCounts;

constexpr void __set_attributeCounts(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_attributeCounts() const;

 bool __declspec(property(get=__get_isInstanced, put=__set_isInstanced))  isInstanced;

constexpr void __set_isInstanced(bool value) ;

constexpr bool __get_isInstanced() const;

 int32_t __declspec(property(get=__get_instancedPartCount, put=__set_instancedPartCount))  instancedPartCount;

constexpr void __set_instancedPartCount(int32_t value) ;

constexpr int32_t __get_instancedPartCount() const;

 int32_t __declspec(property(get=__get_instanceCount, put=__set_instanceCount))  instanceCount;

constexpr void __set_instanceCount(int32_t value) ;

constexpr int32_t __get_instanceCount() const;

 bool __declspec(property(get=__get_hasChanged, put=__set_hasChanged))  hasChanged;

constexpr void __set_hasChanged(bool value) ;

constexpr bool __get_hasChanged() const;


// Properties

 int32_t __declspec(property(get=get_pointAttributeCount, put=set_pointAttributeCount))  pointAttributeCount;

 int32_t __declspec(property(get=get_primitiveAttributeCount, put=set_primitiveAttributeCount))  primitiveAttributeCount;

 int32_t __declspec(property(get=get_vertexAttributeCount, put=set_vertexAttributeCount))  vertexAttributeCount;

 int32_t __declspec(property(get=get_detailAttributeCount, put=set_detailAttributeCount))  detailAttributeCount;


// Methods

/// @brief Method getElementCountByAttributeOwner addr 0x201f3c4 size 0x4c virtual false final false
 int32_t getElementCountByAttributeOwner(::HoudiniEngineUnity::HAPI_AttributeOwner owner) ;

/// @brief Method getElementCountByGroupType addr 0x201f410 size 0x28 virtual false final false
 int32_t getElementCountByGroupType(::HoudiniEngineUnity::HAPI_GroupType type) ;

/// @brief Method init addr 0x20145e4 size 0x58 virtual false final false
 void init() ;

/// @brief Method get_pointAttributeCount addr 0x201f438 size 0x34 virtual false final false
 int32_t get_pointAttributeCount() ;

/// @brief Method set_pointAttributeCount addr 0x201f46c size 0x40 virtual false final false
 void set_pointAttributeCount(int32_t value) ;

/// @brief Method get_primitiveAttributeCount addr 0x201f4ac size 0x34 virtual false final false
 int32_t get_primitiveAttributeCount() ;

/// @brief Method set_primitiveAttributeCount addr 0x201f4e0 size 0x40 virtual false final false
 void set_primitiveAttributeCount(int32_t value) ;

/// @brief Method get_vertexAttributeCount addr 0x201f520 size 0x30 virtual false final false
 int32_t get_vertexAttributeCount() ;

/// @brief Method set_vertexAttributeCount addr 0x201f550 size 0x3c virtual false final false
 void set_vertexAttributeCount(int32_t value) ;

/// @brief Method get_detailAttributeCount addr 0x201f58c size 0x34 virtual false final false
 int32_t get_detailAttributeCount() ;

/// @brief Method set_detailAttributeCount addr 0x201f5c0 size 0x40 virtual false final false
 void set_detailAttributeCount(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PartInfo, "HoudiniEngineUnity", "HAPI_PartInfo");
