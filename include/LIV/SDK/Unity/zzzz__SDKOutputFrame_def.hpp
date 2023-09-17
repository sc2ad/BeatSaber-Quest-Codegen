#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace LIV::SDK::Unity {
struct RENDERING_PIPELINE;
}
namespace LIV::SDK::Unity {
struct SDKTrackedSpace;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKOutputFrame;
}
// Type: LIV.SDK.Unity::SDKOutputFrame
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15164))
// CS Name: LIV.SDK.Unity.SDKOutputFrame
struct CORDL_TYPE SDKOutputFrame : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "renderingPipeline", ty: "::LIV::SDK::Unity::RENDERING_PIPELINE", modifiers: "", def_value: None }, CppParam { name: "trackedSpace", ty: "::LIV::SDK::Unity::SDKTrackedSpace", modifiers: "", def_value: None }]
constexpr SDKOutputFrame(::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline, ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace) noexcept;


                    constexpr SDKOutputFrame(SDKOutputFrame const&) = default;
                    constexpr SDKOutputFrame(SDKOutputFrame&&) = default;
                    constexpr SDKOutputFrame& operator=(SDKOutputFrame const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKOutputFrame& operator=(SDKOutputFrame&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xac};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKOutputFrame(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::LIV::SDK::Unity::RENDERING_PIPELINE __declspec(property(get=__get_renderingPipeline, put=__set_renderingPipeline))  renderingPipeline;

constexpr void __set_renderingPipeline(::LIV::SDK::Unity::RENDERING_PIPELINE value) ;

constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE __get_renderingPipeline() const;

 ::LIV::SDK::Unity::SDKTrackedSpace __declspec(property(get=__get_trackedSpace, put=__set_trackedSpace))  trackedSpace;

constexpr void __set_trackedSpace(::LIV::SDK::Unity::SDKTrackedSpace value) ;

constexpr ::LIV::SDK::Unity::SDKTrackedSpace __get_trackedSpace() const;


// Properties

static ::LIV::SDK::Unity::SDKOutputFrame __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x209d6d4 size 0x60 virtual false final false
static ::LIV::SDK::Unity::SDKOutputFrame get_empty() ;

/// @brief Method ToString addr 0x20a2d94 size 0xc4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKOutputFrame, "LIV.SDK.Unity", "SDKOutputFrame");
