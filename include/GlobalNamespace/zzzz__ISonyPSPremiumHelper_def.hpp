#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult;
}
namespace GlobalNamespace {
class ISonyPSPremiumHelper;
}
// Type: ::DisplayJoinPremiumDialogResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4664))
// CS Name: ISonyPSPremiumHelper::DisplayJoinPremiumDialogResult
struct CORDL_TYPE GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult(GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult const&) = default;
                    constexpr GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult(GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult&&) = default;
                    constexpr GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult& operator=(GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult& operator=(GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped : int32_t {
__OK = 0,
__Failed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult const OK;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetPremiumStatusResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4665))
// CS Name: ISonyPSPremiumHelper::GetPremiumStatusResult
struct CORDL_TYPE GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult(GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult const&) = default;
                    constexpr GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult(GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult&&) = default;
                    constexpr GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult& operator=(GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult& operator=(GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped : int32_t {
__Authorized = 0,
__Unauthorized = 1,
__Failed = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Authorized offset 0
static GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult const Authorized;

/// @brief Field Unauthorized offset 0
static GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult const Unauthorized;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ISonyPSPremiumHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4666))
// CS Name: ISonyPSPremiumHelper
class CORDL_TYPE ISonyPSPremiumHelper : public ::cordl_internals::InterfaceW {
public:
// Declarations
using GetPremiumStatusResult = GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult;

using DisplayJoinPremiumDialogResult = GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult;

~ISonyPSPremiumHelper() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISonyPSPremiumHelper(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method DisplayJoinPremiumDialogAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult> DisplayJoinPremiumDialogAsync(System::Threading::CancellationToken token) ;

/// @brief Method GetPremiumStatusAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult> GetPremiumStatusAsync(System::Threading::CancellationToken token) ;

/// @brief Method NotifyPremiumFeature addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyPremiumFeature(bool isSpectator) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult, "", "ISonyPSPremiumHelper/DisplayJoinPremiumDialogResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult, "", "ISonyPSPremiumHelper/GetPremiumStatusResult");
NEED_NO_BOX(GlobalNamespace::ISonyPSPremiumHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISonyPSPremiumHelper, "", "ISonyPSPremiumHelper");
