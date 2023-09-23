#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRProfilerScope;
}
// Type: ::OVRProfilerScope
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8944))
// CS Name: OVRProfilerScope
struct CORDL_TYPE OVRProfilerScope : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;


                    constexpr OVRProfilerScope(OVRProfilerScope const&) = default;
                    constexpr OVRProfilerScope(OVRProfilerScope&&) = default;
                    constexpr OVRProfilerScope& operator=(OVRProfilerScope const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRProfilerScope& operator=(OVRProfilerScope&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRProfilerScope(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method .ctor addr 0x262da98 size 0x4 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method System.IDisposable.Dispose addr 0x262da9c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRProfilerScope, "", "OVRProfilerScope");
