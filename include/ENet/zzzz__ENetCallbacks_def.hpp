#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace ENet {
class NoMemoryCallback;
}
namespace ENet {
class FreeCallback;
}
namespace ENet {
class AllocCallback;
}
// Forward declare root types
namespace ENet {
struct ENetCallbacks;
}
// Type: ENet::ENetCallbacks
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15260))
// CS Name: ENet.ENetCallbacks
struct CORDL_TYPE ENetCallbacks : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "malloc", ty: "ENet::AllocCallback", modifiers: "", def_value: None }, CppParam { name: "free", ty: "ENet::FreeCallback", modifiers: "", def_value: None }, CppParam { name: "noMemory", ty: "ENet::NoMemoryCallback", modifiers: "", def_value: None }]
constexpr ENetCallbacks(ENet::AllocCallback malloc, ENet::FreeCallback free, ENet::NoMemoryCallback noMemory) noexcept;


                    constexpr ENetCallbacks(ENetCallbacks const&) = default;
                    constexpr ENetCallbacks(ENetCallbacks&&) = default;
                    constexpr ENetCallbacks& operator=(ENetCallbacks const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ENetCallbacks& operator=(ENetCallbacks&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ENetCallbacks(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ENet::AllocCallback __declspec(property(get=__get_malloc, put=__set_malloc))  malloc;

constexpr void __set_malloc(ENet::AllocCallback value) ;

constexpr ENet::AllocCallback __get_malloc() const;

 ENet::FreeCallback __declspec(property(get=__get_free, put=__set_free))  free;

constexpr void __set_free(ENet::FreeCallback value) ;

constexpr ENet::FreeCallback __get_free() const;

 ENet::NoMemoryCallback __declspec(property(get=__get_noMemory, put=__set_noMemory))  noMemory;

constexpr void __set_noMemory(ENet::NoMemoryCallback value) ;

constexpr ENet::NoMemoryCallback __get_noMemory() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::ENetCallbacks, "ENet", "ENetCallbacks");
