#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Runtime::InteropServices {
struct GCHandleType;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
struct GCHandle;
}
// Type: System.Runtime.InteropServices::GCHandle
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3329))
// CS Name: System.Runtime.InteropServices.GCHandle
struct CORDL_TYPE GCHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr GCHandle(::cordl_internals::intptr_t handle) noexcept;


                    constexpr GCHandle(GCHandle const&) = default;
                    constexpr GCHandle(GCHandle&&) = default;
                    constexpr GCHandle& operator=(GCHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GCHandle& operator=(GCHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GCHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_handle() const;


// Properties

 bool __declspec(property(get=get_IsAllocated))  IsAllocated;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Target, put=set_Target))  Target;


// Methods

/// @brief Method .ctor addr 0x236b42c size 0x8 virtual false final false
 void _ctor(::cordl_internals::intptr_t h) ;

/// @brief Method .ctor addr 0x236b434 size 0x68 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method .ctor addr 0x236b49c size 0x74 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType value, ::System::Runtime::InteropServices::GCHandleType type) ;

/// @brief Method get_IsAllocated addr 0x236b514 size 0x54 virtual false final false
 bool get_IsAllocated() ;

/// @brief Method get_Target addr 0x236b568 size 0x68 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Target() ;

/// @brief Method set_Target addr 0x236b5d4 size 0x28 virtual false final false
 void set_Target(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method AddrOfPinnedObject addr 0x236b5fc size 0xe8 virtual false final false
 ::cordl_internals::intptr_t AddrOfPinnedObject() ;

/// @brief Method Alloc addr 0x236b6e8 size 0x54 virtual false final false
static ::System::Runtime::InteropServices::GCHandle Alloc(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Alloc addr 0x236b73c size 0x68 virtual false final false
static ::System::Runtime::InteropServices::GCHandle Alloc(::bs_hook::Il2CppWrapperType value, ::System::Runtime::InteropServices::GCHandleType type) ;

/// @brief Method Free addr 0x236b7a4 size 0xdc virtual false final false
 void Free() ;

/// @brief Method op_Explicit addr 0x236b884 size 0x4 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(::System::Runtime::InteropServices::GCHandle value) ;

/// @brief Method op_Explicit addr 0x236b888 size 0xf0 virtual false final false
static ::System::Runtime::InteropServices::GCHandle op_Explicit___System__Runtime__InteropServices__GCHandle(::cordl_internals::intptr_t value) ;

/// @brief Method CheckCurrentDomain addr 0x236b978 size 0x4 virtual false final false
static bool CheckCurrentDomain(::cordl_internals::intptr_t handle) ;

/// @brief Method GetTarget addr 0x236b5d0 size 0x4 virtual false final false
static ::bs_hook::Il2CppWrapperType GetTarget(::cordl_internals::intptr_t handle) ;

/// @brief Method GetTargetHandle addr 0x236b510 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetTargetHandle(::bs_hook::Il2CppWrapperType obj, ::cordl_internals::intptr_t handle, ::System::Runtime::InteropServices::GCHandleType type) ;

/// @brief Method FreeHandle addr 0x236b880 size 0x4 virtual false final false
static void FreeHandle(::cordl_internals::intptr_t handle) ;

/// @brief Method GetAddrOfPinnedObject addr 0x236b6e4 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetAddrOfPinnedObject(::cordl_internals::intptr_t handle) ;

/// @brief Method op_Equality addr 0x236b97c size 0x8 virtual false final false
static bool op_Equality(::System::Runtime::InteropServices::GCHandle a, ::System::Runtime::InteropServices::GCHandle b) ;

/// @brief Method Equals addr 0x236b984 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x236ba04 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method FromIntPtr addr 0x236ba0c size 0x4 virtual false final false
static ::System::Runtime::InteropServices::GCHandle FromIntPtr(::cordl_internals::intptr_t value) ;

/// @brief Method ToIntPtr addr 0x236ba10 size 0x4 virtual false final false
static ::cordl_internals::intptr_t ToIntPtr(::System::Runtime::InteropServices::GCHandle value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
