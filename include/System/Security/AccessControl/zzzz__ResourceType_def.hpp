#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::AccessControl {
struct ResourceType;
}
// Type: System.Security.AccessControl::ResourceType
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3044))
// CS Name: System.Security.AccessControl.ResourceType
struct CORDL_TYPE ResourceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ResourceType(int32_t value__) noexcept;


                    constexpr ResourceType(ResourceType const&) = default;
                    constexpr ResourceType(ResourceType&&) = default;
                    constexpr ResourceType& operator=(ResourceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ResourceType& operator=(ResourceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ResourceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ResourceType_Unwrapped : int32_t {
__Unknown = 0,
__FileObject = 1,
__Service = 2,
__Printer = 3,
__RegistryKey = 4,
__LMShare = 5,
__KernelObject = 6,
__WindowObject = 7,
__DSObject = 8,
__DSObjectAll = 9,
__ProviderDefined = 10,
__WmiGuidObject = 11,
__RegistryWow6432Key = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ResourceType_Unwrapped () const noexcept {
return std::bit_cast<__ResourceType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::System::Security::AccessControl::ResourceType const Unknown;

/// @brief Field FileObject offset 0
static ::System::Security::AccessControl::ResourceType const FileObject;

/// @brief Field Service offset 0
static ::System::Security::AccessControl::ResourceType const Service;

/// @brief Field Printer offset 0
static ::System::Security::AccessControl::ResourceType const Printer;

/// @brief Field RegistryKey offset 0
static ::System::Security::AccessControl::ResourceType const RegistryKey;

/// @brief Field LMShare offset 0
static ::System::Security::AccessControl::ResourceType const LMShare;

/// @brief Field KernelObject offset 0
static ::System::Security::AccessControl::ResourceType const KernelObject;

/// @brief Field WindowObject offset 0
static ::System::Security::AccessControl::ResourceType const WindowObject;

/// @brief Field DSObject offset 0
static ::System::Security::AccessControl::ResourceType const DSObject;

/// @brief Field DSObjectAll offset 0
static ::System::Security::AccessControl::ResourceType const DSObjectAll;

/// @brief Field ProviderDefined offset 0
static ::System::Security::AccessControl::ResourceType const ProviderDefined;

/// @brief Field WmiGuidObject offset 0
static ::System::Security::AccessControl::ResourceType const WmiGuidObject;

/// @brief Field RegistryWow6432Key offset 0
static ::System::Security::AccessControl::ResourceType const RegistryWow6432Key;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ResourceType, "System.Security.AccessControl", "ResourceType");
