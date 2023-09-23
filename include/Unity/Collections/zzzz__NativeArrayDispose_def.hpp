#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayDispose;
}
// Type: Unity.Collections::NativeArrayDispose
namespace Unity::Collections {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9942))
// CS Name: Unity.Collections.NativeArrayDispose
struct CORDL_TYPE NativeArrayDispose : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArrayDispose(void* m_Buffer, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArrayDispose(NativeArrayDispose const&) = default;
                    constexpr NativeArrayDispose(NativeArrayDispose&&) = default;
                    constexpr NativeArrayDispose& operator=(NativeArrayDispose const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArrayDispose& operator=(NativeArrayDispose&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArrayDispose(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Methods

/// @brief Method Dispose addr 0x2b284b0 size 0x44 virtual false final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::NativeArrayDispose, "Unity.Collections", "NativeArrayDispose");
