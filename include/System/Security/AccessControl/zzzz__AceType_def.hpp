#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::AccessControl {
struct AceType;
}
// Type: System.Security.AccessControl::AceType
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3015))
// CS Name: System.Security.AccessControl.AceType
struct CORDL_TYPE AceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AceType(uint8_t value__) noexcept;


                    constexpr AceType(AceType const&) = default;
                    constexpr AceType(AceType&&) = default;
                    constexpr AceType& operator=(AceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AceType& operator=(AceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AceType_Unwrapped : uint8_t {
__AccessAllowed = 0u,
__AccessDenied = 1u,
__SystemAudit = 2u,
__SystemAlarm = 3u,
__AccessAllowedCompound = 4u,
__AccessAllowedObject = 5u,
__AccessDeniedObject = 6u,
__SystemAuditObject = 7u,
__SystemAlarmObject = 8u,
__AccessAllowedCallback = 9u,
__AccessDeniedCallback = 10u,
__AccessAllowedCallbackObject = 11u,
__AccessDeniedCallbackObject = 12u,
__SystemAuditCallback = 13u,
__SystemAlarmCallback = 14u,
__SystemAuditCallbackObject = 15u,
__SystemAlarmCallbackObject = 16u,
__MaxDefinedAceType = 16u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AceType_Unwrapped () const noexcept {
return std::bit_cast<__AceType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field AccessAllowed offset 0
static System::Security::AccessControl::AceType const AccessAllowed;

/// @brief Field AccessDenied offset 0
static System::Security::AccessControl::AceType const AccessDenied;

/// @brief Field SystemAudit offset 0
static System::Security::AccessControl::AceType const SystemAudit;

/// @brief Field SystemAlarm offset 0
static System::Security::AccessControl::AceType const SystemAlarm;

/// @brief Field AccessAllowedCompound offset 0
static System::Security::AccessControl::AceType const AccessAllowedCompound;

/// @brief Field AccessAllowedObject offset 0
static System::Security::AccessControl::AceType const AccessAllowedObject;

/// @brief Field AccessDeniedObject offset 0
static System::Security::AccessControl::AceType const AccessDeniedObject;

/// @brief Field SystemAuditObject offset 0
static System::Security::AccessControl::AceType const SystemAuditObject;

/// @brief Field SystemAlarmObject offset 0
static System::Security::AccessControl::AceType const SystemAlarmObject;

/// @brief Field AccessAllowedCallback offset 0
static System::Security::AccessControl::AceType const AccessAllowedCallback;

/// @brief Field AccessDeniedCallback offset 0
static System::Security::AccessControl::AceType const AccessDeniedCallback;

/// @brief Field AccessAllowedCallbackObject offset 0
static System::Security::AccessControl::AceType const AccessAllowedCallbackObject;

/// @brief Field AccessDeniedCallbackObject offset 0
static System::Security::AccessControl::AceType const AccessDeniedCallbackObject;

/// @brief Field SystemAuditCallback offset 0
static System::Security::AccessControl::AceType const SystemAuditCallback;

/// @brief Field SystemAlarmCallback offset 0
static System::Security::AccessControl::AceType const SystemAlarmCallback;

/// @brief Field SystemAuditCallbackObject offset 0
static System::Security::AccessControl::AceType const SystemAuditCallbackObject;

/// @brief Field SystemAlarmCallbackObject offset 0
static System::Security::AccessControl::AceType const SystemAlarmCallbackObject;

/// @brief Field MaxDefinedAceType offset 0
static System::Security::AccessControl::AceType const MaxDefinedAceType;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::AceType, "System.Security.AccessControl", "AceType");
