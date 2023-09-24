#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::InteropServices {
struct DllImportSearchPath;
}
// Type: System.Runtime.InteropServices::DllImportSearchPath
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3322))
// CS Name: System.Runtime.InteropServices.DllImportSearchPath
struct CORDL_TYPE DllImportSearchPath : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DllImportSearchPath(int32_t value__) noexcept;


                    constexpr DllImportSearchPath(DllImportSearchPath const&) = default;
                    constexpr DllImportSearchPath(DllImportSearchPath&&) = default;
                    constexpr DllImportSearchPath& operator=(DllImportSearchPath const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DllImportSearchPath& operator=(DllImportSearchPath&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DllImportSearchPath(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DllImportSearchPath_Unwrapped : int32_t {
__UseDllDirectoryForDependencies = 256,
__ApplicationDirectory = 512,
__UserDirectories = 1024,
__System32 = 2048,
__SafeDirectories = 4096,
__AssemblyDirectory = 2,
__LegacyBehavior = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DllImportSearchPath_Unwrapped () const noexcept {
return std::bit_cast<__DllImportSearchPath_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UseDllDirectoryForDependencies offset 0
static System::Runtime::InteropServices::DllImportSearchPath const UseDllDirectoryForDependencies;

/// @brief Field ApplicationDirectory offset 0
static System::Runtime::InteropServices::DllImportSearchPath const ApplicationDirectory;

/// @brief Field UserDirectories offset 0
static System::Runtime::InteropServices::DllImportSearchPath const UserDirectories;

/// @brief Field System32 offset 0
static System::Runtime::InteropServices::DllImportSearchPath const System32;

/// @brief Field SafeDirectories offset 0
static System::Runtime::InteropServices::DllImportSearchPath const SafeDirectories;

/// @brief Field AssemblyDirectory offset 0
static System::Runtime::InteropServices::DllImportSearchPath const AssemblyDirectory;

/// @brief Field LegacyBehavior offset 0
static System::Runtime::InteropServices::DllImportSearchPath const LegacyBehavior;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::DllImportSearchPath, "System.Runtime.InteropServices", "DllImportSearchPath");
