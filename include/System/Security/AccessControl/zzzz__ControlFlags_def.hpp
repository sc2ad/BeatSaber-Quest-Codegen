#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::AccessControl {
struct ControlFlags;
}
// Type: System.Security.AccessControl::ControlFlags
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3024))
// CS Name: System.Security.AccessControl.ControlFlags
struct CORDL_TYPE ControlFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControlFlags(int32_t value__) noexcept;


                    constexpr ControlFlags(ControlFlags const&) = default;
                    constexpr ControlFlags(ControlFlags&&) = default;
                    constexpr ControlFlags& operator=(ControlFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ControlFlags& operator=(ControlFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ControlFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ControlFlags_Unwrapped : int32_t {
__None = 0,
__OwnerDefaulted = 1,
__GroupDefaulted = 2,
__DiscretionaryAclPresent = 4,
__DiscretionaryAclDefaulted = 8,
__SystemAclPresent = 16,
__SystemAclDefaulted = 32,
__DiscretionaryAclUntrusted = 64,
__ServerSecurity = 128,
__DiscretionaryAclAutoInheritRequired = 256,
__SystemAclAutoInheritRequired = 512,
__DiscretionaryAclAutoInherited = 1024,
__SystemAclAutoInherited = 2048,
__DiscretionaryAclProtected = 4096,
__SystemAclProtected = 8192,
__RMControlValid = 16384,
__SelfRelative = 32768,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControlFlags_Unwrapped () const noexcept {
return std::bit_cast<__ControlFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Security::AccessControl::ControlFlags const None;

/// @brief Field OwnerDefaulted offset 0
static ::System::Security::AccessControl::ControlFlags const OwnerDefaulted;

/// @brief Field GroupDefaulted offset 0
static ::System::Security::AccessControl::ControlFlags const GroupDefaulted;

/// @brief Field DiscretionaryAclPresent offset 0
static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclPresent;

/// @brief Field DiscretionaryAclDefaulted offset 0
static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclDefaulted;

/// @brief Field SystemAclPresent offset 0
static ::System::Security::AccessControl::ControlFlags const SystemAclPresent;

/// @brief Field SystemAclDefaulted offset 0
static ::System::Security::AccessControl::ControlFlags const SystemAclDefaulted;

/// @brief Field DiscretionaryAclUntrusted offset 0
static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclUntrusted;

/// @brief Field ServerSecurity offset 0
static ::System::Security::AccessControl::ControlFlags const ServerSecurity;

/// @brief Field DiscretionaryAclAutoInheritRequired offset 0
static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclAutoInheritRequired;

/// @brief Field SystemAclAutoInheritRequired offset 0
static ::System::Security::AccessControl::ControlFlags const SystemAclAutoInheritRequired;

/// @brief Field DiscretionaryAclAutoInherited offset 0
static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclAutoInherited;

/// @brief Field SystemAclAutoInherited offset 0
static ::System::Security::AccessControl::ControlFlags const SystemAclAutoInherited;

/// @brief Field DiscretionaryAclProtected offset 0
static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclProtected;

/// @brief Field SystemAclProtected offset 0
static ::System::Security::AccessControl::ControlFlags const SystemAclProtected;

/// @brief Field RMControlValid offset 0
static ::System::Security::AccessControl::ControlFlags const RMControlValid;

/// @brief Field SelfRelative offset 0
static ::System::Security::AccessControl::ControlFlags const SelfRelative;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ControlFlags, "System.Security.AccessControl", "ControlFlags");
