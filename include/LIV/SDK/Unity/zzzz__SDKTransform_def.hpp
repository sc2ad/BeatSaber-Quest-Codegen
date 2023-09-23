#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTransform;
}
// Type: LIV.SDK.Unity::SDKTransform
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15167))
// CS Name: LIV.SDK.Unity.SDKTransform
struct CORDL_TYPE SDKTransform : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "localPosition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "localRotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "localScale", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }]
constexpr SDKTransform(LIV::SDK::Unity::SDKVector3 localPosition, LIV::SDK::Unity::SDKQuaternion localRotation, LIV::SDK::Unity::SDKVector3 localScale) noexcept;


                    constexpr SDKTransform(SDKTransform const&) = default;
                    constexpr SDKTransform(SDKTransform&&) = default;
                    constexpr SDKTransform& operator=(SDKTransform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKTransform& operator=(SDKTransform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKTransform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_localPosition, put=__set_localPosition))  localPosition;

constexpr void __set_localPosition(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_localPosition() const;

 LIV::SDK::Unity::SDKQuaternion __declspec(property(get=__get_localRotation, put=__set_localRotation))  localRotation;

constexpr void __set_localRotation(LIV::SDK::Unity::SDKQuaternion value) ;

constexpr LIV::SDK::Unity::SDKQuaternion __get_localRotation() const;

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_localScale, put=__set_localScale))  localScale;

constexpr void __set_localScale(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_localScale() const;


// Properties

static LIV::SDK::Unity::SDKTransform __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x20a29e8 size 0x14 virtual false final false
static LIV::SDK::Unity::SDKTransform get_empty() ;

/// @brief Method ToString addr 0x20a3440 size 0xe8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKTransform, "LIV.SDK.Unity", "SDKTransform");
