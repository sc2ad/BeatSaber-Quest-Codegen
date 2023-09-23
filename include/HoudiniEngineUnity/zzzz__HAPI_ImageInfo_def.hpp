#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_ImagePacking;
}
namespace HoudiniEngineUnity {
struct HAPI_ImageDataFormat;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImageInfo;
}
// Type: HoudiniEngineUnity::HAPI_ImageInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9685))
// CS Name: HoudiniEngineUnity.HAPI_ImageInfo
struct CORDL_TYPE HAPI_ImageInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "imageFileFormatNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "xRes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yRes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dataFormat", ty: "HoudiniEngineUnity::HAPI_ImageDataFormat", modifiers: "", def_value: None }, CppParam { name: "interleaved", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "packing", ty: "HoudiniEngineUnity::HAPI_ImagePacking", modifiers: "", def_value: None }, CppParam { name: "gamma", ty: "double_t", modifiers: "", def_value: None }]
constexpr HAPI_ImageInfo(int32_t imageFileFormatNameSH, int32_t xRes, int32_t yRes, HoudiniEngineUnity::HAPI_ImageDataFormat dataFormat, bool interleaved, HoudiniEngineUnity::HAPI_ImagePacking packing, double_t gamma) noexcept;


                    constexpr HAPI_ImageInfo(HAPI_ImageInfo const&) = default;
                    constexpr HAPI_ImageInfo(HAPI_ImageInfo&&) = default;
                    constexpr HAPI_ImageInfo& operator=(HAPI_ImageInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ImageInfo& operator=(HAPI_ImageInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ImageInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_imageFileFormatNameSH, put=__set_imageFileFormatNameSH))  imageFileFormatNameSH;

constexpr void __set_imageFileFormatNameSH(int32_t value) ;

constexpr int32_t __get_imageFileFormatNameSH() const;

 int32_t __declspec(property(get=__get_xRes, put=__set_xRes))  xRes;

constexpr void __set_xRes(int32_t value) ;

constexpr int32_t __get_xRes() const;

 int32_t __declspec(property(get=__get_yRes, put=__set_yRes))  yRes;

constexpr void __set_yRes(int32_t value) ;

constexpr int32_t __get_yRes() const;

 HoudiniEngineUnity::HAPI_ImageDataFormat __declspec(property(get=__get_dataFormat, put=__set_dataFormat))  dataFormat;

constexpr void __set_dataFormat(HoudiniEngineUnity::HAPI_ImageDataFormat value) ;

constexpr HoudiniEngineUnity::HAPI_ImageDataFormat __get_dataFormat() const;

 bool __declspec(property(get=__get_interleaved, put=__set_interleaved))  interleaved;

constexpr void __set_interleaved(bool value) ;

constexpr bool __get_interleaved() const;

 HoudiniEngineUnity::HAPI_ImagePacking __declspec(property(get=__get_packing, put=__set_packing))  packing;

constexpr void __set_packing(HoudiniEngineUnity::HAPI_ImagePacking value) ;

constexpr HoudiniEngineUnity::HAPI_ImagePacking __get_packing() const;

 double_t __declspec(property(get=__get_gamma, put=__set_gamma))  gamma;

constexpr void __set_gamma(double_t value) ;

constexpr double_t __get_gamma() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_ImageInfo, "HoudiniEngineUnity", "HAPI_ImageInfo");
