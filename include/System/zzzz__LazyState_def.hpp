#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct LazyState;
}
// Type: System::LazyState
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2429))
// CS Name: System.LazyState
struct CORDL_TYPE LazyState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LazyState(int32_t value__) noexcept;


                    constexpr LazyState(LazyState const&) = default;
                    constexpr LazyState(LazyState&&) = default;
                    constexpr LazyState& operator=(LazyState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LazyState& operator=(LazyState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LazyState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LazyState_Unwrapped : int32_t {
__NoneViaConstructor = 0,
__NoneViaFactory = 1,
__NoneException = 2,
__PublicationOnlyViaConstructor = 3,
__PublicationOnlyViaFactory = 4,
__PublicationOnlyWait = 5,
__PublicationOnlyException = 6,
__ExecutionAndPublicationViaConstructor = 7,
__ExecutionAndPublicationViaFactory = 8,
__ExecutionAndPublicationException = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LazyState_Unwrapped () const noexcept {
return std::bit_cast<__LazyState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoneViaConstructor offset 0
static ::System::LazyState const NoneViaConstructor;

/// @brief Field NoneViaFactory offset 0
static ::System::LazyState const NoneViaFactory;

/// @brief Field NoneException offset 0
static ::System::LazyState const NoneException;

/// @brief Field PublicationOnlyViaConstructor offset 0
static ::System::LazyState const PublicationOnlyViaConstructor;

/// @brief Field PublicationOnlyViaFactory offset 0
static ::System::LazyState const PublicationOnlyViaFactory;

/// @brief Field PublicationOnlyWait offset 0
static ::System::LazyState const PublicationOnlyWait;

/// @brief Field PublicationOnlyException offset 0
static ::System::LazyState const PublicationOnlyException;

/// @brief Field ExecutionAndPublicationViaConstructor offset 0
static ::System::LazyState const ExecutionAndPublicationViaConstructor;

/// @brief Field ExecutionAndPublicationViaFactory offset 0
static ::System::LazyState const ExecutionAndPublicationViaFactory;

/// @brief Field ExecutionAndPublicationException offset 0
static ::System::LazyState const ExecutionAndPublicationException;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::LazyState, "System", "LazyState");
