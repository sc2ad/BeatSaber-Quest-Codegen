#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Threading {
struct SpinWait;
}
// Type: System.Threading::SpinWait
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2679))
// CS Name: System.Threading.SpinWait
struct CORDL_TYPE SpinWait : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpinWait(int32_t _count) noexcept;


                    constexpr SpinWait(SpinWait const&) = default;
                    constexpr SpinWait(SpinWait&&) = default;
                    constexpr SpinWait& operator=(SpinWait const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpinWait& operator=(SpinWait&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpinWait(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static int32_t __declspec(property(get=__get_SpinCountforSpinBeforeWait, put=__set_SpinCountforSpinBeforeWait))  SpinCountforSpinBeforeWait;

static void __set_SpinCountforSpinBeforeWait(int32_t value) ;

static int32_t __get_SpinCountforSpinBeforeWait() ;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_NextSpinWillYield))  NextSpinWillYield;


// Methods

/// @brief Method get_Count addr 0x24a4ba4 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_NextSpinWillYield addr 0x24a4bac size 0x78 virtual false final false
 bool get_NextSpinWillYield() ;

/// @brief Method SpinOnce addr 0x24a4b08 size 0x8 virtual false final false
 void SpinOnce() ;

/// @brief Method SpinOnce addr 0x24a4798 size 0xac virtual false final false
 void SpinOnce(int32_t sleep1Threshold) ;

/// @brief Method SpinOnceCore addr 0x24a4c24 size 0x1a4 virtual false final false
 void SpinOnceCore(int32_t sleep1Threshold) ;

/// @brief Method Reset addr 0x24a4dc8 size 0x8 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SpinWait, "System.Threading", "SpinWait");
