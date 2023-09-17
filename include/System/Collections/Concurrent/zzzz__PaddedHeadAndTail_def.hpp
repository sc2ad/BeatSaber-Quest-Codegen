#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections::Concurrent {
struct PaddedHeadAndTail;
}
// Type: System.Collections.Concurrent::PaddedHeadAndTail
namespace System::Collections::Concurrent {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3789))
// CS Name: System.Collections.Concurrent.PaddedHeadAndTail
struct CORDL_TYPE PaddedHeadAndTail : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Head", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Tail", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PaddedHeadAndTail(int32_t Head, int32_t Tail) noexcept;


                    constexpr PaddedHeadAndTail(PaddedHeadAndTail const&) = default;
                    constexpr PaddedHeadAndTail(PaddedHeadAndTail&&) = default;
                    constexpr PaddedHeadAndTail& operator=(PaddedHeadAndTail const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PaddedHeadAndTail& operator=(PaddedHeadAndTail&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x180};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PaddedHeadAndTail(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Head, put=__set_Head))  Head;

constexpr void __set_Head(int32_t value) ;

constexpr int32_t __get_Head() const;

 int32_t __declspec(property(get=__get_Tail, put=__set_Tail))  Tail;

constexpr void __set_Tail(int32_t value) ;

constexpr int32_t __get_Tail() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Concurrent::PaddedHeadAndTail, "System.Collections.Concurrent", "PaddedHeadAndTail");
