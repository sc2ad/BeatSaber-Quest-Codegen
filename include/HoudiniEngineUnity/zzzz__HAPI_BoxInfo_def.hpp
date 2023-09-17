#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_BoxInfo;
}
// Type: HoudiniEngineUnity::HAPI_BoxInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9691))
// CS Name: HoudiniEngineUnity.HAPI_BoxInfo
struct CORDL_TYPE HAPI_BoxInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "size", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }]
constexpr HAPI_BoxInfo(::ArrayW<float_t> center, ::ArrayW<float_t> size, ::ArrayW<float_t> rotation) noexcept;


                    constexpr HAPI_BoxInfo(HAPI_BoxInfo const&) = default;
                    constexpr HAPI_BoxInfo(HAPI_BoxInfo&&) = default;
                    constexpr HAPI_BoxInfo& operator=(HAPI_BoxInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_BoxInfo& operator=(HAPI_BoxInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_BoxInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_center, put=__set_center))  center;

constexpr void __set_center(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_center() const;

 ::ArrayW<float_t> __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_size() const;

 ::ArrayW<float_t> __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_rotation() const;


// Methods

/// @brief Method .ctor addr 0x201f62c size 0x70 virtual false final false
 void _ctor(bool initialize_fields) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_BoxInfo, "HoudiniEngineUnity", "HAPI_BoxInfo");
