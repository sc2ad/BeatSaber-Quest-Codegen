#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
struct UIntPtr;
}
// Type: System::UIntPtr
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2637))
// CS Name: System.UIntPtr
struct CORDL_TYPE UIntPtr : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::IEquatable_1<::cordl_internals::uintptr_t>
constexpr operator  System::IEquatable_1<::cordl_internals::uintptr_t>() const;

// Ctor Parameters [CppParam { name: "_pointer", ty: "void*", modifiers: "", def_value: None }]
constexpr UIntPtr(void* _pointer) noexcept;


                    constexpr UIntPtr(UIntPtr const&) = default;
                    constexpr UIntPtr(UIntPtr&&) = default;
                    constexpr UIntPtr& operator=(UIntPtr const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UIntPtr& operator=(UIntPtr&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UIntPtr(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::cordl_internals::uintptr_t __declspec(property(get=__get_Zero, put=__set_Zero))  Zero;

static void __set_Zero(::cordl_internals::uintptr_t value) ;

static ::cordl_internals::uintptr_t __get_Zero() ;

 void* __declspec(property(get=__get__pointer, put=__set__pointer))  _pointer;

constexpr void __set__pointer(void* value) ;

constexpr void* __get__pointer() const;


// Properties

static int32_t __declspec(property(get=get_Size))  Size;


// Methods

/// @brief Method .ctor addr 0x249b75c size 0x60 virtual false final false
 void _ctor(uint64_t value) ;

/// @brief Method .ctor addr 0x249b7c4 size 0xc virtual false final false
 void _ctor(uint32_t value) ;

/// @brief Method .ctor addr 0x249b7d0 size 0x8 virtual false final false
 void _ctor(void* value) ;

/// @brief Method Equals addr 0x249b7d8 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x249b850 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x249b858 size 0x70 virtual true final false
 ::StringW ToString() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x249b8c8 size 0xa4 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method op_Equality addr 0x249b96c size 0xc virtual false final false
static bool op_Equality(::cordl_internals::uintptr_t value1, ::cordl_internals::uintptr_t value2) ;

/// @brief Method op_Inequality addr 0x249b978 size 0xc virtual false final false
static bool op_Inequality(::cordl_internals::uintptr_t value1, ::cordl_internals::uintptr_t value2) ;

/// @brief Method op_Explicit addr 0x249b984 size 0x4 virtual false final false
static uint64_t op_Explicit_uint64_t(::cordl_internals::uintptr_t value) ;

/// @brief Method op_Explicit addr 0x249b988 size 0x4 virtual false final false
static uint32_t op_Explicit_uint32_t(::cordl_internals::uintptr_t value) ;

/// @brief Method op_Explicit addr 0x249b98c size 0x20 virtual false final false
static ::cordl_internals::uintptr_t op_Explicit___cordl_internals__uintptr_t(uint64_t value) ;

/// @brief Method op_Explicit addr 0x249b9ac size 0x8 virtual false final false
static ::cordl_internals::uintptr_t op_Explicit___cordl_internals__uintptr_t(uint32_t value) ;

/// @brief Method get_Size addr 0x249b7bc size 0x8 virtual false final false
static int32_t get_Size() ;

/// @brief Method System.IEquatable<System.UIntPtr>.Equals addr 0x249b9b4 size 0x10 virtual true final true
 bool System_IEquatable_System_UIntPtr__Equals(::cordl_internals::uintptr_t other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::UIntPtr, "System", "UIntPtr");
