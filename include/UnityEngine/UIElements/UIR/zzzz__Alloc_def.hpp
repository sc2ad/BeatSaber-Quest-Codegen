#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
// Type: UnityEngine.UIElements.UIR::Alloc
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7533))
// CS Name: UnityEngine.UIElements.UIR.Alloc
struct CORDL_TYPE Alloc : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "start", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "shortLived", ty: "bool", modifiers: "", def_value: None }]
constexpr Alloc(uint32_t start, uint32_t size, ::bs_hook::Il2CppWrapperType handle, bool shortLived) noexcept;


                    constexpr Alloc(Alloc const&) = default;
                    constexpr Alloc(Alloc&&) = default;
                    constexpr Alloc& operator=(Alloc const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Alloc& operator=(Alloc&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Alloc(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(uint32_t value) ;

constexpr uint32_t __get_start() const;

 uint32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(uint32_t value) ;

constexpr uint32_t __get_size() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_handle() const;

 bool __declspec(property(get=__get_shortLived, put=__set_shortLived))  shortLived;

constexpr void __set_shortLived(bool value) ;

constexpr bool __get_shortLived() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Alloc, "UnityEngine.UIElements.UIR", "Alloc");
