#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
// Type: HoudiniEngineUnity::HAPI_Transform
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9667))
// CS Name: HoudiniEngineUnity.HAPI_Transform
struct CORDL_TYPE HAPI_Transform : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "rotationQuaternion", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "shear", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "rstOrder", ty: "::HoudiniEngineUnity::HAPI_RSTOrder", modifiers: "", def_value: None }]
constexpr HAPI_Transform(::ArrayW<float_t> position, ::ArrayW<float_t> rotationQuaternion, ::ArrayW<float_t> scale, ::ArrayW<float_t> shear, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder) noexcept;


                    constexpr HAPI_Transform(HAPI_Transform const&) = default;
                    constexpr HAPI_Transform(HAPI_Transform&&) = default;
                    constexpr HAPI_Transform& operator=(HAPI_Transform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_Transform& operator=(HAPI_Transform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_Transform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_position() const;

 ::ArrayW<float_t> __declspec(property(get=__get_rotationQuaternion, put=__set_rotationQuaternion))  rotationQuaternion;

constexpr void __set_rotationQuaternion(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_rotationQuaternion() const;

 ::ArrayW<float_t> __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_scale() const;

 ::ArrayW<float_t> __declspec(property(get=__get_shear, put=__set_shear))  shear;

constexpr void __set_shear(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_shear() const;

 ::HoudiniEngineUnity::HAPI_RSTOrder __declspec(property(get=__get_rstOrder, put=__set_rstOrder))  rstOrder;

constexpr void __set_rstOrder(::HoudiniEngineUnity::HAPI_RSTOrder value) ;

constexpr ::HoudiniEngineUnity::HAPI_RSTOrder __get_rstOrder() const;


// Methods

/// @brief Method .ctor addr 0x2016108 size 0xac virtual false final false
 void _ctor(bool initializeFields) ;

/// @brief Method Init addr 0x201f14c size 0xe0 virtual false final false
 void Init() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Transform, "HoudiniEngineUnity", "HAPI_Transform");
