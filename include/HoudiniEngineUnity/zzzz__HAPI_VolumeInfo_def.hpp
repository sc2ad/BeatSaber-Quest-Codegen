#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
namespace HoudiniEngineUnity {
struct HAPI_VolumeType;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeInfo;
}
// Type: HoudiniEngineUnity::HAPI_VolumeInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9687))
// CS Name: HoudiniEngineUnity.HAPI_VolumeInfo
struct CORDL_TYPE HAPI_VolumeInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_VolumeType", modifiers: "", def_value: None }, CppParam { name: "xLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "zLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minZ", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "storage", ty: "::HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: None }, CppParam { name: "tileSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::HoudiniEngineUnity::HAPI_Transform", modifiers: "", def_value: None }, CppParam { name: "hasTaper", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "xTaper", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yTaper", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_VolumeInfo(int32_t nameSH, ::HoudiniEngineUnity::HAPI_VolumeType type, int32_t xLength, int32_t yLength, int32_t zLength, int32_t minX, int32_t minY, int32_t minZ, int32_t tupleSize, ::HoudiniEngineUnity::HAPI_StorageType storage, int32_t tileSize, ::HoudiniEngineUnity::HAPI_Transform transform, bool hasTaper, float_t xTaper, float_t yTaper) noexcept;


                    constexpr HAPI_VolumeInfo(HAPI_VolumeInfo const&) = default;
                    constexpr HAPI_VolumeInfo(HAPI_VolumeInfo&&) = default;
                    constexpr HAPI_VolumeInfo& operator=(HAPI_VolumeInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_VolumeInfo& operator=(HAPI_VolumeInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_VolumeInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

 ::HoudiniEngineUnity::HAPI_VolumeType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_VolumeType value) ;

constexpr ::HoudiniEngineUnity::HAPI_VolumeType __get_type() const;

 int32_t __declspec(property(get=__get_xLength, put=__set_xLength))  xLength;

constexpr void __set_xLength(int32_t value) ;

constexpr int32_t __get_xLength() const;

 int32_t __declspec(property(get=__get_yLength, put=__set_yLength))  yLength;

constexpr void __set_yLength(int32_t value) ;

constexpr int32_t __get_yLength() const;

 int32_t __declspec(property(get=__get_zLength, put=__set_zLength))  zLength;

constexpr void __set_zLength(int32_t value) ;

constexpr int32_t __get_zLength() const;

 int32_t __declspec(property(get=__get_minX, put=__set_minX))  minX;

constexpr void __set_minX(int32_t value) ;

constexpr int32_t __get_minX() const;

 int32_t __declspec(property(get=__get_minY, put=__set_minY))  minY;

constexpr void __set_minY(int32_t value) ;

constexpr int32_t __get_minY() const;

 int32_t __declspec(property(get=__get_minZ, put=__set_minZ))  minZ;

constexpr void __set_minZ(int32_t value) ;

constexpr int32_t __get_minZ() const;

 int32_t __declspec(property(get=__get_tupleSize, put=__set_tupleSize))  tupleSize;

constexpr void __set_tupleSize(int32_t value) ;

constexpr int32_t __get_tupleSize() const;

 ::HoudiniEngineUnity::HAPI_StorageType __declspec(property(get=__get_storage, put=__set_storage))  storage;

constexpr void __set_storage(::HoudiniEngineUnity::HAPI_StorageType value) ;

constexpr ::HoudiniEngineUnity::HAPI_StorageType __get_storage() const;

 int32_t __declspec(property(get=__get_tileSize, put=__set_tileSize))  tileSize;

constexpr void __set_tileSize(int32_t value) ;

constexpr int32_t __get_tileSize() const;

 ::HoudiniEngineUnity::HAPI_Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::HoudiniEngineUnity::HAPI_Transform value) ;

constexpr ::HoudiniEngineUnity::HAPI_Transform __get_transform() const;

 bool __declspec(property(get=__get_hasTaper, put=__set_hasTaper))  hasTaper;

constexpr void __set_hasTaper(bool value) ;

constexpr bool __get_hasTaper() const;

 float_t __declspec(property(get=__get_xTaper, put=__set_xTaper))  xTaper;

constexpr void __set_xTaper(float_t value) ;

constexpr float_t __get_xTaper() const;

 float_t __declspec(property(get=__get_yTaper, put=__set_yTaper))  yTaper;

constexpr void __set_yTaper(float_t value) ;

constexpr float_t __get_yTaper() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeInfo, "HoudiniEngineUnity", "HAPI_VolumeInfo");
