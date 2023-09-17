#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::AccessControl {
struct ObjectAceFlags;
}
// Type: System.Security.AccessControl::ObjectAceFlags
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3039))
// CS Name: System.Security.AccessControl.ObjectAceFlags
struct CORDL_TYPE ObjectAceFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ObjectAceFlags(int32_t value__) noexcept;


                    constexpr ObjectAceFlags(ObjectAceFlags const&) = default;
                    constexpr ObjectAceFlags(ObjectAceFlags&&) = default;
                    constexpr ObjectAceFlags& operator=(ObjectAceFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ObjectAceFlags& operator=(ObjectAceFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ObjectAceFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ObjectAceFlags_Unwrapped : int32_t {
__None = 0,
__ObjectAceTypePresent = 1,
__InheritedObjectAceTypePresent = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ObjectAceFlags_Unwrapped () const noexcept {
return std::bit_cast<__ObjectAceFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Security::AccessControl::ObjectAceFlags const None;

/// @brief Field ObjectAceTypePresent offset 0
static ::System::Security::AccessControl::ObjectAceFlags const ObjectAceTypePresent;

/// @brief Field InheritedObjectAceTypePresent offset 0
static ::System::Security::AccessControl::ObjectAceFlags const InheritedObjectAceTypePresent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ObjectAceFlags, "System.Security.AccessControl", "ObjectAceFlags");
