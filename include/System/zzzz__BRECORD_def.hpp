#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct BRECORD;
}
// Type: System::BRECORD
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2640))
// CS Name: System.BRECORD
struct CORDL_TYPE BRECORD : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pvRecord", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "pRecInfo", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr BRECORD(::cordl_internals::intptr_t pvRecord, ::cordl_internals::intptr_t pRecInfo) noexcept;


                    constexpr BRECORD(BRECORD const&) = default;
                    constexpr BRECORD(BRECORD&&) = default;
                    constexpr BRECORD& operator=(BRECORD const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BRECORD& operator=(BRECORD&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BRECORD(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_pvRecord, put=__set_pvRecord))  pvRecord;

constexpr void __set_pvRecord(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_pvRecord() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_pRecInfo, put=__set_pRecInfo))  pRecInfo;

constexpr void __set_pRecInfo(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_pRecInfo() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::BRECORD, "System", "BRECORD");
