#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Unity::Profiling {
struct Unity__Profiling__ProfilerMarker__AutoScope;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace Unity::Profiling {
struct Unity__Profiling__ProfilerMarker__AutoScope;
}
// Type: ::AutoScope
namespace Unity::Profiling {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9907))
// CS Name: Unity.Profiling.ProfilerMarker::AutoScope
struct CORDL_TYPE Unity__Profiling__ProfilerMarker__AutoScope : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr Unity__Profiling__ProfilerMarker__AutoScope(::cordl_internals::intptr_t m_Ptr) noexcept;


                    constexpr Unity__Profiling__ProfilerMarker__AutoScope(Unity__Profiling__ProfilerMarker__AutoScope const&) = default;
                    constexpr Unity__Profiling__ProfilerMarker__AutoScope(Unity__Profiling__ProfilerMarker__AutoScope&&) = default;
                    constexpr Unity__Profiling__ProfilerMarker__AutoScope& operator=(Unity__Profiling__ProfilerMarker__AutoScope const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Profiling__ProfilerMarker__AutoScope& operator=(Unity__Profiling__ProfilerMarker__AutoScope&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Profiling__ProfilerMarker__AutoScope(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

/// @brief Method .ctor addr 0x2b27c58 size 0xa0 virtual false final false
 void _ctor(::cordl_internals::intptr_t markerPtr) ;

/// @brief Method Dispose addr 0x2b27d34 size 0x90 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Profiling
// Type: Unity.Profiling::ProfilerMarker
namespace Unity::Profiling {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9908))
// CS Name: Unity.Profiling.ProfilerMarker
struct CORDL_TYPE ProfilerMarker : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using AutoScope = Unity::Profiling::Unity__Profiling__ProfilerMarker__AutoScope;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ProfilerMarker(::cordl_internals::intptr_t m_Ptr) noexcept;


                    constexpr ProfilerMarker(ProfilerMarker const&) = default;
                    constexpr ProfilerMarker(ProfilerMarker&&) = default;
                    constexpr ProfilerMarker& operator=(ProfilerMarker const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ProfilerMarker& operator=(ProfilerMarker&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ProfilerMarker(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

/// @brief Method .ctor addr 0x2b27b20 size 0x54 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method Auto addr 0x2b27bd0 size 0x88 virtual false final false
 Unity::Profiling::Unity__Profiling__ProfilerMarker__AutoScope Auto() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(Unity::Profiling::ProfilerMarker, "Unity.Profiling", "ProfilerMarker");
DEFINE_IL2CPP_ARG_TYPE(Unity::Profiling::Unity__Profiling__ProfilerMarker__AutoScope, "Unity.Profiling", "ProfilerMarker/AutoScope");
