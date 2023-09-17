#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult;
}
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
// Type: ::DisplayProductBrowseDialogResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4171))
// CS Name: ISonyCommerceHelper::DisplayProductBrowseDialogResult
struct CORDL_TYPE ____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult(____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult const&) = default;
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult(____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult&&) = default;
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult& operator=(____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult& operator=(____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped : int32_t {
__OK = 0,
__Failed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult const OK;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DisplayCategoryBrowseDialogResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4172))
// CS Name: ISonyCommerceHelper::DisplayCategoryBrowseDialogResult
struct CORDL_TYPE ____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult(____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult const&) = default;
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult(____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult&&) = default;
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult& operator=(____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult& operator=(____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped : int32_t {
__OK = 0,
__Failed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult const OK;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetAdditionalContentEntitlementsResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4173))
// CS Name: ISonyCommerceHelper::GetAdditionalContentEntitlementsResult
struct CORDL_TYPE ____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult(____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult const&) = default;
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult(____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult&&) = default;
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult& operator=(____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult& operator=(____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped : int32_t {
__OK = 0,
__Failed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult const OK;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AdditionalContentEntitlementsAsyncResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4174))
// CS Name: ISonyCommerceHelper::AdditionalContentEntitlementsAsyncResult
struct CORDL_TYPE ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult", modifiers: "", def_value: None }, CppParam { name: "entitlementsLabels", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult result, ::ArrayW<::StringW> entitlementsLabels) noexcept;


                    constexpr ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult(____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult const&) = default;
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult(____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult&&) = default;
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult& operator=(____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult& operator=(____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult __get_result() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_entitlementsLabels, put=__set_entitlementsLabels))  entitlementsLabels;

constexpr void __set_entitlementsLabels(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_entitlementsLabels() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ISonyCommerceHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4175))
// CS Name: ISonyCommerceHelper
class CORDL_TYPE ISonyCommerceHelper : public ::cordl_internals::InterfaceW {
public:
// Declarations
using AdditionalContentEntitlementsAsyncResult = ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;

using GetAdditionalContentEntitlementsResult = ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult;

using DisplayCategoryBrowseDialogResult = ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult;

using DisplayProductBrowseDialogResult = ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult;

~ISonyCommerceHelper() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISonyCommerceHelper(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetAdditionalContentEntitlementsAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> GetAdditionalContentEntitlementsAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method DisplayProductBrowseDialogAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> DisplayProductBrowseDialogAsync(::StringW productLabel, ::System::Threading::CancellationToken token) ;

/// @brief Method DisplayCategoryBrowseDialogAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult> DisplayCategoryBrowseDialogAsync(::StringW categoryLabel, ::System::Threading::CancellationToken token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult, "", "ISonyCommerceHelper/DisplayCategoryBrowseDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult, "", "ISonyCommerceHelper/DisplayProductBrowseDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult, "", "ISonyCommerceHelper/GetAdditionalContentEntitlementsResult");
NEED_NO_BOX(::GlobalNamespace::ISonyCommerceHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyCommerceHelper, "", "ISonyCommerceHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, "", "ISonyCommerceHelper/AdditionalContentEntitlementsAsyncResult");
