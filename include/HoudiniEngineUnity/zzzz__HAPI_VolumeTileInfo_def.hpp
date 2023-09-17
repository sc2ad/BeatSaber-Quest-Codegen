#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeTileInfo;
}
// Type: HoudiniEngineUnity::HAPI_VolumeTileInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9688))
// CS Name: HoudiniEngineUnity.HAPI_VolumeTileInfo
struct CORDL_TYPE HAPI_VolumeTileInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minZ", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_VolumeTileInfo(int32_t minX, int32_t minY, int32_t minZ, bool isValid) noexcept;


                    constexpr HAPI_VolumeTileInfo(HAPI_VolumeTileInfo const&) = default;
                    constexpr HAPI_VolumeTileInfo(HAPI_VolumeTileInfo&&) = default;
                    constexpr HAPI_VolumeTileInfo& operator=(HAPI_VolumeTileInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_VolumeTileInfo& operator=(HAPI_VolumeTileInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_VolumeTileInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_minX, put=__set_minX))  minX;

constexpr void __set_minX(int32_t value) ;

constexpr int32_t __get_minX() const;

 int32_t __declspec(property(get=__get_minY, put=__set_minY))  minY;

constexpr void __set_minY(int32_t value) ;

constexpr int32_t __get_minY() const;

 int32_t __declspec(property(get=__get_minZ, put=__set_minZ))  minZ;

constexpr void __set_minZ(int32_t value) ;

constexpr int32_t __get_minZ() const;

 bool __declspec(property(get=__get_isValid, put=__set_isValid))  isValid;

constexpr void __set_isValid(bool value) ;

constexpr bool __get_isValid() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeTileInfo, "HoudiniEngineUnity", "HAPI_VolumeTileInfo");
